/*
 * Copyright © 2025 Delilah Hoare and Rachael Dwyer
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of version 3 of the GNU General Public License as
 * published by the Free Software Foundation (the GPLv3).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * As a special exception, notwithstanding any provision of the GPLv3, the
 * copyright holders of this program give you permission to link or combine
 * this program with Watcom Code into a single combined work, and to convey
 * the resulting work.  The terms of the GPLv3 will continue to apply to
 * each part of the combined work which is not Watcom Code.  Watcom Code is
 * "Covered Code" as defined by the Sybase Open Watcom Public License
 * version 1.0. If you modify this program, you may extend this exception
 * to your version of the program, but you are not obligated to do so. 
 * If you do not wish to do so, delete this exception statement from your
 * version.
 */

#ifndef ODDBALL_KBD_H
#define ODDBALL_KBD_H

#include <stdint.h>

enum o_kbd
{
	O_KBD_ESC = 1,
	O_KBD_F1,
	O_KBD_F2,
	O_KBD_F3,
	O_KBD_F4,
	O_KBD_F5,
	O_KBD_F6,
	O_KBD_F7,
	O_KBD_F8,
	O_KBD_F9,
	O_KBD_F10,
	O_KBD_F11,
	O_KBD_F12,
	O_KBD_PRINT_SCREEN,
	O_KBD_SCROLL_LOCK,
	O_KBD_PAUSE,
	O_KBD_POWER,
	O_KBD_BACKTICK,
	O_KBD_1,
	O_KBD_2,
	O_KBD_3,
	O_KBD_4,
	O_KBD_5,
	O_KBD_6,
	O_KBD_7,
	O_KBD_8,
	O_KBD_9,
	O_KBD_0,
	O_KBD_HYPHEN,
	O_KBD_EQUALS,
	O_KBD_BACKSPACE,
	O_KBD_INS,
	O_KBD_HOME,
	O_KBD_PAGE_UP,
	O_KBD_NUM_LOCK,
	O_KBD_NUM_EQUALS,
	O_KBD_NUM_SLASH,
	O_KBD_NUM_ASTERISK,
	O_KBD_TAB,
	O_KBD_Q,
	O_KBD_W,
	O_KBD_E,
	O_KBD_R,
	O_KBD_T,
	O_KBD_Y,
	O_KBD_U,
	O_KBD_I,
	O_KBD_O,
	O_KBD_P,
	O_KBD_BRACKET_OPEN,
	O_KBD_BRACKET_CLOSE,
	O_KBD_BACKSLASH,
	O_KBD_DEL,
	O_KBD_END,
	O_KBD_PAGE_DOWN,
	O_KBD_NUM_7,
	O_KBD_NUM_8,
	O_KBD_NUM_9,
	O_KBD_NUM_HYPHEN,
	O_KBD_CAPS_LOCK,
	O_KBD_A,
	O_KBD_S,
	O_KBD_D,
	O_KBD_F,
	O_KBD_G,
	O_KBD_H,
	O_KBD_J,
	O_KBD_K,
	O_KBD_L,
	O_KBD_SEMICOLON,
	O_KBD_APOSTROPHE,
	O_KBD_RETURN,
	O_KBD_NUM_4,
	O_KBD_NUM_5,
	O_KBD_NUM_6,
	O_KBD_NUM_PLUS,
	O_KBD_SHIFT_LEFT,
	O_KBD_Z,
	O_KBD_X,
	O_KBD_C,
	O_KBD_V,
	O_KBD_B,
	O_KBD_N,
	O_KBD_M,
	O_KBD_COMMA,
	O_KBD_FULL_STOP,
	O_KBD_SLASH,
	O_KBD_SHIFT_RIGHT,
	O_KBD_UP,
	O_KBD_NUM_1,
	O_KBD_NUM_2,
	O_KBD_NUM_3,
	O_KBD_NUM_ENTER,
	O_KBD_CONTROL_LEFT,
	O_KBD_OPTION_LEFT,
	O_KBD_COMMAND_LEFT,
	O_KBD_SPACE,
	O_KBD_COMMAND_RIGHT,
	O_KBD_OPTION_RIGHT,
	O_KBD_CONTROL_RIGHT,
	O_KBD_LEFT,
	O_KBD_DOWN,
	O_KBD_RIGHT,
	O_KBD_NUM_0,
	O_KBD_NUM_FULL_STOP,
	
	/* Raylib */
	O_KBD_CONTEXT,
	O_KBD_BACK,
	O_KBD_MENU,
	O_KBD_VOLUME_UP,
	O_KBD_VOLUME_DOWN,
	
	/* Allegro */
	O_KBD_BACKSLASH2, /* FIXME: Make sure this is equivalent to NONUSBACKSLASH from SDL */
	O_KBD_NUM_DEL, /* FIXME: Make sure this is equivalent to numpad backspace from SDL */
	O_KBD_ABNT_C1,
	O_KBD_YEN,
	O_KBD_KANA,
	O_KBD_CONVERT,
	O_KBD_NOCONVERT,
	O_KBD_AT,
	O_KBD_CIRCUMFLEX,
	O_KBD_COLON2,
	O_KBD_KANJI,
	
	/* SDL (whew) */
	O_KBD_NONUSHASH,
	O_KBD_F13,
	O_KBD_F14,
	O_KBD_F15,
	O_KBD_F16,
	O_KBD_F17,
	O_KBD_F18,
	O_KBD_F19,
	O_KBD_F20,
	O_KBD_F21,
	O_KBD_F22,
	O_KBD_F23,
	O_KBD_F24,
	O_KBD_EXECUTE,
	O_KBD_HELP,
	O_KBD_SELECT,
	O_KBD_AC_STOP,
	O_KBD_AC_AGAIN,
	O_KBD_AC_UNDO,
	O_KBD_AC_CUT,
	O_KBD_AC_COPY,
	O_KBD_AC_PASTE,
	O_KBD_AC_FIND,
	O_KBD_MUTE,
	O_KBD_NUM_COMMA,
	O_KBD_NUM_EQUALSAS400,
	O_KBD_INTERNATIONAL1, /* FIXME: Are any of these equivalent to keys from Allegro? */
	O_KBD_INTERNATIONAL2,
	O_KBD_INTERNATIONAL4,
	O_KBD_INTERNATIONAL5,
	O_KBD_INTERNATIONAL6,
	O_KBD_INTERNATIONAL7,
	O_KBD_INTERNATIONAL8,
	O_KBD_INTERNATIONAL9,
	O_KBD_LANG1,
	O_KBD_LANG2,
	O_KBD_LANG3,
	O_KBD_LANG4,
	O_KBD_LANG5,
	O_KBD_LANG6,
	O_KBD_LANG7,
	O_KBD_LANG8,
	O_KBD_LANG9,
	O_KBD_ALTERASE,
	O_KBD_SYSREQ,
	O_KBD_AC_CANCEL,
	O_KBD_CLEAR,
	O_KBD_PRIOR,
	O_KBD_RETURN2,
	O_KBD_SEPARATOR,
	O_KBD_OUT,
	O_KBD_OPER,
	O_KBD_CLEAR_AGAIN,
	O_KBD_CRSEL,
	O_KBD_EXSEL,
	O_KBD_NUM_00,
	O_KBD_NUM_000,
	O_KBD_THOUSANDS_SEPARATOR,
	O_KBD_DECIMAL_SEPARATOR,
	O_KBD_CURRENCY_UNIT,
	O_KBD_CURRENCY_SUBUNIT,
	O_KBD_NUM_PARENTHESIS_OPEN,
	O_KBD_NUM_PARENTHESIS_CLOSE,
	O_KBD_NUM_BRACE_OPEN,
	O_KBD_NUM_BRACE_CLOSE,
	O_KBD_NUM_TAB,
	O_KBD_NUM_A,
	O_KBD_NUM_B,
	O_KBD_NUM_C,
	O_KBD_NUM_D,
	O_KBD_NUM_E,
	O_KBD_NUM_F,
	O_KBD_NUM_XOR,
	O_KBD_NUM_POWER,
	O_KBD_NUM_PERCENT,
	O_KBD_NUM_LESS,
	O_KBD_NUM_GREATER,
	O_KBD_NUM_AMPERSAND,
	O_KBD_NUM_DOUBLE_AMPERSAND,
	O_KBD_NUM_VERTICAL_BAR,
	O_KBD_NUM_DOUBLE_VERTICAL_BAR,
	O_KBD_NUM_COLON,
	O_KBD_NUM_HASH,
	O_KBD_NUM_SPACE,
	O_KBD_NUM_AT,
	O_KBD_NUM_EXCLAM,
	O_KBD_NUM_MEMSTORE,
	O_KBD_NUM_MEMRECALL,
	O_KBD_NUM_MEMCLEAR,
	O_KBD_NUM_MEMADD,
	O_KBD_NUM_MEMSUBTRACT,
	O_KBD_NUM_MEMMULTIPLY,
	O_KBD_NUM_MEMDIVIDE,
	O_KBD_NUM_PLUSMINUS,
	O_KBD_NUM_CLEAR,
	O_KBD_NUM_CLEAR_ENTRY,
	O_KBD_NUM_BINARY,
	O_KBD_NUM_OCTAL,
	O_KBD_NUM_DECIMAL,
	O_KBD_NUM_HEXADECIMAL,
	O_KBD_MODE,
	O_KBD_SLEEP,
	O_KBD_WAKE,
	O_KBD_CHANNEL_INCREMENT,
	O_KBD_CHANNEL_DECREMENT,
	O_KBD_MEDIA_PLAY,
	O_KBD_MEDIA_PAUSE,
	O_KBD_MEDIA_RECORD,
	O_KBD_MEDIA_FAST_FORWARD,
	O_KBD_MEDIA_REWIND,
	O_KBD_MEDIA_NEXT_TRACK,
	O_KBD_MEDIA_PREVIOUS_TRACK,
	O_KBD_MEDIA_STOP,
	O_KBD_MEDIA_EJECT,
	O_KBD_MEDIA_PLAY_PAUSE,
	O_KBD_MEDIA_SELECT,
	O_KBD_AC_NEW,
	O_KBD_AC_OPEN,
	O_KBD_AC_CLOSE,
	O_KBD_AC_EXIT,
	O_KBD_AC_SAVE,
	O_KBD_AC_PRINT,
	O_KBD_AC_PROPERTIES,
	O_KBD_AC_SEARCH,
	O_KBD_AC_HOME,
	O_KBD_AC_BACK,
	O_KBD_AC_FORWARD,
	O_KBD_AC_STOP2,
	O_KBD_AC_REFRESH,
	O_KBD_AC_BOOKMARKS,
	O_KBD_SOFTLEFT, /* FIXME: Are any of these equivalent to the Android keys from Raylib? */
	O_KBD_SOFTRIGHT,
	O_KBD_CALL,
	O_KBD_ENDCALL
};

struct o_kbdstate
{
	uint32_t pressed[8];
};

#define O_KBD_CHECK_PRESSED(state, key) !!((state).pressed[key / 32] & (1 << (key % 32)))
#define O_KBD_SET_PRESSED(state, key) (state).pressed[key / 32] |= ((uint32_t)1 << (key % 32))
#define O_KBD_CLEAR_PRESSED(state, key) (state).pressed[key / 32] &= ~((uint32_t)1 << (key % 32))

/*
 * Store the current state of keys in 'state'.
 * Return false on failure.
 */
bool o_kbd_poll(struct o_kbdstate *state);

#endif

