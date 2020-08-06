/*
    This file is part of Repetier-Firmware.

    Repetier-Firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Repetier-Firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Repetier-Firmware.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

/**************** READ FIRST ************************

   This configuration file was created with the configuration tool. For that
   reason, it does not contain the same informations as the original Configuration.h file.
   It misses the comments and unused parts. Open this file file in the config tool
   to see and change the data. You can also upload it to newer/older versions. The system
   will silently add new options, so compilation continues to work.

   This file is optimized for version 1.0.3dev
   generator: http://www.repetier.com/firmware/dev/

   If you are in doubt which named functions use which pins on your board, please check the
   pins.h for the used name->pin assignments and your board documentation to verify it is
   as you expect.

*/

#define NUM_EXTRUDER 1

#ifndef MOTHERBOARD
#define MOTHERBOARD 35
#endif
#include "pins.h"

// ################## EDIT THESE SETTINGS MANUALLY ################

//// The following define selects which electronics board you have. Please choose the one that matches your setup
// Gen3 PLUS for RepRap Motherboard V1.2 = 21
// MEGA/RAMPS up to 1.2       = 3
// RAMPS 1.3/RAMPS 1.4        = 33
// Azteeg X3                  = 34
// Azteeg X3 Pro              = 35
// MPX3  (mainly RAMPS compatible) = 38
// Ultimaker Shield 1.5.7     = 37
// Gen6                       = 5
// Gen6 deluxe                = 51
// Sanguinololu up to 1.1     = 6
// Sanguinololu 1.2 and above = 62
// 3Drag/Velleman K8200       = 66 (experimental)
// Open Motion Controller     = 91
// Melzi board                = 63  // Define REPRAPPRO_HUXLEY if you have one for correct HEATER_1_PIN assignment!
// Azteeg X1                  = 65
// 3Drag/Velleman K8200 (experimental) = 66
// Gen7 1.1 till 1.3.x        = 7
// Gen7 1.4.1 and later       = 71
// Sethi 3D_1                 = 72
// Teensylu (at90usb)         = 8 // requires Teensyduino
// Printrboard (at90usb)      = 9 // requires Teensyduino
// Printrboard Ref. F or newer= 92 // requires Teensyduino
// Foltyn 3D Master           = 12
// MegaTronics 1.0            = 70
// Megatronics 2.0            = 701
// Megatronics 3.0            = 703 // Thermistors predefined not thermocouples
// Minitronics 1.0            = 702
// RUMBA                      = 80  // Get it from reprapdiscount
// FELIXprinters              = 101
// Rambo                      = 301
// Rambo EInsy                = 310
// PiBot for Repetier V1.0-1.3= 314
// PiBot for Repetier V1.4    = 315
// PiBot Controller V2.0      = 316
// Sanguish Beta              = 501
// Unique One rev. A          = 88
// SAV MK1                    = 89
// MJRice Pica Rev B          = 183
// MJRice Pica Rev C          = 184
// Zonestar ZRIB 2.1          = 39
// User layout defined in userpins.h = 999

#ifndef MOTHERBOARD
#define MOTHERBOARD 63
#endif
// ################ END MANUAL SETTINGS ##########################

#define HOST_RESCUE 1
#undef FAN_BOARD_PIN
#define FAN_BOARD_PIN ORIG_FAN_PIN
#define BOARD_FAN_SPEED 255
#define BOARD_FAN_MIN_SPEED 0
#define FAN_THERMO_PIN -1
#define FAN_THERMO_MIN_PWM 128
#define FAN_THERMO_MAX_PWM 255
#define FAN_THERMO_MIN_TEMP 45
#define FAN_THERMO_MAX_TEMP 60
#define FAN_THERMO_THERMISTOR_PIN -1
#define FAN_THERMO_THERMISTOR_TYPE 1

//#define EXTERNALSERIAL  use Arduino serial library instead of build in. Requires more ram, has only 63 byte input buffer.
// Uncomment the following line if you are using Arduino compatible firmware made for Arduino version earlier then 1.0
// If it is incompatible you will get compiler errors about write functions not being compatible!
//#define COMPAT_PRE1
#define BLUETOOTH_SERIAL  -1
#define BLUETOOTH_BAUD  115200
#define MIXING_EXTRUDER 0

#define DRIVE_SYSTEM 0
#define XAXIS_STEPS_PER_MM 72.72
#define YAXIS_STEPS_PER_MM 72.72
#define ZAXIS_STEPS_PER_MM 520
#define EXTRUDER_FAN_COOL_TEMP 50
#define PDM_FOR_EXTRUDER 0
#define PDM_FOR_COOLER 0
#define DECOUPLING_TEST_MAX_HOLD_VARIANCE 20
#define DECOUPLING_TEST_MIN_TEMP_RISE 1
#define KILL_IF_SENSOR_DEFECT 1
#define RETRACT_ON_PAUSE 4
#define PAUSE_START_COMMANDS ""
#define PAUSE_END_COMMANDS ""
#define SHARED_EXTRUDER_HEATER 0
#define EXT0_X_OFFSET 0
#define EXT0_Y_OFFSET 0
#define EXT0_Z_OFFSET 0
#define EXT0_STEPS_PER_MM 255
#define EXT0_TEMPSENSOR_TYPE 5
#define EXT0_TEMPSENSOR_PIN TEMP_0_PIN
#define EXT0_HEATER_PIN HEATER_0_PIN
#define EXT0_STEP_PIN ORIG_E0_STEP_PIN
#define EXT0_DIR_PIN ORIG_E0_DIR_PIN
#define EXT0_INVERSE 1
#define EXT0_ENABLE_PIN ORIG_E0_ENABLE_PIN
#define EXT0_ENABLE_ON 1
#define EXT0_MIRROR_STEPPER 0
#define EXT0_STEP2_PIN ORIG_E0_STEP_PIN
#define EXT0_DIR2_PIN ORIG_E0_DIR_PIN
#define EXT0_INVERSE2 0
#define EXT0_ENABLE2_PIN ORIG_E0_ENABLE_PIN
#define EXT0_MAX_FEEDRATE 50
#define EXT0_MAX_START_FEEDRATE 20
#define EXT0_MAX_ACCELERATION 5000
#define EXT0_HEAT_MANAGER 1
#define EXT0_PREHEAT_TEMP 190
#define EXT0_WATCHPERIOD 1
#define EXT0_PID_INTEGRAL_DRIVE_MAX 255
#define EXT0_PID_INTEGRAL_DRIVE_MIN 40
#define EXT0_PID_PGAIN_OR_DEAD_TIME 8.94
#define EXT0_PID_I 0.51
#define EXT0_PID_D 20
#define EXT0_PID_MAX 255
#define EXT0_ADVANCE_K 0
#define EXT0_ADVANCE_L 0
#define EXT0_ADVANCE_BACKLASH_STEPS 0
#define EXT0_WAIT_RETRACT_TEMP 150
#define EXT0_WAIT_RETRACT_UNITS 0
#define EXT0_SELECT_COMMANDS ""
#define EXT0_DESELECT_COMMANDS ""
#define EXT0_EXTRUDER_COOLER_PIN -1
#define EXT0_EXTRUDER_COOLER_SPEED 255
#define EXT0_DECOUPLE_TEST_PERIOD 30000
#define EXT0_JAM_PIN -1
#define EXT0_JAM_PULLUP 0
#define EXT1_X_OFFSET 0
#define EXT1_Y_OFFSET 0
#define EXT1_Z_OFFSET 0
#define EXT1_STEPS_PER_MM 257
#define EXT1_TEMPSENSOR_TYPE 5
#define EXT1_TEMPSENSOR_PIN TEMP_2_PIN
#define EXT1_HEATER_PIN HEATER_2_PIN
#define EXT1_STEP_PIN ORIG_E1_STEP_PIN
#define EXT1_DIR_PIN ORIG_E1_DIR_PIN
#define EXT1_INVERSE 1
#define EXT1_ENABLE_PIN ORIG_E1_ENABLE_PIN
#define EXT1_ENABLE_ON 1
#define EXT1_MIRROR_STEPPER 0
#define EXT1_STEP2_PIN ORIG_E1_STEP_PIN
#define EXT1_DIR2_PIN ORIG_E1_DIR_PIN
#define EXT1_INVERSE2 0
#define EXT1_ENABLE2_PIN ORIG_E1_ENABLE_PIN
#define EXT1_MAX_FEEDRATE 100
#define EXT1_MAX_START_FEEDRATE 40
#define EXT1_MAX_ACCELERATION 5000
#define EXT1_HEAT_MANAGER 1
#define EXT1_PREHEAT_TEMP 190
#define EXT1_WATCHPERIOD 1
#define EXT1_PID_INTEGRAL_DRIVE_MAX 255
#define EXT1_PID_INTEGRAL_DRIVE_MIN 40
#define EXT1_PID_PGAIN_OR_DEAD_TIME 8.94
#define EXT1_PID_I 0.51
#define EXT1_PID_D 20
#define EXT1_PID_MAX 255
#define EXT1_ADVANCE_K 0
#define EXT1_ADVANCE_L 0
#define EXT1_ADVANCE_BACKLASH_STEPS 0
#define EXT1_WAIT_RETRACT_TEMP 150
#define EXT1_WAIT_RETRACT_UNITS 0
#define EXT1_SELECT_COMMANDS ""
#define EXT1_DESELECT_COMMANDS ""
#define EXT1_EXTRUDER_COOLER_PIN -1
#define EXT1_EXTRUDER_COOLER_SPEED 255
#define EXT1_DECOUPLE_TEST_PERIOD 30000
#define EXT1_JAM_PIN -1
#define EXT1_JAM_PULLUP 0
#define EXT2_X_OFFSET 0
#define EXT2_Y_OFFSET 0
#define EXT2_Z_OFFSET 0
#define EXT2_STEPS_PER_MM 257
#define EXT2_TEMPSENSOR_TYPE 5
#define EXT2_TEMPSENSOR_PIN TEMP_3_PIN
#define EXT2_HEATER_PIN HEATER_3_PIN
#define EXT2_STEP_PIN ORIG_E2_STEP_PIN
#define EXT2_DIR_PIN ORIG_E2_DIR_PIN
#define EXT2_INVERSE 1
#define EXT2_ENABLE_PIN ORIG_E2_ENABLE_PIN
#define EXT2_ENABLE_ON 1
#define EXT2_MIRROR_STEPPER 0
#define EXT2_STEP2_PIN ORIG_E2_STEP_PIN
#define EXT2_DIR2_PIN ORIG_E2_DIR_PIN
#define EXT2_INVERSE2 0
#define EXT2_ENABLE2_PIN ORIG_E2_ENABLE_PIN
#define EXT2_MAX_FEEDRATE 100
#define EXT2_MAX_START_FEEDRATE 40
#define EXT2_MAX_ACCELERATION 5000
#define EXT2_HEAT_MANAGER 1
#define EXT2_PREHEAT_TEMP 190
#define EXT2_WATCHPERIOD 1
#define EXT2_PID_INTEGRAL_DRIVE_MAX 255
#define EXT2_PID_INTEGRAL_DRIVE_MIN 40
#define EXT2_PID_PGAIN_OR_DEAD_TIME 8.94
#define EXT2_PID_I 0.51
#define EXT2_PID_D 20
#define EXT2_PID_MAX 255
#define EXT2_ADVANCE_K 0
#define EXT2_ADVANCE_L 0
#define EXT2_ADVANCE_BACKLASH_STEPS 0
#define EXT2_WAIT_RETRACT_TEMP 150
#define EXT2_WAIT_RETRACT_UNITS 0
#define EXT2_SELECT_COMMANDS ""
#define EXT2_DESELECT_COMMANDS ""
#define EXT2_EXTRUDER_COOLER_PIN -1
#define EXT2_EXTRUDER_COOLER_SPEED 255
#define EXT2_DECOUPLE_TEST_PERIOD 30000
#define EXT2_JAM_PIN -1
#define EXT2_JAM_PULLUP 0
#define EXT3_X_OFFSET 0
#define EXT3_Y_OFFSET 0
#define EXT3_Z_OFFSET 0
#define EXT3_STEPS_PER_MM 257
#define EXT3_TEMPSENSOR_TYPE 5
#define EXT3_TEMPSENSOR_PIN TEMP_4_PIN
#define EXT3_HEATER_PIN HEATER_4_PIN
#define EXT3_STEP_PIN ORIG_E3_STEP_PIN
#define EXT3_DIR_PIN ORIG_E3_DIR_PIN
#define EXT3_INVERSE 1
#define EXT3_ENABLE_PIN ORIG_E3_ENABLE_PIN
#define EXT3_ENABLE_ON 1
#define EXT3_MIRROR_STEPPER 0
#define EXT3_STEP2_PIN ORIG_E3_STEP_PIN
#define EXT3_DIR2_PIN ORIG_E3_DIR_PIN
#define EXT3_INVERSE2 0
#define EXT3_ENABLE2_PIN ORIG_E3_ENABLE_PIN
#define EXT3_MAX_FEEDRATE 100
#define EXT3_MAX_START_FEEDRATE 40
#define EXT3_MAX_ACCELERATION 5000
#define EXT3_HEAT_MANAGER 1
#define EXT3_PREHEAT_TEMP 190
#define EXT3_WATCHPERIOD 1
#define EXT3_PID_INTEGRAL_DRIVE_MAX 255
#define EXT3_PID_INTEGRAL_DRIVE_MIN 40
#define EXT3_PID_PGAIN_OR_DEAD_TIME 8.94
#define EXT3_PID_I 0.51
#define EXT3_PID_D 20
#define EXT3_PID_MAX 255
#define EXT3_ADVANCE_K 0
#define EXT3_ADVANCE_L 0
#define EXT3_ADVANCE_BACKLASH_STEPS 0
#define EXT3_WAIT_RETRACT_TEMP 150
#define EXT3_WAIT_RETRACT_UNITS 0
#define EXT3_SELECT_COMMANDS ""
#define EXT3_DESELECT_COMMANDS ""
#define EXT3_EXTRUDER_COOLER_PIN -1
#define EXT3_EXTRUDER_COOLER_SPEED 255
#define EXT3_DECOUPLE_TEST_PERIOD 30000
#define EXT3_JAM_PIN -1
#define EXT3_JAM_PULLUP 0

#define FEATURE_RETRACTION 1
#define AUTORETRACT_ENABLED 0
#define RETRACTION_LENGTH 2.5
#define RETRACTION_LONG_LENGTH 2.5
#define RETRACTION_SPEED 50
#define RETRACTION_Z_LIFT 0
#define RETRACTION_UNDO_EXTRA_LENGTH 0
#define RETRACTION_UNDO_EXTRA_LONG_LENGTH 0
#define RETRACTION_UNDO_SPEED 40
#define FILAMENTCHANGE_X_POS 0
#define FILAMENTCHANGE_Y_POS 0
#define FILAMENTCHANGE_Z_ADD  2
#define FILAMENTCHANGE_REHOME 1
#define FILAMENTCHANGE_SHORTRETRACT 5
#define FILAMENTCHANGE_LONGRETRACT 50
#define JAM_METHOD 1
#define JAM_STEPS 220
#define JAM_SLOWDOWN_STEPS 320
#define JAM_SLOWDOWN_TO 70
#define JAM_ERROR_STEPS 500
#define JAM_MIN_STEPS 10
#define JAM_ACTION 1

#define RETRACT_DURING_HEATUP true
#define PID_CONTROL_RANGE 20
#define SKIP_M109_IF_WITHIN 2
#define SCALE_PID_TO_MAX 0
#define TEMP_HYSTERESIS 0
#define EXTRUDE_MAXLENGTH 160
#define NUM_TEMPS_USERTHERMISTOR0 29
#define USER_THERMISTORTABLE0 {{0,8000},{69,2280},{79,2200},{92,2120},{107,2040},{125,1960},{146,1886},{172,1810},{204,1736},{243,1661},{291,1586},{350,1511},{422,1437},{512,1362},{622,1287},{756,1212},{919,1138},{1345,988},{3139,539},{3388,464},{3591,390},{3749,314},{3866,240},{3949,160},{4005,80},{4041,0},{4064,-80},{4086,-240},{4093,-400}}
#define NUM_TEMPS_USERTHERMISTOR1 0
#define USER_THERMISTORTABLE1 {}
#define NUM_TEMPS_USERTHERMISTOR2 0
#define USER_THERMISTORTABLE2 {}
#define GENERIC_THERM_VREF 5
#define GENERIC_THERM_NUM_ENTRIES 33
#define TEMP_GAIN 1
#define HEATER_PWM_SPEED 0
#define COOLER_PWM_SPEED 0

// ############# Heated bed configuration ########################

#define HAVE_HEATED_BED 1
#define HEATED_BED_PREHEAT_TEMP 55
#define HEATED_BED_MAX_TEMP 120
#define SKIP_M190_IF_WITHIN 3
#define HEATED_BED_SENSOR_TYPE 8
#define HEATED_BED_SENSOR_PIN TEMP_1_PIN
#define HEATED_BED_HEATER_PIN HEATER_1_PIN
#define HEATED_BED_SET_INTERVAL 5000
#define HEATED_BED_HEAT_MANAGER 1
#define HEATED_BED_PID_INTEGRAL_DRIVE_MAX 255
#define HEATED_BED_PID_INTEGRAL_DRIVE_MIN 80
#define HEATED_BED_PID_PGAIN_OR_DEAD_TIME   196
#define HEATED_BED_PID_IGAIN   33
#define HEATED_BED_PID_DGAIN 290
#define HEATED_BED_PID_MAX 255
#define HEATED_BED_DECOUPLE_TEST_PERIOD 300000
#define MIN_EXTRUDER_TEMP 150
#define MAXTEMP 280
#define MIN_DEFECT_TEMPERATURE -10
#define MAX_DEFECT_TEMPERATURE 300
#define MILLISECONDS_PREHEAT_TIME 30000

// ##########################################################################################
// ##                             Laser configuration                                      ##
// ##########################################################################################

/*
If the firmware is in laser mode, it can control a laser output to cut or engrave materials.
Please use this feature only if you know about safety and required protection. Lasers are
dangerous and can hurt or make you blind!!!

The default laser driver only supports laser on and off. Here you control the intensity with
your feedrate. For exchangeable diode lasers this is normally enough. If you need more control
you can set the intensity in a range 0-255 with a custom extension to the driver. See driver.h
and comments on how to extend the functions non invasive with our event system.

If you have a laser - powder system you will like your E override. If moves contain a
increasing extruder position it will laser that move. With this trick you can
use existing fdm slicers to laser the output. Laser width is extrusion width.

Other tools may use M3 and M5 to enable/disable laser. Here G1/G2/G3 moves have laser enabled
and G0 moves have it disables.

In any case, laser only enables while moving. At the end of a move it gets
automatically disabled.
*/

#define SUPPORT_LASER 0
#define LASER_PIN -1
#define LASER_ON_HIGH 1
#define LASER_WARMUP_TIME 0
#define LASER_PWM_MAX 255
#define LASER_WATT 2

// ##                              CNC configuration                                       ##

/*
If the firmware is in CNC mode, it can control a mill with M3/M4/M5. It works
similar to laser mode, but mill keeps enabled during G0 moves and it allows
setting rpm (only with event extension that supports this) and milling direction.
It also can add a delay to wait for spindle to run on full speed.
*/

#define SUPPORT_CNC 0
#define CNC_WAIT_ON_ENABLE 300
#define CNC_WAIT_ON_DISABLE 0
#define CNC_ENABLE_PIN -1
#define CNC_ENABLE_WITH 1
#define CNC_DIRECTION_PIN -1
#define CNC_DIRECTION_CW 1
#define CNC_PWM_MAX 255
#define CNC_RPM_MAX 8000
#define CNC_SAFE_Z 150

#define DEFAULT_PRINTER_MODE 0

// ################ Endstop configuration #####################

#define MULTI_ZENDSTOP_HOMING 0
#define ENDSTOP_PULLUP_X_MIN true
#define ENDSTOP_X_MIN_INVERTING true
#define MIN_HARDWARE_ENDSTOP_X true
#define ENDSTOP_PULLUP_Y_MIN true
#define ENDSTOP_Y_MIN_INVERTING true
#define MIN_HARDWARE_ENDSTOP_Y true
#define ENDSTOP_PULLUP_Z_MIN true
#define ENDSTOP_Z_MIN_INVERTING true
#define MIN_HARDWARE_ENDSTOP_Z true
#define ENDSTOP_PULLUP_Z2_MINMAX true
#define ENDSTOP_Z2_MINMAX_INVERTING false
#define MINMAX_HARDWARE_ENDSTOP_Z2 false
#define ENDSTOP_PULLUP_X_MAX true
#define ENDSTOP_X_MAX_INVERTING true
#define MAX_HARDWARE_ENDSTOP_X true
#define ENDSTOP_PULLUP_Y_MAX true
#define ENDSTOP_Y_MAX_INVERTING true
#define MAX_HARDWARE_ENDSTOP_Y true
#define ENDSTOP_PULLUP_Z_MAX true
#define ENDSTOP_Z_MAX_INVERTING true

// Set the values true where you have a hardware endstop. The Pin number is taken from pins.h.

#define MIN_HARDWARE_ENDSTOP_X true
#define MIN_HARDWARE_ENDSTOP_Y true
#define MIN_HARDWARE_ENDSTOP_Z true
#define MAX_HARDWARE_ENDSTOP_X false
#define MAX_HARDWARE_ENDSTOP_Y false
#define MAX_HARDWARE_ENDSTOP_Z false

// If you have a mirrored motor you can put a second endstop to that motor.
// On homing you would then need to trigge rboth endstops. Each endstop only 
// stopps one motor, so they are aligned after homing. After homing only the 
// first endstop gets used.

#define ENDSTOP_PULLUP_X2_MIN false
#define ENDSTOP_PULLUP_Y2_MIN false
#define ENDSTOP_PULLUP_Z2_MINMAX false

#define ENDSTOP_PULLUP_X2_MAX true
#define ENDSTOP_PULLUP_Y2_MAX true
#define ENDSTOP_X2_MIN_INVERTING false
#define ENDSTOP_Y2_MIN_INVERTING false
#define ENDSTOP_X2_MAX_INVERTING false
#define ENDSTOP_Y2_MAX_INVERTING false
#define MIN_HARDWARE_ENDSTOP_X2 false
#define MIN_HARDWARE_ENDSTOP_Y2 false
#define MAX_HARDWARE_ENDSTOP_X2 false
#define MAX_HARDWARE_ENDSTOP_Y2 false
#define X2_MIN_PIN -1
#define X2_MAX_PIN -1
#define Y2_MIN_PIN -1
#define Y2_MAX_PIN -1
#define Z2_MINMAX_PIN -1



#define max_software_endstop_r true

#define min_software_endstop_x false
#define min_software_endstop_y false
#define min_software_endstop_z false
#define max_software_endstop_x false
#define max_software_endstop_y false
#define max_software_endstop_z false
#define DOOR_PIN -1
#define DOOR_PULLUP 1
#define DOOR_INVERTING 1
#define ENDSTOP_X_BACK_MOVE 6
#define ENDSTOP_Y_BACK_MOVE 6
#define ENDSTOP_Z_BACK_MOVE 6
#define ENDSTOP_X_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Y_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Z_RETEST_REDUCTION_FACTOR 6
#define ENDSTOP_X_BACK_ON_HOME 1
#define ENDSTOP_Y_BACK_ON_HOME 1
#define ENDSTOP_Z_BACK_ON_HOME 0
#define ALWAYS_CHECK_ENDSTOPS 1
#define MOVE_X_WHEN_HOMED 0
#define MOVE_Y_WHEN_HOMED 0
#define MOVE_Z_WHEN_HOMED 0

// ################# XYZ movements ###################

#define X_ENABLE_ON 1
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 1
#define DISABLE_X 0
#define DISABLE_Y 0
#define DISABLE_Z 0
#define DISABLE_E 0
#define PREVENT_Z_DISABLE_ON_STEPPER_TIMEOUT
#define INVERT_X_DIR 0
#define INVERT_X2_DIR 0
#define INVERT_Y_DIR 1
#define INVERT_Y2_DIR 0
#define INVERT_Z_DIR 0
#define INVERT_Z2_DIR 0
#define INVERT_Z3_DIR 0
#define INVERT_Z4_DIR 0
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1
#define X_MAX_LENGTH 418
#define Y_MAX_LENGTH 240
#define Z_MAX_LENGTH 210
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define PARK_POSITION_X 0
#define PARK_POSITION_Y 10
#define PARK_POSITION_Z_RAISE 10


#define DISTORTION_CORRECTION 0
#define DISTORTION_CORRECTION_POINTS 5
#define DISTORTION_LIMIT_TO 2
#define DISTORTION_CORRECTION_R 100
#define DISTORTION_PERMANENT 1
#define DISTORTION_UPDATE_FREQUENCY 15
#define DISTORTION_START_DEGRADE 0.5
#define DISTORTION_END_HEIGHT 1
#define DISTORTION_EXTRAPOLATE_CORNERS 0
#define DISTORTION_XMIN 10
#define DISTORTION_YMIN 10
#define DISTORTION_XMAX 190
#define DISTORTION_YMAX 190

// ##########################################################################################
// ##                           Movement settings                                          ##
// ##########################################################################################

#define FEATURE_BABYSTEPPING 1
#define BABYSTEP_MULTIPLICATOR 1

#define DELTA_SEGMENTS_PER_SECOND_PRINT 180 // Move accurate setting for print moves
#define DELTA_SEGMENTS_PER_SECOND_MOVE 70 // Less accurate setting for other moves
#define EXACT_DELTA_MOVES 1

// Delta settings
#define DELTA_HOME_ON_POWER 0

#define DELTASEGMENTS_PER_PRINTLINE 24
#define STEPPER_INACTIVE_TIME 360L
#define MAX_INACTIVE_TIME 0L
#define MAX_FEEDRATE_X 200
#define MAX_FEEDRATE_Y 200
#define MAX_FEEDRATE_Z 80
#define HOMING_FEEDRATE_X 40
#define HOMING_FEEDRATE_Y 40
#define HOMING_FEEDRATE_Z 40
#define HOMING_ORDER HOME_ORDER_XYZ
#define ZHOME_PRE_RAISE 0
#define ZHOME_PRE_RAISE_DISTANCE 10
#define RAISE_Z_ON_TOOLCHANGE 0
#define ZHOME_MIN_TEMPERATURE 0
#define ZHOME_HEAT_ALL 1
#define ZHOME_HEAT_HEIGHT 20
#define ZHOME_X_POS 999999
#define ZHOME_Y_POS 999999
#define ENABLE_BACKLASH_COMPENSATION 1
#define X_BACKLASH 0
#define Y_BACKLASH 0
#define Z_BACKLASH 0
#define RAMP_ACCELERATION 1
#define STEPPER_HIGH_DELAY 0
#define DIRECTION_DELAY 0
#define STEP_DOUBLER_FREQUENCY 12000
#define ALLOW_QUADSTEPPING 1
#define DOUBLE_STEP_DELAY 1 // time in microseconds
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_X 1000
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Y 1000
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Z 50
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_X 1000
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Y 1000
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Z 50
#define INTERPOLATE_ACCELERATION_WITH_Z 0
#define ACCELERATION_FACTOR_TOP 100
#define MAX_JERK 25
#define MAX_ZJERK 0.3
#define PRINTLINE_CACHE_SIZE 24
#define MOVE_CACHE_LOW 10
#define LOW_TICKS_PER_MOVE 250000
#define EXTRUDER_SWITCH_XY_SPEED 100
#define DUAL_X_AXIS 0
#define DUAL_X_RESOLUTION 0
#define X2AXIS_STEPS_PER_MM 100
#define FEATURE_TWO_XSTEPPER 0
#define X2_STEP_PIN   ORIG_E1_STEP_PIN
#define X2_DIR_PIN    ORIG_E1_DIR_PIN
#define X2_ENABLE_PIN ORIG_E1_ENABLE_PIN
#define FEATURE_TWO_YSTEPPER 0
#define Y2_STEP_PIN   ORIG_E1_STEP_PIN
#define Y2_DIR_PIN    ORIG_E1_DIR_PIN
#define Y2_ENABLE_PIN ORIG_E1_ENABLE_PIN
#define FEATURE_TWO_ZSTEPPER 0
#define Z2_STEP_PIN   ORIG_E1_STEP_PIN
#define Z2_DIR_PIN    ORIG_E1_DIR_PIN
#define Z2_ENABLE_PIN ORIG_E1_ENABLE_PIN
#define FEATURE_THREE_ZSTEPPER 0
#define Z3_STEP_PIN   ORIG_E2_STEP_PIN
#define Z3_DIR_PIN    ORIG_E2_DIR_PIN
#define Z3_ENABLE_PIN ORIG_E2_ENABLE_PIN
#define FEATURE_FOUR_ZSTEPPER 0
#define Z4_STEP_PIN   ORIG_E3_STEP_PIN
#define Z4_DIR_PIN    ORIG_E3_DIR_PIN
#define Z4_ENABLE_PIN ORIG_E3_ENABLE_PIN
#define FEATURE_DITTO_PRINTING 1
#define USE_ADVANCE 1
#define ENABLE_QUADRATIC_ADVANCE 0


// ################# Misc. settings ##################

#define BAUDRATE 250000
#define ENABLE_POWER_ON_STARTUP 1
#define POWER_INVERTING 0
#define AUTOMATIC_POWERUP 0
#define KILL_METHOD 1
#define EMERGENCY_PARSER 1
#define ACK_WITH_LINENUMBER 1
#define KEEP_ALIVE_INTERVAL 2000
#define WAITING_IDENTIFIER "wait"
#define ECHO_ON_EXECUTE 1
#define EEPROM_MODE 1
#undef PS_ON_PIN
#define PS_ON_PIN -1
#define JSON_OUTPUT 1

/* ======== Servos =======
Control the servos with
M340 P<servoId> S<pulseInUS>   / ServoID = 0..3  pulseInUs = 500..2500
Servos are controlled by a pulse width normally between 500 and 2500 with 1500ms in center position. 0 turns servo off.
WARNING: Servos can draw a considerable amount of current. Make sure your system can handle this or you may risk your hardware!
*/
#define FEATURE_SERVO 0
#define SERVO0_PIN 11
#define SERVO1_PIN -1
#define SERVO2_PIN -1
#define SERVO3_PIN -1
#define SERVO0_NEUTRAL_POS  -1
#define SERVO1_NEUTRAL_POS  -1
#define SERVO2_NEUTRAL_POS  -1
#define SERVO3_NEUTRAL_POS  -1
#define UI_SERVO_CONTROL 0
#define FAN_KICKSTART_TIME  200
#define MAX_FAN_PWM 255

        #define FEATURE_WATCHDOG 1

// #################### Z-Probing #####################

#define Z_PROBE_Z_OFFSET 0
#define Z_PROBE_Z_OFFSET_MODE 0

#define UI_BED_COATING 0
#define FEATURE_Z_PROBE 0
#define EXTRUDER_IS_Z_PROBE 0
#define Z_PROBE_DISABLE_HEATERS 0
#define Z_PROBE_BED_DISTANCE 10
#define Z_PROBE_PIN -1
#define Z_PROBE_PULLUP 0
#define Z_PROBE_ON_HIGH 0
#define Z_PROBE_X_OFFSET 0
#define Z_PROBE_Y_OFFSET 0
#define Z_PROBE_WAIT_BEFORE_TEST 0
#define Z_PROBE_SPEED 2
#define Z_PROBE_XY_SPEED 150
#define Z_PROBE_SWITCHING_DISTANCE 1
#define Z_PROBE_REPETITIONS 1
#define Z_PROBE_USE_MEDIAN 0
#define Z_PROBE_HEIGHT 40
#define Z_PROBE_DELAY 0
#define Z_PROBE_START_SCRIPT ""
#define Z_PROBE_FINISHED_SCRIPT ""
#define Z_PROBE_RUN_AFTER_EVERY_PROBE ""
#define Z_PROBE_REQUIRES_HEATING 0
#define Z_PROBE_MIN_TEMPERATURE 150
#define FEATURE_AUTOLEVEL 0
#define FEATURE_SOFTWARE_LEVELING 0
#define Z_PROBE_X1 20
#define Z_PROBE_Y1 20
#define Z_PROBE_X2 160
#define Z_PROBE_Y2 20
#define Z_PROBE_X3 100
#define Z_PROBE_Y3 160
#define BED_LEVELING_METHOD 0
#define BED_CORRECTION_METHOD 0
#define BED_LEVELING_GRID_SIZE 5
#define BED_LEVELING_REPETITIONS 5
#define BED_MOTOR_1_X 0
#define BED_MOTOR_1_Y 0
#define BED_MOTOR_2_X 200
#define BED_MOTOR_2_Y 0
#define BED_MOTOR_3_X 100
#define BED_MOTOR_3_Y 200
#define BENDING_CORRECTION_A 0
#define BENDING_CORRECTION_B 0
#define BENDING_CORRECTION_C 0


/* DISTORTION_CORRECTION compensates the distortion caused by mechanical imprecisions of nonlinear (i.e. DELTA) printers
 * assumes that the floor is plain (i.e. glass plate)
 *     and that it is perpendicular to the towers
 *     and that the (0,0) is in center
 * requires z-probe
 * G33 measures the Z offset in matrix NxN points (due to nature of the delta printer, the corners are extrapolated instead of measured)
 * and compensate the distortion
 * more points means better compensation, but consumes more memory and takes more time
 * DISTORTION_CORRECTION_R is the distance of last row or column from center
 */

#define DISTORTION_CORRECTION         0
#define DISTORTION_CORRECTION_POINTS  5
/** Max. distortion value to enter. Used to prevent dangerous errors with big values. */
#define DISTORTION_LIMIT_TO 2
/* For delta printers you simply define the measured radius around origin */
#define DISTORTION_CORRECTION_R       80
/* For all others you define the correction rectangle by setting the min/max coordinates. Make sure the the probe can reach all points! */
#define DISTORTION_XMIN 10
#define DISTORTION_YMIN 10
#define DISTORTION_XMAX 190
#define DISTORTION_YMAX 190

/** Uses EEPROM instead of ram. Allows bigger matrix (up to 22x22) without any ram cost.
  Especially on arm based systems with cached EEPROM it is good, on AVR it has a small
  performance penalty.
*/
#define DISTORTION_PERMANENT          1
/** Correction computation is not a cheap operation and changes are only small. So it
is not necessary to update it for every sub-line computed. For example lets take DELTA_SEGMENTS_PER_SECOND_PRINT = 150
and fastest print speed 100 mm/s. So we have a maximum segment length of 100/150 = 0.66 mm.
Now lats say our point field is 200 x 200 mm with 9 x 9 points. So between 2 points we have
200 / (9-1) = 25 mm. So we need at least 25 / 0.66 = 37 lines to move to the next measuring
point. So updating correction every 15 calls gives us at least 2 updates between the
measured points.
NOTE: Explicit z changes will always trigger an update!
*/
#define DISTORTION_UPDATE_FREQUENCY   15
/** z distortion degrades to 0 from this height on. You should start after the first layer to get
best bonding with surface. */
#define DISTORTION_START_DEGRADE 0.5
/** z distortion correction gets down to 0 at this height. */
#define DISTORTION_END_HEIGHT 1.5
/** If your corners measurement points are not measurable with given radius, you can
set this to 1. It then omits the outer measurement points allowing a larger correction area.*/
#define DISTORTION_EXTRAPOLATE_CORNERS 0

/* If your printer is not exactly square but is more like a parallelogram, you can
use this to compensate the effect of printing squares like parallelograms. Set the
parameter to then tangents of the deviation from 90° when you print a square object.
E.g. if you angle is 91° enter tan(1) = 0.017. If error doubles you have the wrong sign.
Always hard to say since the other angle is 89° in this case!
*/
#define FEATURE_AXISCOMP 0
#define AXISCOMP_TANXY 0
#define AXISCOMP_TANYZ 0
#define AXISCOMP_TANXZ 0

#ifndef SDSUPPORT  // Some boards have sd support on board. These define the values already in pins.h
#define SDSUPPORT 1
#undef SDCARDDETECT
#define SDCARDDETECT ORIG_SDCARDDETECT
#undef SDCARDDETECTINVERTED
#define SDCARDDETECTINVERTED 0
#endif
#define SD_EXTENDED_DIR 1 /** Show extended directory including file length. Don't use this with Pronterface! */
#define SD_RUN_ON_STOP ""
#define SD_STOP_HEATER_AND_MOTORS_ON_STOP 1
#define ARC_SUPPORT 1
#define FEATURE_MEMORY_POSITION 1
#define FEATURE_CHECKSUM_FORCED 0
#define FEATURE_FAN_CONTROL 1
#define FEATURE_FAN2_CONTROL 0
#define FEATURE_CONTROLLER 21
#define ADC_KEYPAD_PIN -1
#define LANGUAGE_EN_ACTIVE 1
#define LANGUAGE_DE_ACTIVE 1
#define LANGUAGE_NL_ACTIVE 0
#define LANGUAGE_PT_ACTIVE 1
#define LANGUAGE_IT_ACTIVE 1
#define LANGUAGE_ES_ACTIVE 1
#define LANGUAGE_FI_ACTIVE 0
#define LANGUAGE_SE_ACTIVE 0
#define LANGUAGE_FR_ACTIVE 1
#define LANGUAGE_CZ_ACTIVE 0
#define LANGUAGE_PL_ACTIVE 0
#define LANGUAGE_TR_ACTIVE 0
#define LANGUAGE_RU_ACTIVE 0
#define UI_PRINTER_NAME "Stacker 500"
#define UI_PRINTER_COMPANY "Stacker LLC"
#define UI_PAGES_DURATION 4000
#define UI_SPEEDDEPENDENT_POSITIONING 0
#define UI_DISABLE_AUTO_PAGESWITCH 1
#define UI_AUTORETURN_TO_MENU_AFTER 30000
#define FEATURE_UI_KEYS 0
#define UI_ENCODER_SPEED 1
#define UI_REVERSE_ENCODER 0
#define UI_KEY_BOUNCETIME 10
#define UI_KEY_FIRST_REPEAT 500
#define UI_KEY_REDUCE_REPEAT 50
#define UI_KEY_MIN_REPEAT 50
#define FEATURE_BEEPER 1
#define CASE_LIGHTS_PIN -1
#define CASE_LIGHT_DEFAULT_ON 1
#define UI_START_SCREEN_DELAY 1000
#define UI_DYNAMIC_ENCODER_SPEED 1
        /**
Beeper sound definitions for short beeps during key actions
and longer beeps for important actions.
Parameter is delay in microseconds and the secons is the number of repetitions.
Values must be in range 1..255
*/
#define BEEPER_SHORT_SEQUENCE 2,2
#define BEEPER_LONG_SEQUENCE 8,8
#define UI_SET_MIN_HEATED_BED_TEMP  30
#define UI_SET_MAX_HEATED_BED_TEMP 120
#define UI_SET_MIN_EXTRUDER_TEMP   170
#define UI_SET_MAX_EXTRUDER_TEMP   280
#define UI_SET_EXTRUDER_FEEDRATE 2
#define UI_SET_EXTRUDER_RETRACT_DISTANCE 3


#define NUM_MOTOR_DRIVERS 0

#define DEBUG_ECHO_ASCII


#define MACHINE_TYPE "STACKER"
#define ALTERNATIVE_JERK
#define REDUCE_ON_SMALL_SEGMENTS
#define MAX_JERK_DISTANCE 0.8 
#define ZHOME_WAIT_UNSWING 500
#define BIG_OUTPUT_BUFFER // allows complete temperature line as output
#define CUSTOM_LOGO
#define LOGO_WIDTH 128
#define LOGO_HEIGHT 13
#define LOGO_BITMAP const unsigned char logo[] PROGMEM = {\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x0F, 0xFF, 0xF3, 0xFF, 0xF9, 0xFF, 0xFE, 0x7F, 0xFF, 0x9E, 0x0F, 0x87, 0xFF, 0xF7, 0xFF, 0xFC,\
0x1F, 0xFF, 0xF3, 0xFF, 0xF3, 0xFF, 0xFC, 0xFF, 0xFF, 0x3C, 0x1F, 0x07, 0xFF, 0xE7, 0xFF, 0xF8,\
0x1F, 0xFF, 0xE7, 0xFF, 0xF3, 0xFF, 0xFC, 0xFF, 0xFF, 0x3C, 0x3E, 0x0F, 0xFF, 0xEF, 0xFF, 0xF8,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x38, 0x00, 0x00, 0x3C, 0x07, 0x80, 0x79, 0xE0, 0x00, 0x78, 0x00, 0x0E, 0x00, 0x0F, 0x00, 0xF8,\
0x3F, 0xFF, 0x80, 0x3C, 0x07, 0x3F, 0xF9, 0xE0, 0x00, 0x7B, 0xF8, 0x1F, 0xFF, 0x8F, 0x01, 0xF0,\
0x3F, 0xFF, 0xC0, 0x78, 0x0F, 0x7F, 0xF9, 0xC0, 0x00, 0x73, 0xF8, 0x1F, 0xFF, 0x8E, 0x7F, 0xE0,\
0x00, 0x03, 0xC0, 0x78, 0x0E, 0x00, 0x73, 0xC0, 0x00, 0xF0, 0x7C, 0x1E, 0x00, 0x1E, 0xFF, 0xC0,\
0x00, 0x03, 0xC0, 0x70, 0x0E, 0x00, 0xF3, 0xC0, 0x00, 0xF0, 0x3E, 0x3C, 0x00, 0x1E, 0xFF, 0xC0,\
0x7F, 0xFF, 0x80, 0xF0, 0x1E, 0x00, 0xF3, 0xFF, 0xFC, 0xF0, 0x1E, 0x3F, 0xFF, 0x9C, 0x07, 0xC0,\
0xFF, 0xFF, 0x00, 0xF0, 0x1E, 0x01, 0xE7, 0xFF, 0xFD, 0xE0, 0x1F, 0x3F, 0xFF, 0xBC, 0x03, 0xE0,\
0xFF, 0xFE, 0x01, 0xE0, 0x3E, 0x01, 0xE7, 0xFF, 0xF9, 0xE0, 0x0F, 0xBF, 0xFF, 0x3C, 0x01, 0xF0\
};

#if 0
Informations:

Extruder temperatures use a user defined table for ATC 104GT sensor. Here a adjustment to
real temperatures in nozzle is included. So in deviation to original temperature table these
temperatures are used:
-50 - 30: Original T
30-260: T-(T-30)*15/230
260-300: T-15

New table stops now at 285°C so max. settable temperature is 280°C
#endif

#endif

