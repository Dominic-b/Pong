#include "Common.h"

void Input::keyboardInput(SDL_Event &e) {
	SDL_PollEvent(&e);
	keyboard_state_array = SDL_GetKeyboardState(NULL);

	pressedKeys[0] = false;
	pressedKeys[1] = false;
	pressedKeys[2] = false;
	pressedKeys[3] = false;

	if (keyboard_state_array[SDL_SCANCODE_W]) {
		pressedKeys[0] = true;
	} if (keyboard_state_array[SDL_SCANCODE_S]) {
		pressedKeys[1] = true;
	} if (keyboard_state_array[SDL_SCANCODE_UP]) {
		pressedKeys[2] = true;
	} if (keyboard_state_array[SDL_SCANCODE_DOWN]) {
		pressedKeys[3] = true;
	}
}

void Input::mouseInput(SDL_Event& e) {
	SDL_GetMouseState(&mousePosX, &mousePosY);
	if (e.button.type == SDL_MOUSEBUTTONDOWN) {
		if (e.button.button == SDL_BUTTON_LEFT) {

		}
	}
}