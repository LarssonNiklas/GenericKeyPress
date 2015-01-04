// GenericKeyPress.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

GMEXPORT double __cdecl PressKey(double key) {
	INPUT in;
	in.type = INPUT_KEYBOARD;
	in.ki.wScan = (int)key;
	in.ki.dwFlags = KEYEVENTF_SCANCODE;
	in.ki.dwExtraInfo = 0;
	in.ki.time = 0;

	SendInput(1, &in, sizeof(INPUT)); // Send key down

	in.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;

	SendInput(1, &in, sizeof(INPUT)); // Send key up

	return 0;
}

GMEXPORT double __cdecl KeyDown(double key) {
	INPUT in;
	in.type = INPUT_KEYBOARD;
	in.ki.wScan = (int)key;
	in.ki.dwFlags = KEYEVENTF_SCANCODE;
	in.ki.dwExtraInfo = 0;
	in.ki.time = 0;

	SendInput(1, &in, sizeof(INPUT)); // Send key down

	return 0;
}

GMEXPORT double __cdecl KeyUp(double key) {
	INPUT in;
	in.type = INPUT_KEYBOARD;
	in.ki.wScan = (int)key;
	in.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
	in.ki.dwExtraInfo = 0;
	in.ki.time = 0;

	SendInput(1, &in, sizeof(INPUT));

	return 0;
}