/**
 * \file
 * \author shiyouganai
 * \copyright 2019 shiyouganai
 * 
 * \brief File declaring and defining the entity class.
 */
#ifndef ENTITY_H
#define ENTITY_H

#include <stdint.h>

/**
 * \brief Abstract base entity class.
 * 
 * This base class implements a renderable entity, with updates tied to the
 * tick rate of the game's autio synth.
 */
class entity
{
    protected:
        int16_t x_pos; /**> Current x-coordinate in 2D space of the entity. */
        int16_t y_pos; /**> Current y-coordinate in 2D space of the entity. */

    public:

        /**
         * \brief Draw entity to framebuffer.
         */
        virtual void draw() = 0;

        /**
         * \brief Update entity's state.
         * 
         * The entity can update its state, if desired.
         * 
         * \param[in] frames_delta     The number of ticks since last update.
         * \param[in] pixels_per_tick The number of pixels entity moves/tick.
         */
        virtual void update(uint8_t frames_delta, uint8_t frame_duration) = 0;
};

#endif