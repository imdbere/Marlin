/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __STM32F1__
  #error "Oops!  Make sure you have an STM32F1 board selected from the 'Tools -> Boards' menu."
#endif

#define BOARD_NAME         "Einsy STM"

/* #if !AXIS_DRIVER_TYPE(X, TMC2130) || !AXIS_DRIVER_TYPE(Y, TMC2130) || !AXIS_DRIVER_TYPE(Z, TMC2130)  || !AXIS_DRIVER_TYPE(E0, TMC2130)
  #error "You must set ([XYZ]|E0)_DRIVER_TYPE to TMC2130 in Configuration.h for EinsyRambo."
#endif */

// TMC2130 Diag Pins (currently just for reference)
/* #define X_DIAG_PIN         64
#define Y_DIAG_PIN         69
#define Z_DIAG_PIN         68
#define E0_DIAG_PIN        65 */


/**
 * 21017 Victor Perez Marlin for stm32f1 test
 */

#define DEFAULT_MACHINE_NAME "STM32F103VC"

#define FLASH_EEPROM_EMULATION
// No idea if this is right....
#define E2END 0xFFF

// Ignore temp readings during develpment.
//#define BOGUS_TEMPERATURE_FAILSAFE_OVERRIDE

/* #if DISABLED(SENSORLESS_HOMING)

  #define X_STOP_PIN       12
  #define Y_STOP_PIN       11
  #define Z_STOP_PIN       10

#else

  #define X_STOP_PIN       X_DIAG_PIN
  #define Y_STOP_PIN       Y_DIAG_PIN

  #if ENABLED(BLTOUCH)
    #define Z_STOP_PIN     11   // Y-MIN
    #define SERVO0_PIN     10   // Z-MIN
  #else
    #define Z_STOP_PIN     10
  #endif

#endif */

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  10
#endif

//
// Endstops
//

#define X_MIN_PIN          PD1
#define X_MAX_PIN          -1

#define Y_MIN_PIN          PD0
#define Y_MAX_PIN          -1

#define Z_MIN_PIN          PC11
#define Z_MAX_PIN          -1


//
// Steppers
//
#define X_STEP_PIN         PA1
#define X_DIR_PIN          PA0
#define X_ENABLE_PIN       PC3
#define X_CS_PIN           PA2

#define Y_STEP_PIN         PA4
#define Y_DIR_PIN          PA3
#define Y_ENABLE_PIN       PC2
#define Y_CS_PIN           PC4

#define Z_STEP_PIN         PB0
#define Z_DIR_PIN          PC5
#define Z_ENABLE_PIN       PC1
#define Z_CS_PIN           PB1

/* #define Y2_STEP_PIN        -1
#define Y2_DIR_PIN         -1
#define Y2_ENABLE_PIN      -1

#define Z2_STEP_PIN        -1
#define Z2_DIR_PIN         -1
#define Z2_ENABLE_PIN      -1 */

#define E0_STEP_PIN        PB10
#define E0_DIR_PIN         PE15
#define E0_ENABLE_PIN      PC0
#define E0_CS_PIN          PB11

/**
 * TODO: Currently using same Enable pin to all steppers.
 */
/* 
#define E1_STEP_PIN        PC8
#define E1_DIR_PIN         PC9
#define E1_ENABLE_PIN      PA8

#define E2_STEP_PIN        PC10
#define E2_DIR_PIN         PC11
#define E2_ENABLE_PIN      PA8 */

//
// Misc. Functions
//
/* #define SDPOWER            -1 */
#define SDSS               PE6
#define LED_PIN            -1
#define CASE_LIGHT_PIN      9

#define PS_ON_PIN          -1
#define KILL_PIN           -1

//
// Heaters / Fans
//
#define HEATER_0_PIN       PE1   // EXTRUDER 1  POUT Medium 1
#define HEATER_1_PIN       PB8   // POUT Medium 2
#define HEATER_2_PIN       PB9   // POUT Medium 3

#define HEATER_BED_PIN     PB5   // BED POUT High
#define HEATER_BED2_PIN    -1    // BED2
#define HEATER_BED3_PIN    -1    // BED3

//#define FAN_PIN             PB4 //POUT 5V
//#define FAN1_PIN            PB3 //POUT Medium 4

//
// Temperature Sensors
//
#define TEMP_BED_PIN       PD2   // Therm1
#define TEMP_0_PIN         PC12   // Therm2
#define TEMP_1_PIN         -1 //PA15   // Therm3
#define TEMP_2_PIN         -1   // 

//
// LCD Pins
//

#if ENABLED(ULTRA_LCD)

  //#define KILL_PIN         32

  #if ENABLED(NEWPANEL)

    #if ENABLED(CR10_STOCKDISPLAY)
      #define LCD_PINS_RS         PE12 //PE12  or
      #define LCD_PINS_ENABLE     PE9//PE13
      #define LCD_PINS_D4         PE11
      #define BTN_EN1         PE10
      #define BTN_EN2         PE8
    #else
      #define LCD_PINS_RS         PE9
      #define LCD_PINS_ENABLE     PE8
      #define LCD_PINS_D4         PE10
      #define LCD_PINS_D5         PE11
      #define LCD_PINS_D6         PE12
      #define LCD_PINS_D7         PE13
      #define BTN_EN1         PE4
      #define BTN_EN2         PE3
    #endif

    #define BTN_ENC            PE7   // AUX-2
    #define BEEPER_PIN        PB2   // AUX-4
    #define SD_DETECT_PIN     PE5

  #endif // NEWPANEL
#endif // ULTRA_LCD

#define U_MIN_PIN          -1
#define V_MIN_PIN          -1
#define W_MIN_PIN          -1



