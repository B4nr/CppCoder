#include <iostream> 
#include "SDL2/SDL.h"

using namespace std;



int main(int argc, char* argv[]) {
	const int width = 800, height = 600;

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* window = SDL_CreateWindow("Hello world!", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_ALLOW_HIGHDPI);

	if (NULL == window) {
		cout << "Could not create window: " << SDL_GetError << endl;
		return 1;
	}

	SDL_Event windowEvent;

	while (true) {
		if (SDL_PollEvent(&windowEvent)) {
			if (SDL_QUIT == windowEvent.type) {
				break;
			}
		}
	}

	SDL_DestroyWindow(window);
	SDL_Quit();

	return EXIT_SUCCESS;
}