/**
 * \file
 * \author shiyouganai
 * \copyright 2019 shiyouganai
 * 
 * \brief File defining button class.
 */
#include "button.h"
#include <Arduboy2.h>
#include <game_sprites.h>

#define UNPRESSED 0U
#define PRESSED   1U

extern Arduboy2 arduboy;
extern Sprites sprites;

button::button()
{
    #if (BUTTON_EZ == BUTTON_TYPE)
    sprite_plus_mask = &ezButton_plus_mask[0];
    #else
    sprite_plus_mask = &nutButton_plus_mask[0];
    #endif
    x_pos         = 0;
    y_pos         = 0;
    frame         = UNPRESSED;
    press_counter = 0U;
}

button::button(int16_t x_pos, int16_t y_pos)
{
    #if (BUTTON_EZ == BUTTON_TYPE)
    sprite_plus_mask = &ezButton_plus_mask[0];
    #else
    sprite_plus_mask = &nutButton_plus_mask[0];
    #endif
    this->x_pos   = x_pos;
    this->y_pos   = y_pos;
    frame         = UNPRESSED;
    press_counter = 0U;
}

void button::draw()
{
    sprites.drawPlusMask(x_pos, y_pos,
                         sprite_plus_mask, frame);
    for (uint8_t ind = 0U; ind < 8; ind++) {
        if((0U < circle_radii[ind]) && (35 > circle_radii[ind])) {
            for (uint8_t cnt = 0U; cnt < 4; cnt++) {
                arduboy.drawCircle(96, 34, (circle_radii[ind] + cnt), WHITE);
            }
        }
    }
}

void button::update(uint8_t frames_delta, uint8_t frame_duration)
{
    for (uint8_t cnt = 0U; cnt < 8; cnt++) {
        if(0U < circle_radii[cnt]) {
            circle_radii[cnt]++;
        }
    }
}

void button::press()
{
    frame = 1U;
    press_counter++;
    if(7U == circle_radii_index) {
        circle_radii_index = 0U;
    } else {
        circle_radii_index++;
    }
    circle_radii[circle_radii_index] = 18U;
}

void button::release()
{
    frame = 0U;
}

uint16_t button::get_press_count()
{
    return press_counter;
}