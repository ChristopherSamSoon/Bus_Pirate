/*
 * This file is part of the Bus Pirate project
 * (http://code.google.com/p/the-bus-pirate/).
 *
 * Written and maintained by the Bus Pirate project.
 *
 * To the extent possible under law, the project has
 * waived all copyright and related or neighboring rights to Bus Pirate. This
 * work is published from United States.
 *
 * For details see: http://creativecommons.org/publicdomain/zero/1.0/.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "raw_common.h"

#if defined(BP_ENABLE_RAW_2WIRE_SUPPORT) || defined(BP_ENABLE_RAW_3WIRE_SUPPORT)

#include "base.h"
#include "bitbang.h"

inline bool raw_read_bit(void) { return bitbang_read_bit(); }

inline uint16_t raw_read_pin(void) { return bitbang_read_miso(); }

inline void raw_set_clock_high(void) { bitbang_set_clk(HIGH); }

inline void raw_set_clock_low(void) { bitbang_set_clk(LOW); }

inline void raw_set_data_low(void) { bitbang_set_mosi(LOW); }

inline void raw_set_data_high(void) { bitbang_set_mosi(HIGH); }

inline void raw_advance_clock(void) { bitbang_advance_clock_ticks(1); }

#endif /* BP_ENABLE_RAW_2WIRE_SUPPORT || BP_ENABLE_RAW_3WIRE_SUPPORT */
