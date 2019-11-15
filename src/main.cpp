/**
 * \file
 * \author shiyouganai
 * \copyright 2019 shiyouganai
 * 
 * \brief Entry point of C++ program after runtime init.
 */
#include <Arduino.h>
#include <Arduboy2.h>
#include <ArduboyTones.h>
#include <button.h>
#include <flying_text.h>

/**
 * \brief Enumerate the discrete game states.
 */
enum game_state_e
{
    INIT,
    WAITING,
    PRESSED,
    END_OF_GAME_STATE_E
};

game_state_e game_state_curr = INIT;
game_state_e game_state_next = INIT;

Arduboy2     arduboy;
ArduboyTones tone_player(arduboy.audio.enabled);
Sprites      sprites;

const char message_ez[]  = "THAT WAS EZ!";
const char message_nut[] = "NUT";

const uint16_t tones_ez[] PROGMEM = {
  1000,150, 0,50, 800,100, 900,150, 0,50, 900,150,
  TONES_END };
const uint16_t tones_nut[] PROGMEM = {
  600,200,
  TONES_END };

int main(void)
{
    button big_button(BUTTON_LEFT_CORNER_X, BUTTON_LEFT_CORNER_Y);
    flying_text flyers[8];
    uint8_t     flyer_curr = 0U;

    /* arduino specific init */
    init();
    Serial.begin(9600);

    /* atmega32u4 usb device init */
    #if defined(USBCON)
    USBDevice.attach();
    #endif

    /* arduboy specific init */
    arduboy.boot();
    arduboy.display(CLEAR_BUFFER);
    arduboy.safeMode();
    arduboy.systemButtons();
    arduboy.audio.off();
    arduboy.bootLogo();
    arduboy.initRandomSeed();
    arduboy.waitNoButtons();
    arduboy.setFrameDuration(32U);

    /* infinite loop */
    for (;;) {
        #ifdef SERIAL_EVENTS
        if (serialEventRun) serialEventRun();
        #endif

        if (arduboy.nextFrameDEV()) {
            /* if it's not time to advance a frame, do nothing */
            continue;
        }

        /* do every frame on entry */
        arduboy.pollButtons();
        if (arduboy.justPressed(B_BUTTON)) {
            arduboy.audio.toggle();
        }

        /* do conditionally */
        game_state_curr = game_state_next;
        switch (game_state_curr)
        {
            case INIT:
                for (uint8_t cnt = 0; cnt < 8; cnt++) {
                    #if (BUTTON_EZ == BUTTON_TYPE)
                    flyers[cnt].set_message(message_ez);
                    #else
                    flyers[cnt].set_message(message_nut);
                    #endif
                }
                game_state_next = WAITING;
                break;
            case WAITING:
                if (arduboy.justPressed(A_BUTTON)) {
                    big_button.press();
                    flyers[flyer_curr++].launch();
                    if (8 == flyer_curr) {
                        flyer_curr = 0U;
                    }
                    #if (BUTTON_EZ == BUTTON_TYPE)
                    tone_player.tones(tones_ez);
                    #else
                    tone_player.tones(tones_nut);
                    #endif
                    game_state_next = PRESSED;
                }
                break;
            case PRESSED:
                if (arduboy.justReleased(A_BUTTON)) {
                    big_button.release();
                    game_state_next = WAITING;
                }
                break;
            default:
                break;
        }

        /* do every frame on exit */
        /* update states */
        big_button.update(1U, 32U);
        for (uint8_t cnt = 0; cnt < 8; cnt++) {
            flyers[cnt].update(1U, 32U);
        }

        /* draw frame */
        for (uint8_t cnt = 0; cnt < 8; cnt++) {
            flyers[cnt].draw();
        }

        arduboy.fillRect(1, 45, 50, 18, BLACK);
        arduboy.drawRoundRect(0, 44, 52, 20, 2, WHITE);

        #if (BUTTON_EZ == BUTTON_TYPE)
        arduboy.setCursor(2, 46);
        arduboy.print("TASKS");
        arduboy.setCursor(2, 54);
        arduboy.print("DONE:");
        #else
        arduboy.setCursor(2, 46);
        arduboy.print("NUT");
        arduboy.setCursor(2, 54);
        arduboy.print("COUNT:");
        #endif

        arduboy.print(big_button.get_press_count());

        big_button.draw();

        /* display frame */
        arduboy.display(CLEAR_BUFFER);
	}

    return 0;
}