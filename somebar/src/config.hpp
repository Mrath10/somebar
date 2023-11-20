// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = true;

constexpr int paddingX = 10;
constexpr int paddingY = 3;

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
constexpr const char* font = "Sans 12";


constexpr ColorScheme colorInactive = {Color(0xbb, 0xbb, 0xbb), Color(0x22, 0x22, 0x22)};
///{Color(189, 174, 147), Color (40, 40, 40)};

constexpr ColorScheme colorActive = {Color(0xee, 0xee, 0xee), Color(0x00,0x00,0x8B)};
//Color(0x00, 0x55, 0x77)};
//{Color(189, 174, 147), Color(80, 73, 69)};

constexpr const char* termcmd[] = {"foot", nullptr};



static std::vector<std::string> tagNames = {
	"1", "2", "3",
};

constexpr Button buttons[] = {
	{ ClkStatusText,   BTN_RIGHT,  spawn,      {.v = termcmd} },
};
