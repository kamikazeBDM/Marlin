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


// BOARD NAME: BOARD_BTT_OCTOPUS_PRO_V1_0
// BigTreeTech Octopus Pro V1.0 (STM32F429ZGT6 ARM Cortex-M4)


/*************************************
 * Marlin bugfix-2.0.x
 * Compiled version identifier
 ************************************/
#define COMPILE_VERSION "05" 

#define SHORT_BUILD_VERSION "bugfix-2.0.9.3-" COMPILE_VERSION
#define STRING_CONFIG_H_AUTHOR "BDM"                    // Who made the changes.
#define CUSTOM_MACHINE_NAME "BTT OCTOPUS PRO v1.0 TMC-2209"     // Name displayed in the LCD "Ready" message and Info menu
#define MACHINE_NAME "JAM-ENG Custom Ender 3 Pro"

/*******************************************************************************************************
 * 
 * Vxx MM/DD/2022 HH:MM
 * 
 * !! BOARD_BTT_OCTOPUS_PRO_V1_0  <-- BUILD TARGET 
 * !! BigTreeTech Octopus Pro V1.0 (STM32F429ZGT6 ARM Cortex-M4)
 * !! GitHub: kamikazebdm@gmail.com -> brendon@m2mwireless.com ( collaborator )
 * 
 * V05  02/20/2022 10:54
 * 
 *          #define CHAMBER_HYSTERESIS 1
 *          #define CHAMBER_FAN_FACTOR 2 
 *          #define CHAMBER_CHECK_INTERVAL 1000    
 *  
 *          //#define FAST_PWM_FAN_FREQUENCY 1220    
 *              #define FAST_PWM_FAN_FREQUENCY 5000U
 * 
 *          //#define HOST_STATUS_NOTIFICATIONS
 * 
 *          #define CHAMBER_FAN_MODE      1  
 *          #define CHAMBER_FAN_BASE      0                     // Minimum chamber fan PWM (0-255)
 *          #define CHAMBER_FAN_FACTOR    2                     // PWM increase per °C difference from target * 
 *          #define CHAMBER_CHECK_INTERVAL 2000   // (ms) Interval between checks in bang-bang control
 *          #define LIN_ADVANCE_K 0.00 
 * 
 * V04  02/19/2022 17:50
 * 
 *      UPDATES: MARLIN upstream bugfix-2.0(.9.3)  02/19/2022
 *      
 *          #define FAST_PWM_FAN    // Increase the fan PWM frequency. Removes the PWM noise but increases heating in the FET/Arduino
 *          #define FAST_PWM_FAN_FREQUENCY 1220  
 *          #define FAN_MIN_PWM 30
 *          //#define FAN_SOFT_PWM
 *          #define FAN_KICKSTART_TIME 300
 * 
 *          HOST_ACTION_COMMANDS
 *          NOZZLE_PARK_FEATURE
 * 
 *          CASE_LIGHT_ENABLE
 *          #define CASE_LIGHT_MENU    
 *          #define CASE_LIGHT_PIN          PG12 ( STOP 4 PIN )         !! ******************* !!
 *          #define CASE_LIGHT_NO_BRIGHTNESS 
 * 
 *          #define HEATER_CHAMBER_PIN      PG13 ( STOP 5 PIN )         !! ******************* !!
 *          #define HEATER_CHAMBER_INVERTING true
 * 
 *          #define CHAMBER_AUTO_FAN_PIN FAN4_PIN
 *          #define CHAMBER_AUTO_FAN_TEMPERATURE 55
 *          #define CHAMBER_AUTO_FAN_SPEED 128
 *          #define CHAMBER_FAN_MODE      2  
 *          #define CHAMBER_FAN_BASE      0                     // Minimum chamber fan PWM (0-255)
 *          #define CHAMBER_FAN_FACTOR    5                     // PWM increase per °C difference from target
 *          #define TEMP_CHAMBER_PIN          TEMP_2_PIN        // TEMP_SENSOR_CHAMBER
 * 
 *          #define NO_AUTO_ASSIGN_WARNING
 *          #define DIAG_JUMPERS_REMOVED
 * 
 *          #define DEFAULT_AXIS_STEPS_PER_UNIT  { 80.500, 80.300, 400.3000, 371.0000, 371.0000 }
 *          #define DEFAULT_MAX_FEEDRATE         { 200.00, 200.00, 12, 500, 500 }
 *          
 *          #define X_CURRENT       880 
 *          #define Y_CURRENT       860
 *          #define Z_CURRENT       900
 *          #define E0_CURRENT      640
 *          #define E1_CURRENT      640    
 *  
 *          //#define STEALTHCHOP_XY
 *            #define STEALTHCHOP_Z
 *          //#define STEALTHCHOP_E
 * 
 *          #define CONTROLLER_FAN_IGNORE_Z  
 *          #define CONTROLLERFAN_SPEED_ACTIVE      128
 *          #define CONTROLLERFAN_SPEED_IDLE        20 
 *          #define CONTROLLERFAN_IDLE_TIME         10
 * 
 * 
 * V03  02/07/2022 14:22  
 * 
 *          !! WORKING: !! - all printer functions working normally. 
 *          !! PENDING: !! - Enclosure setup and control - need to remake Enclosure and reconfigure wiring
 * 
 *          FORKCREATED: New fork from Marlin -> kamikazebdm@gmail.com OWNER. 
 *          SETTINGS:   Settings copied from BTT GTR v1.0
 *  
 *          M92 X80.6250 Y80.6250 Z402.0000
 *          M92 T0 E397.1500
 *          M92 T1 E397.1500
 *          M203 X180.0000 Y180.0000 Z12.0000
 *          M203 T0 E200.0000
 *          M203 T1 E200.0000
 *          M201 X2000.0000 Y2000.0000 Z200.0000
 *          M201 T0 E8000.0000
 *          M201 T1 E8000.0000
 *          M204 P750.0000 R1000.0000 T1000.0000
 *          M205 B20000.0000 S0.0000 T0.0000 J0.0180
 *          M218 T1 X-19.9700 Y-0.1000 Z0.000
 *          M301 E0 P17.1585 I1.4116 D52.1403
 *          M301 E1 P15.4397 I1.0324 D57.7252
 *          M304 P143.7940 I28.0932 D490.6750
 *          M906 X800 Y800 Z900
 *          M906 T0 E580
 *          M906 T1 E580
 *          M913 X100 Y100 Z15
 *          M913 T0 E26
 *          M913 T1 E26
 *          M603 T0 L80.0000 U125.0000 ; (mm)
 *          M603 T1 L80.0000 U125.0000 ; (mm)
 *          M217 S12.0000 B0.0000 E0.0000 P276.0000 R3000.0000 U1500.0000 F255 G10 A0 L0.0000 Z2.0000
 *          M569 S1 Z
 *          M569 S1 T0 E
 *          M569 S1 T1 E
 *          #define FAST_PWM_FAN
 *            #define FAST_PWM_FAN_FREQUENCY 39200 (39.2Khz)
 *          #define Z_AFTER_HOMING   10
 *          #define ENCODER_PULSES_PER_STEP 4
 *          #define SD_ABORT_NO_COOLDOWN          // Leave the heaters on after Stop Print (not recommended!)
 *          REMOVED:   #define SD_DETECT_STATE HIGH
 * 
 * V02  02/05/2022 13:08  
 * 
 *      //////////////////////////////////////////////////////
 *      // BIGTREE_OCTOPUS_V1   (STM32F446ZET6 ARM Cortex-M4)
 *      // MOTHERBOARD: BOARD_BTT_OCTOPUS_PRO_V1_0
 *      //////////////////////////////////////////////////////
 *          
 *      IMPORTED SETTINGS FROM BTT GTR PRO 1.0 
 * 
 *          //  [ TFT/UART1]  BTT OCTOPUS PRO V1.0 
 *          //                TFT PORT TOUCH/GUI MODE
 *          #define SERIAL_PORT 1
 *          #define BAUDRATE 115200
 *          #define BAUD_RATE_GCODE     // Enable G-code M575 to set the baud rate
 * 
 *          //  [ USART 2 ]   BTT OCTOPUS PRO V1.0 
 *          //                RASPBERRY PI 3/4b - OCTOPRINT
 *          #define SERIAL_PORT_2 2
 *          #define BAUDRATE_2 115200   // Enable to override BAUDRATE
 *          
 *          // E0 PID = M301 E0 P17.1585 I1.4116 D52.1403
 *          // E1 PID = M301 E1 P15.4397 I1.0324 D57.7252
 *          // BED PID= M304 P143.7948 I28.0932 D490.6759
 *  
 *          #define DEFAULT_AXIS_STEPS_PER_UNIT  { 80.625, 80.625, 402.000, 354.454, 354.454 }
 * 
 * V01  02/04/2022 14:24  
 *      ** INITIAL INSTALL - REPLACING BTT GTR 1.0 - Broken Board - does not boot after shorting Part Fan Controller
 *      REPOSITORYDOWNLOAD: MARLIN upstream bugfix-2.0(.9.3)  2/3/2022
 *          #define DISABLE_X false
 *          #define DISABLE_Y false
 *          #define DISABLE_Z false
 *           #define MANUAL_FEEDRATE { 100*60, 100*60, 12*60, 2*60 } // (mm/min) Feedrates for manual moves along X, Y, Z, E from panel
 * 
 *******************************************************************************************************
*/









/**
 * Verbose version identifier which should contain a reference to the location
 * from where the binary was downloaded or the source code was compiled.
 */
#define DETAILED_BUILD_VERSION SHORT_BUILD_VERSION " (Github/kamikazebdm/marlin)"

/**
 * The STRING_DISTRIBUTION_DATE represents when the binary file was built,
 * here we define this default string as the date where the latest release
 * version was tagged.
 */
#define STRING_DISTRIBUTION_DATE "2022-02-28"

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
#define SOURCE_CODE_URL "github.com/MarlinFirmware/Marlin"

/**
 * Default generic printer UUID.
 */
//#define DEFAULT_MACHINE_UUID "cede2a2f-41a2-4748-9b12-c55c62f367ff"

/**
 * The WEBSITE_URL is the location where users can get more information such as
 * documentation about a specific Marlin release.
 */
#define WEBSITE_URL "marlinfw.org"

/**
 * Set the vendor info the serial USB interface, if changable
 * Currently only supported by DUE platform
 */
//#define  USB_DEVICE_VENDOR_ID           0x0000
//#define  USB_DEVICE_PRODUCT_ID          0x0000
//#define  USB_DEVICE_MANUFACTURE_NAME    WEBSITE_URL
