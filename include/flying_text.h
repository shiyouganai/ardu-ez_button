/**
 * \file
 * \author shiyouganai
 * \copyright 2019 shiyouganai
 * 
 * \brief File declaring flying_text class.
 */
#ifndef FLYING_TEXT_H
#define FLYING_TEXT_H

#include "entity.h"

/**
 * \brief The flying_text class.
 * 
 * This class contains the logic to render/manipulate the
 * flying text.
 */
class flying_text: public entity
{
    private:
        const char *message;
        uint8_t     x_pos_0;
        uint8_t     y_pos_0;
        uint8_t     frame_count;
        float       velocity_x;
        float       velocity_y;
        float       gravity;
        float       time;
    public:
        flying_text();
        flying_text(const char *message);
        void draw();
        void update(uint8_t frames_delta, uint8_t frame_duration);
        void launch();
        void set_message(const char *message);
};

#endif