// COMP3016 - CW1 (10909750).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// #include <iostream>

// int main()
// {
   // std::cout << "Hello World!\n";
// }

#include <iostream>
#include "Window.h"
#include "Player.h"
#include "Obstacles.h"
#include "Grid.h"

int main() {
	Window window;
	Obstacles obstacles;
	Player player;
	Grid grid;
	// These declare the classes, so i can use them

	window.window_creation(800, 600);

	grid.grid_create();
	obstacles.create_obstacles(grid);
	// These create the grid and obstacles

	SDL_Renderer* renderer = window.get_renderer();

	bool running = true;
	// Sets the game loop as running

	SDL_Event event;

	while (running == true) {
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_EVENT_QUIT) {
			running = false;
		    }
		}

		SDL_SetRenderDrawColor(renderer, 0, 217, 255, 255);

		SDL_RenderClear(renderer);

		obstacles.render_obstacles(renderer, grid);

		// SDL_FRect test = { 100, 100, 50, 50 };
		// SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
		// SDL_RenderFillRect(renderer, &test);
		// This was a test that failed :(

		SDL_RenderPresent(renderer);
		
	}

	window.window_changes();
	window.get_window();
	window.get_renderer();

	window.window_destroy(window.get_renderer(), window.get_window());
	return 0;
}



