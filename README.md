GenericKeyPress
===============

Very simple Windows dll to generate scancode keyboard events to work with DirectInput games.

All functions take a double with they scankey code and cast it to int and send it to SendInput. This should be registerd in DirectInput.

KeyPress will sen Key down and key up events.
KeyUp send only the up event.
KeyDown send only the down event, who would have guessed.

There is currently no error checking.

All functions return a double.

Doubles is used for GameMaker compability.
