/*
 * This file is part of Rotorflight.
 *
 * Rotorflight is free software. You can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Rotorflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software. If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include "types.h"
#include "platform.h"

#include "pg/pg.h"

typedef struct {
    uint16_t    angle; //degrees
    uint16_t    initialAltitudeM; //meters
    uint16_t    descentDistanceM; //meters
    uint16_t    rescueGroundspeed; //centimeters per second
    uint16_t    throttleP, throttleI, throttleD;
    uint16_t    yawP;
    uint16_t    throttleMin;
    uint16_t    throttleMax;
    uint16_t    throttleHover;
    uint16_t    velP, velI, velD;
    uint8_t     minSats;
    uint16_t    minRescueDth; //meters
    uint8_t     sanityChecks;
    uint8_t     allowArmingWithoutFix;
    uint8_t     useMag;
    uint16_t    targetLandingAltitudeM; //meters
    uint16_t    targetLandingDistanceM; //meters
    uint8_t     altitudeMode;
    uint16_t    ascendRate;
    uint16_t    descendRate;
    uint16_t    rescueAltitudeBufferM; //meters
} gpsRescueConfig_t;

PG_DECLARE(gpsRescueConfig_t, gpsRescueConfig);

