#ifndef _gcn64_requests_h__
#define _gcn64_requests_h__

/* Generic commands */
#define RQ_RNT_ECHO					0x00
#define RQ_RNT_SET_CONFIG_PARAM		0x01
#define RQ_RNT_GET_CONFIG_PARAM		0x02
#define RQ_RNT_SUSPEND_POLLING		0x03
#define RQ_RNT_GET_VERSION			0x04
#define RQ_RNT_GET_SIGNATURE			0x05
#define RQ_RNT_GET_CONTROLLER_TYPE	0x06
#define RQ_RNT_SET_VIBRATION			0x07
#define RQ_RNT_SET_MAPPING			0x08
#define RQ_RNT_GET_MAPPING			0x09

#define RQ_RNT_GET_SUPPORTED_REQUESTS	0xF0
#define RQ_RNT_GET_SUPPORTED_MODES		0xF1
#define RQ_RNT_GET_SUPPORTED_CFG_PARAMS	0xF2
#define RQ_RNT_GET_SUPPORTED_MAPPINGS	0xF3
#define RQ_RNT_RESET_FIRMWARE			0xFE
#define RQ_RNT_JUMP_TO_BOOTLOADER		0xFF

/* N64/GC specific */
#define RQ_GCN64_RAW_SI_COMMAND			0x80
#define RQ_GCN64_BLOCK_IO				0x81

/* WUSBMote specific */
#define RQ_WUSBMOTE_I2C_TRANSACTIONS	0x82

/* PC engine to USB specific */
#define RQ_PCENGINE_RAW					0x83

/* PSX to USB specific */
#define RQ_PSX_RAW						0x84
#define FLG_NO_DESELECT					0x01
#define FLG_LATE_8TH					0x02
#define FLG_POST_DELAY                  0x04

/* DB9 (Atari/SMS/Genesis) to USB specific */
#define RQ_DB9_RAW						0x85

/* Get controller type values */
// Legacy values (GC/N64 specific)
#define CTL_TYPE_NONE	0
#define CTL_TYPE_N64	1
#define CTL_TYPE_GC		2
#define CTL_TYPE_GCKB	3
// New values (follows PAD_TYPE_* + 100)
#define CTL_TYPE_NONE_NEW	100
#define CTL_TYPE_CLASSIC	101
#define	CTL_TYPE_SNES		102
#define CTL_TYPE_NES		103
#define CTL_TYPE_N64_NEW	104
#define CTL_TYPE_GAMECUBE_NEW	105
#define CTL_TYPE_MD			106
#define CTL_TYPE_SMS		107
#define CTL_TYPE_SNES_NDK10	108
#define CTL_TYPE_SNES_MOUSE	109
#define CTL_TYPE_PCE		110
#define CTL_TYPE_PCE6		111
#define CTL_TYPE_NUNCHUK	112
#define CTL_TYPE_CLASSIC_PRO	113
#define CTL_TYPE_WIIMOTE_TAIKO	114
#define CTL_TYPE_XE1AP		115
#define CTL_TYPE_SATURN		116
#define CTL_TYPE_SATURN_ANALOG	117
#define CTL_TYPE_SATURN_MOUSE	118
#define CTL_TYPE_PSX_DIGITAL	119
#define CTL_TYPE_PSX_ANALOG		120
#define CTL_TYPE_PSX_NEGCON		121
#define CTL_TYPE_PSX_MOUSE		122
#define CTL_TYPE_MD6			123
#define CTL_TYPE_SMS_PADDLE		124
#define CTL_TYPE_MD_MOUSE		125
#define CTL_TYPE_MSX_2BUTTON	126

#define CTL_TYPE_RANDNET_KEYBOARD	140
#define CTL_TYPE_GAMECUBE_KEYBOARD	141

/* Configuration parameters and constants */
#define CFG_PARAM_MODE			0x00

/* Values for mode */
#define CFG_MODE_STANDARD   	0x00
#define CFG_MODE_N64_ONLY		0x01
#define CFG_MODE_GC_ONLY		0x02
#define CFG_MODE_3P_STANDARD	0x03
#define CFG_MODE_4P_STANDARD	0x04
#define CFG_MODE_5P_STANDARD	0x05

#define CFG_MODE_2P_STANDARD	0x10
#define CFG_MODE_2P_N64_ONLY	0x11
#define CFG_MODE_2P_GC_ONLY		0x12

#define CFG_MODE_MOUSE			0x20

#define CFG_PARAM_RESERVED		0x00
#define CFG_PARAM_SERIAL		0x01

#define CFG_PARAM_POLL_INTERVAL0	0x10
#define CFG_PARAM_POLL_INTERVAL1	0x11
#define CFG_PARAM_POLL_INTERVAL2	0x12
#define CFG_PARAM_POLL_INTERVAL3	0x13

#define CFG_PARAM_N64_SQUARE		0x20 // Not implemented
#define CFG_PARAM_GC_MAIN_SQUARE	0x21 // Not implemented
#define CFG_PARAM_GC_CSTICK_SQUARE	0x22 // Not implemented
#define CFG_PARAM_FULL_SLIDERS		0x23
#define CFG_PARAM_INVERT_TRIG		0x24
#define CFG_PARAM_TRIGGERS_AS_BUTTONS	0x25
#define CFG_PARAM_MOUSE_INVERT_SCROLL	0x26
// eg: Swap left and right sticks on classic controller
#define CFG_PARAM_SWAP_STICKS		0x27
#define CFG_PARAM_ENABLE_NUNCHUK_X_ACCEL	0x28
#define CFG_PARAM_ENABLE_NUNCHUK_Y_ACCEL	0x29
#define CFG_PARAM_ENABLE_NUNCHUK_Z_ACCEL	0x2A
#define CFG_PARAM_AUTO_ENABLE_ANALOG		0x2B // For PSX controllers

#define CFG_PARAM_DPAD_AS_BUTTONS		0x30
#define CFG_PARAM_DPAD_AS_AXES			0x31
#define CFG_PARAM_DISABLE_ANALOG_TRIGGERS		0x32

#define CFG_PARAM_SNES_MOUSE_SPEED  0x33

/* Mappings IDs */
#define MAPPING_ID_SATURN_DEFAULT   0x30
#define MAPPING_ID_SATURN_DPAD_AS_BUTTONS   0x31
#define MAPPING_ID_SATURN_SLS       0x32
#define MAPPING_ID_SATURN_SLS_ALT   0x33
#define MAPPING_ID_SATURN_VIP       0x34
#define MAPPING_ID_SATURN_MOUSE_DEFAULT 0x35

#define MAPPING_ID_RESERVED 0xFF

#endif
