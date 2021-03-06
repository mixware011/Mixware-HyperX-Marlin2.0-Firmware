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

#ifdef __cplusplus
  extern "C" { /* C-declarations for C++ */
#endif

enum {
  DIALOG_TYPE_STOP = 0,
  DIALOG_TYPE_PRINT_FILE,
  DIALOG_TYPE_REPRINT_NO_FILE,

  DIALOG_TYPE_M80_FAIL,
  DIALOG_TYPE_MESSAGE_ERR1,

  DIALOG_TYPE_UPDATE_ESP_FIRMARE,
  DIALOG_TYPE_UPDATE_ESP_DATA,
  DIALOG_TYPE_UPLOAD_FILE,
  DIALOG_TYPE_UNBIND,

  DIALOG_TYPE_FILAMENT_LOAD_HEAT,
  DIALOG_TYPE_FILAMENT_HEAT_LOAD_COMPLETED,
  DIALOG_TYPE_FILAMENT_LOADING,
  DIALOG_TYPE_FILAMENT_LOAD_COMPLETED,
  DIALOG_TYPE_FILAMENT_UNLOAD_HEAT,
  DIALOG_TYPE_FILAMENT_HEAT_UNLOAD_COMPLETED,
  DIALOG_TYPE_FILAMENT_UNLOADING,
  DIALOG_TYPE_FILAMENT_UNLOAD_COMPLETED,

  DIALOG_TYPE_FILE_LOADING,

  DIALOG_TYPE_FILAMENT_NO_PRESS,
  DIALOG_TYPE_FINISH_PRINT,

  DIALOG_WIFI_ENABLE_TIPS,

  DIALOG_PAUSE_MESSAGE_PAUSING,
  DIALOG_PAUSE_MESSAGE_CHANGING,
  DIALOG_PAUSE_MESSAGE_UNLOAD,
  DIALOG_PAUSE_MESSAGE_WAITING,
  DIALOG_PAUSE_MESSAGE_INSERT,
  DIALOG_PAUSE_MESSAGE_LOAD,
  DIALOG_PAUSE_MESSAGE_PURGE,
  DIALOG_PAUSE_MESSAGE_RESUME,
  DIALOG_PAUSE_MESSAGE_HEAT,
  DIALOG_PAUSE_MESSAGE_HEATING,
  DIALOG_PAUSE_MESSAGE_OPTION,

  DIALOG_STORE_EEPROM_TIPS,
  DIALOG_READ_EEPROM_TIPS,
  DIALOG_REVERT_EEPROM_TIPS,

  DIALOG_WIFI_CONFIG_TIPS,
  DIALOG_TRANSFER_NO_DEVICE,
  DIALOG_TYPE_MACHINE_PAUSING_TIPS

#if ENABLED(MIXWARE_MODEL_V)
  ,DIALOG_TYPE_FILAMENT_PAUSING
  ,DIALOG_TYPE_FILAMENT_WAIT_START
  ,DIALOG_TYPE_FILAMENT_CLOG
  ,DIALOG_RUNOUT_PAUSING
  ,DIALOG_RUNOUT_UNLOAD
  ,DIALOG_RUNOUT_LOADTIPS
  ,DIALOG_RUNOUT_LOAD
  ,DIALOG_RUNOUT_FINISH
  ,DIALOG_AUTO_LEVEL_COMPLETED
  ,DIALOG_AUTO_LEVELING
  ,DIALOG_AUTO_LEVEL_HOMING
  ,DIALOG_AUTO_LEVEL_LEVELING
  ,DIALOG_AUTO_LEVEL_FINISHED
  ,DIALOG_AUTO_LEVEL_LEVELERR
  ,DIALOG_ADJUST_Z_HEIGHT_WAIT_START
#endif
};

#define BTN_OK_X      100
#define BTN_OK_Y      180
#define BTN_CANCEL_X  280
#define BTN_CANCEL_Y  180

extern void lv_draw_dialog(uint8_t type);
extern void lv_clear_dialog();
extern void filament_sprayer_temp();
extern void filament_dialog_handle();
extern void lv_filament_setbar();

#if ENABLED(MIXWARE_MODEL_V)
  #define BTN_CENTER_X    (TFT_WIDTH/2 - BTN_SIZE_WIDTH/2)
  #define BTN_LEFT_X      (TFT_WIDTH/2 - 20 - BTN_SIZE_WIDTH)
  #define BTN_RIGHT_X     (TFT_WIDTH/2 + 20)
  #define BTN_POS_Y       280
  #define BTN_SIZE_WIDTH  120
  #define BTN_SIZE_HEIGHT 60

  extern void auto_leveling_dialog_handle();
  extern void runout_dialog_handle();
#endif

#ifdef __cplusplus
  } /* C-declarations for C++ */
#endif
