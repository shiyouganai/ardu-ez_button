/**
 * \file
 * \author shiyouganai
 * \copyright 2019 shiyouganai
 * 
 * \brief File defining flying_text class.
 */
#include "flying_text.h"
#include <Arduboy2.h>

extern Arduboy2 arduboy;

static const char message_default[] = "DEFAULT TEXT";

flying_text::flying_text()
{
    this->message = &message_default[0];
    x_pos_0       = -100;
    y_pos_0       = -100;
    x_pos         = x_pos_0;
    y_pos         = y_pos_0;
    velocity_x    = 0.0F;
    velocity_y    = 0.0F;
    gravity       = 0.0F;
    time          = 999.0F;
}

flying_text::flying_text(const char *message)
{
    this->message = message;
    x_pos_0       = -100;
    y_pos_0       = -100;
    x_pos         = x_pos_0;
    y_pos         = y_pos_0;
    velocity_x    = 0.0F;
    velocity_y    = 0.0F;
    gravity       = 0.0F;
    time          = 999.0F;
}

void flying_text::draw()
{
    arduboy.setCursor(x_pos, y_pos);
    arduboy.print(message);
}

void flying_text::launch()
{
    x_pos_0       = random(0, 20);
    y_pos_0       = 72;
    velocity_x    = random(0, 20);
    velocity_y    = -53.0F;
    gravity       = -20.0F;
    time          = 0.0F;

    if(random(2)) {
        x_pos_0 = 64 - x_pos_0;
        velocity_x = (-1) * velocity_x;
    }
}

void flying_text::update(uint8_t frames_delta, uint8_t frame_duration)
{
    if (6.0F < time) {
        return;
    }
    time += (((float)(frames_delta * frame_duration))/1000.0F);
    x_pos = (float)x_pos_0 + (velocity_x * time);
    y_pos = (float)y_pos_0 + (velocity_y * time) - ((gravity/2) * time * time);
}

void flying_text::set_message(const char *message)
{
    this->message = message;
}