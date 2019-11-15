/**
 * \file
 * \author shiyouganai
 * \copyright 2019 shiyouganai
 * 
 * \brief File declaring button class.
 */
#ifndef BUTTON_H
#define BUTTON_H

#include "entity.h"

#define BUTTON_LEFT_CORNER_X 62
#define BUTTON_LEFT_CORNER_Y 15

#define BUTTON_EZ  0U
#define BUTTON_NUT 1U

/* Button config conditional compiles */
#define BUTTON_TYPE  BUTTON_EZ

/**
 * \brief The button class.
 * 
 * This class contains the logic to render/manipulate the
 * nut button.
 */
class button: public entity
{
    private:
        const uint8_t *sprite_plus_mask;
        uint8_t        frame;
        uint8_t        circle_radii[8] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
        uint8_t        circle_radii_index = 0U;
        uint8_t        press_counter;
    public:
        button();
        button(int16_t x_pos, int16_t y_pos);
        void draw();
        void update(uint8_t frames_delta, uint8_t frame_duration);
        void press();
        void release();
        uint16_t get_press_count();
};

#endif