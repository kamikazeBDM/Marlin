/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/*************************************
 * Marlin bugfix-2.0.x
 * Compiled version identifier
 ************************************/
#define COMPILE_VERSION "32" 

#define SHORT_BUILD_VERSION "bugfix-2.0.8.0-" COMPILE_VERSION
#define STRING_CONFIG_H_AUTHOR "(JAM)" // Who made the changes.
#define MACHINE_NAME "SKR Mini-E3-V2"
#define CUSTOM_MACHINE_NAME "3863 CR-10S"


/*******************************************************************************************************
 * Vx  mm/dd/YYYY HH:MM 24HR
 * 
 * V32 05/12/2021 10:55
 * 
 *      UPDATES: MARLIN upstream bugfix-2.0.x  05/12/2021
 *      define DEFAULT_TRAVEL_ACCELERATION   2500    // X, Y, Z acceleration for travel (non printing) moves
 *      #define DEFAULT_MAX_ACCELERATION        { 3000, 3000, 250, 9999 }
 *      
 * 
 * V31 05/06/2021 09:29
 * 
 *      UPDATES: MARLIN upstream bugfix-2.0.x  05/06/2021
 *      REMOVED: // #define PRINTER_EVENT_LEDS
 *      REMOVED: // define SQUARE_WAVE_STEPPING
 *      CHANGED:
 *      #define DEFAULT_AXIS_STEPS_PER_UNIT     { 80.20, 80.29, 400, 95.00 }    // 05/06/2021
 *      #define DEFAULT_MAX_FEEDRATE            { 200,  200,  15,   250 }
 *      #define DEFAULT_MAX_ACCELERATION        { 3500, 3500, 250, 9999 }
 *      #define DEFAULT_ACCELERATION          2500    // X, Y, Z and E acceleration for printing moves
 *      #define DEFAULT_RETRACT_ACCELERATION  2500    // E acceleration for retracts
 *      #define DEFAULT_TRAVEL_ACCELERATION   3000    // X, Y, Z acceleration for travel (non printing) moves
 *          #define E0_CURRENT      840
 *          #define Z_CURRENT       970
 *          #define Y_CURRENT       850
 *          #define X_CURRENT       850  
 * 
 * V30 04/30/2021 08:50
 *      UPDATES: MARLIN upstream bugfix-2.0.x  04/30/2021
 * 
 *      !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 *      !!!!!!!!!!! FIRMWARE RELEASE 2.0.8.0 !!!!!!!!!!!!!
 *      !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * 
 *      #define LIN_ADVANCE_K 0.00    (M900)
 * 
 * V29 04/11/2021 09:55
 *      UPDATES: MARLIN upstream bugfix-2.0.x  04/11/2021
 *      #define HOMING_FEEDRATE_MM_M { (90*60), (90*60), (15*60) }
 *      #define MANUAL_FEEDRATE { 100*60, 100*60, 15*60, 2*60 } // (mm/min) Feedrates for manual moves along X, Y, Z, E from panel
 *      #define ADAPTIVE_STEP_SMOOTHING
 *      #define MIN_ARC_SEGMENTS       30 // Minimum number of segments in a complete circle
 *      #define ADVANCED_OK
 *      #define LIN_ADVANCE_K 0.02    (M900)
 * 
 * V28 02/21/2021 09:46
 *      TUNING: SETTINGS:XFER:
 *          M301 P22.43 I2.20 D57.09
 *          M304 P206.21 I40.19 D705.45
 *          M92 X80.29 Y80.29 Z400.00 E95.00
 *          #define DEFAULT_MAX_FEEDRATE            { 300,  300,  5,   50 }
 *          #define DEFAULT_MAX_ACCELERATION        { 2500, 2500, 100, 9999 }
 *          #define DEFAULT_ACCELERATION            3000    // X, Y, Z and E acceleration for printing moves
 *          #define DEFAULT_RETRACT_ACCELERATION    3000    // E acceleration for retracts
 *          #define DEFAULT_TRAVEL_ACCELERATION     3000    // X, Y, Z acceleration for travel (non printing) moves
 *          #define DEFAULT_AXIS_STEPS_PER_UNIT     { 80.29, 80.29, 400, 95.00 } 
 *          M906 X708 Y708 Z900  
 *          M906 T0 E708
 *          M900 K0.04
 * 
 * V27 01/28/2021 17:47
 *      CHANGES:
 *          Corrected Stepper Currents
 *          M900 K0.04
 *          M201 X700.00 Y700.00 Z100.00 E5000.00
 *          M203 X700.00 Y700.00 Z12.00 E300.00
 * 
 * V26 01/28/2021 17:28
 *      ** RELODED: **  
 *          Fresh marlin code files, existing settings re-applied
 *          Fixed NEO_PIXEL in .platformio
 *      CHANGED:
 *      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80.20, 80.35, 400, 95.00 }
 *      #define DEFAULT_MAX_ACCELER ATION      { 900, 900, 125, 5000 }
 *      #define DEFAULT_ACCELERATION          775    // X, Y, Z and E acceleration for printing moves
 *      #define DEFAULT_RETRACT_ACCELERATION  775    // E acceleration for retracts
 *      #define DEFAULT_TRAVEL_ACCELERATION   850    // X, Y, Z acceleration for travel (non printing) moves
 *      #define JUNCTION_DEVIATION_MM 0.015 
 *      REMOVED: #define CASE_LIGHT_ENABLE
 * 
 * 
 * 
 * V25 12/20/2020 12:42
 *      UPDATES: MARLIN upstream bugfix-2.0.x  12/20/2020
 *      RE-ADDED: #define LIN_ADVANCE_K 0.00
 *      RE-ADDED: #define S_CURVE_ACCELERATION
 *      REMVOED:  //#define DIRECT_STEPPING 
 *      #define DEFAULT_ACCELERATION          600    // X, Y, Z and E acceleration for printing moves
 *      #define DEFAULT_RETRACT_ACCELERATION  500    // E acceleration for retracts
 *      #define DEFAULT_TRAVEL_ACCELERATION   500    // X, Y, Z acceleration for travel (non printing) moves* 
 *      #define JUNCTION_DEVIATION_MM 0.04 
 *      ADDED:   #define HYBRID_THRESHOLD
 *      #define HOMING_FEEDRATE_MM_M { (85*60), (85*60), (8*60) }
 * 
 * V24 12/19/2020 09:26
 *      UPDATES: MARLIN upstream bugfix-2.0.x  12/19/2020
 *      define FILAMENT_CHANGE_FAST_LOAD_LENGTH   175 
 *      #define DEFAULT_MAX_FEEDRATE          { 150, 150, 12, 350 }
 *      #define DEFAULT_MAX_ACCELERATION      { 700, 700, 100, 5000 }
 *      #define DEFAULT_ACCELERATION          350    // X, Y, Z and E acceleration for printing moves
 *      #define DEFAULT_RETRACT_ACCELERATION  350    // E acceleration for retracts
 *      #define DEFAULT_TRAVEL_ACCELERATION   350    // X, Y, Z acceleration for travel (non printing) moves
 *      #define LED_USER_PRESET_RGB    255 // define to WHITE
 *      #define XY_FREQUENCY_LIMIT      10 
 *      DISABLED:   //#define BACKLASH_COMPENSATION 
 *      DISABLED:   //#define SD_ABORT_ON_ENDSTOP_HIT
 *      #define ARC_SUPPORT 
 *      #define BEZIER_CURVE_SUPPORT
 *      
 *      ADDED: #define DIRECT_STEPPING 
 *          REMOVED: //#define LIN_ADVANCE
 * 
 *      #define TX_BUFFER_SIZE 4
 *      #define BAUDRATE 250000
 *      DISABLED: //#define S_CURVE_ACCELERATION
 *      
 *      
 * V23 12/11/2020 10:15
 *      UPDATES: MARLIN upstream bugfix-2.0.x  12/11/2020
 *      
 * V22 11/23/2020 12:29
 *      UPDATES: MARLIN upstream bugfix-2.0.x  11/22/2020
 *  
 * V21 10/31/2020 10:07
 *      UPDATES: MARLIN upstream bugfix-2.0.x  10/31/2020
 * 		!! FAST_PWM support added for STM32F1  !!
 *		#define FAST_PWM_FAN
 *	
 * V20 10/28/2020 17:28
 *      UPDATES: MARLIN upstream bugfix-2.0.x  10/28/2020
 * 
 * V19 10/18/2020 10:42
 *      #define LIN_ADVANCE_K 0.03
 *      M204 P1500.00 R1500.00 T1500.00
 *      M201 X5000.00 Y5000.00 Z125.00 E9000.00
 *      M203 X500.00 Y500.00 Z12.00 E500.00
 *      M92 X80.30 Y80.45 Z400.00 E98.10
 *      M301 P19.69 I1.90 D50.92
 *      M304 P178.17 I34.70 D609.93
 *      M906 X750 Y750 Z900
 *      M906 T0 E800
 *      M205 B20000.00 S0.00 T0.00 J0.01
 *      
 *      #define JUNCTION_DEVIATION_MM 0.015
 *      #define BACKLASH_COMPENSATION
 *      #define Z_HOMING_HEIGHT  4
 *      #define Z_MAX_POS 350
 *      #define MIN_SOFTWARE_ENDSTOPS
 *      #define SOFT_ENDSTOPS_MENU_ITEM
 *         
 * 
 * V18 10/18/2020 08:25
 *      #define GCODE_CASE_INSENSITIV
 *      #define M115_GEOMETRY_REPORT
 *      #define BOOT_MARLIN_LOGO_ANIMATED
 *      #define S_CURVE_ACCELERATION
 * 
 * V17 10/17/2020 07:54
 *      upstream bugfix-2.0.x updates
 *      CONFIGURATION_H_VERSION 020008
 *      Tag 2.0.7.2
 *      0.60mm nozzle - second ( left ) 12V 5015 fan installed.
 * 
 * V16 10/15/2020 18:06
 *      Sync to GitHub bugfix-2.0.x
 *      Sync settings to firmware
 *      INSTALLED: E3D V6 head with volcano heat block - .08mm nozzle / 50w heater
 * 
 * V15 10/11/2020 11:55
 *      #define NEOPIXEL_PIXELS 15
 * 
 * V14 10/11/2020 10:02
 * 
 *      ********************************************************************************************
 *                                   N E O    P I X E L !!
 *      *** WORKING ****
 *      ********************************************************************************************
 * 
 *      NEOPIXEL_LED            = https://github.com/bigtreetech/Adafruit_NeoPixel
 *      NEO PIXEL port (PA8) doesnt work.
 *      ** USE PS-ON port PC13 **
 *          #define NEOPIXEL_PIN     PC13       // LED driving pin
 *      REMOVED:  #define NEOPIXEL_BKGD_LED_INDEX  2
 * 
 * 
 * 
 * V13 10/10/2020 19:31
 *      #define CASE_LIGHT_ENABLE
 *      #define CASE_LIGHT_USE_NEOPIXEL
 *      Adafruit NeoPixel=https://github.com/ccccmagicboy/Adafruit_NeoPixel#meeb_3dp_us
 * 
 * V12 10/10/2020 18:05
 *      #define NEOPIXEL_TYPE   NEO_GRB + NEO_KHZ800 
 * 
 * V11 10/10/2020 17:51
 *      #define NEOPIXEL_PIN     PA8       // LED driving pin
 * 
 * V10 10/10/2020 17:33
 *      #define JUNCTION_DEVIATION_MM 0.01
 *      #define LIN_ADVANCE_K 0.30
 *      Merge fixes with upstream bugfix-2.0.x
 * 
 *      CHANGED: to NEOPIXEL_LED  = https://github.com/CommandoreBombardiero/Adafruit_NeoPixel
 *      ** NOTE ** : I changed .pio\libdeps\STM32F103RC_btt_512K\Adafruit NeoPixel\Adafruit_NeoPixel.cpp 
 *      to have delay.h     #include <..\..\..\..\Marlin\src\HAL\shared\Delay.h>
 *  
 *      https://github.com/bigtreetech/BIGTREETECH-SKR-mini-E3/issues/286
 * 
 *      ********************************************************************************************
 * 
 * V09 10/09/2020 15:15
 *      #define LIN_ADVANCE_K 0.07
 *      #define DEFAULT_MAX_ACCELERATION      { 150, 150, 50, 9000 }  
 *      #define TEMP_SENSOR_0 1
 *      #define PRINTJOB_TIMER_AUTOSTART
 *          ** DUE to: Print Job Timer auto start, MUST send M77 at job end-gcode script.
 *      Z_CURRENT       850
 * 
 * V08 10/09/2020 13:38
 *      #define DETECT_BROKEN_ENDSTOP
 
 *      #define E0_CURRENT      1000
 *      #define X_CURRENT       640 
 *      #define Y_CURRENT       640
 *      #define Z_CURRENT       1000
 *  
 *      M92 X80.00 Y80.00 Z400.00 E102.3
 
 *      #define DEFAULT_MAX_ACCELERATION      { 150, 150, 100, 9000 }
 *      #define DEFAULT_MAX_FEEDRATE          { 1000, 1000, 12, 500 }
  * 
 * V07 10/09/2020 13:06
 *      #define HOMING_BACKOFF_POST_MM { 2, 2, 2 }
 *      M92 X80.00 Y80.00 Z400.00 E110
 *      #define HEATER_0_MAXTEMP 300
 *      #define TEMP_SENSOR_0 5
 *      #define TEMP_SENSOR_BED 5
 * 
 * V06  10/09/2020 11:03
 *      // BED PID TUNE 10/08/2020 // M303 E-1 S60 C10 U1
 *      #define DEFAULT_bedKp 178.17
 *      #define DEFAULT_bedKi 34.70
 *      #define DEFAULT_bedKd 609.93
 * 
 * V05  10/09/2020 10:49
 *      PID BED Tune: Store to firmware
 *      // M303 E-1 S60 C15 U1 
 *          Kp: 67.36 Ki: 13.13 Kd: 230.43
 *      REMOVED: #define SLOW_PWM_HEATERS 
  * 
 * V04  10/09/2020 10:14
 *      PID Extruder Tune: Store to firmware
 *          // 303 E0 C15 S225 U1
 * 
 *          Recv: #define DEFAULT_Kp 33.95
 *          Recv: #define DEFAULT_Ki 3.26
 *          Recv: #define DEFAULT_Kd 88.45
 * 
 *      Enabled BED PID
 *       #define PIDTEMPBED
 *       #define PID_EDIT_MENU         // Add PID editing to the "Advanced Settings" menu.
 *       #define PID_AUTOTUNE_MENU     // Add PID auto-tuning to the "Advanced Settings" menu.
 *       #define SLOW_PWM_HEATERS
 * 
 * V03  10/09/2020 09:40
 *      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 102.3 }
 *      #define LED_CONTROL_MENU
 *      define LCD_TIMEOUT_TO_STATUS 60000
 *      #define BOOTSCREEN_TIMEOUT 1000 
 *      #define SHOW_REMAINING_TIME       // Display estimated time to completion
 *      #define USE_M73_REMAINING_TIME  // Use remaining time from M73 command instead of estimation
 *      #define ROTATE_PROGRESS_DISPLAY // Display (P)rogress, (E)lapsed, and (R)emaining time
 *      #define PRINT_PROGRESS_SHOW_DECIMALS // Show progress with decimal digits
 *      #define SD_ABORT_NO_COOLDOWN
 *      #define XYZ_NO_FRAME
 *      //#define MENU_HOLLOW_FRAME
 *      #define STATUS_FAN_FRAMES 3       // :[0,1,2,3,4] Number of fan animation frames
 *      #define STATUS_HEAT_PERCENT       // Show heating in a progress bar
 *      #define LIN_ADVANCE_K 0.05  
 *      //#define EXPERIMENTAL_SCURVE
 *      //#define S_CURVE_ACCELERATION
 *      #define PINS_DEBUGGING
 * 
 * 
 * V02  10/09/2020 09:11
 *      Custom Version File updates ( version, boot and status )
 *      Part Cooling Fan: FAN_PIN   (PC6)
 *      Extruder Auto Cooling Fan:  FAN1_PIN (PC7)
 * 
 *      // diabled #error about NEO not supported on STM
 *      // replacing Adadfruit_NeoPixel@1.5 with https://github.com/bigtreetech/Adafruit_NeoPixel
 *      #define NEOPIXEL_LED
 *      #define NEOPIXEL_PIXELS 15 
 * 
 *      #define FAN_SOFT_PWM
 *      #define SOFT_PWM_SCALE 0
 * 
 * 
 * V01  10/09/2020 08:24
 * 		Initial - Bootable
 *      *** FORKED marlin/bugfix-2.0.x to github.com/kamikazeBDM/Marlin-SKR-Mini-E3-V2.0 ***
 * 
 *******************************************************************************************************/



/**
 * Verbose version identifier which should contain a reference to the location
 * from where the binary was downloaded or the source code was compiled.
 */
#define DETAILED_BUILD_VERSION SHORT_BUILD_VERSION

/**
 * The STRING_DISTRIBUTION_DATE represents when the binary file was built,
 * here we define this default string as the date where the latest release
 * version was tagged.
 */
#define STRING_DISTRIBUTION_DATE  __DATE__ " " __TIME__


/**
 * The SOURCE_CODE_URL is the location where users will find the Marlin Source
 * Code which is installed on the device. In most cases —unless the manufacturer
 * has a distinct Github fork— the Source Code URL should just be the main
 * Marlin repository.
 */
#define SOURCE_CODE_URL "https://github.com/MarlinFirmware/Marlin"

/**
 * Default generic printer UUID.
 */
#define DEFAULT_MACHINE_UUID "cede2a2f-41a2-4748-9b12-c55c62f367ff"

/**
 * The WEBSITE_URL is the location where users can get more information such as
 * documentation about a specific Marlin release.
 */
#define WEBSITE_URL "https://marlinfw.org"













////////////////////////////
// VENDOR VERSION EXAMPLE //
////////////////////////////

/**
 * Marlin release version identifier
 */
//#define SHORT_BUILD_VERSION "bugfix-2.0.x"

/**
 * Verbose version identifier which should contain a reference to the location
 * from where the binary was downloaded or the source code was compiled.
 */
//#define DETAILED_BUILD_VERSION SHORT_BUILD_VERSION

/**
 * The STRING_DISTRIBUTION_DATE represents when the binary file was built,
 * here we define this default string as the date where the latest release
 * version was tagged.
 */
//#define STRING_DISTRIBUTION_DATE "2019-07-10"

/**
 * Defines a generic printer name to be output to the LCD after booting Marlin.
 */
//#define MACHINE_NAME "3D Printer"

/**
 * The SOURCE_CODE_URL is the location where users will find the Marlin Source
 * Code which is installed on the device. In most cases —unless the manufacturer
 * has a distinct Github fork— the Source Code URL should just be the main
 * Marlin repository.
 */
//#define SOURCE_CODE_URL "github.com/MarlinFirmware/Marlin"

/**
 * Default generic printer UUID.
 */
//#define DEFAULT_MACHINE_UUID "cede2a2f-41a2-4748-9b12-c55c62f367ff"

/**
 * The WEBSITE_URL is the location where users can get more information such as
 * documentation about a specific Marlin release.
 */
//#define WEBSITE_URL "marlinfw.org"

/**
 * Set the vendor info the serial USB interface, if changable
 * Currently only supported by DUE platform
 */
//#define USB_DEVICE_VENDOR_ID           0x0000
//#define USB_DEVICE_PRODUCT_ID          0x0000
//#define USB_DEVICE_MANUFACTURE_NAME    WEBSITE_URL
