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

			if (event.key.key == SDLK_UP) {
				player.movement(grid, 0, -1);
			}
			// This basically just means if possible, it will stay in the same column, but go up a row

			if (event.key.key == SDLK_DOWN) {
				player.movement(grid, 0, 1);
			}

			if (event.key.key == SDLK_LEFT) {
				player.movement(grid, -1, 0);
			}

			if (event.key.key == SDLK_RIGHT) {
				player.movement(grid, 1, 0);
			}
			// These if statements should allow for movement and collision detection 

			if (player.win_condition(grid) == true) {
				std::cout << "You win!" << std::endl;
				running = false;
				window.window_changes();

			}

		}

		SDL_SetRenderDrawColor(renderer, 0, 217, 255, 255);

		SDL_RenderClear(renderer);

		obstacles.render_obstacles(renderer, grid);
		obstacles.render_goal(renderer, grid);

		player.render_player(renderer, grid);
		// This will render the player

		// SDL_FRect test = { 100, 100, 50, 50 };
		// SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
		// SDL_RenderFillRect(renderer, &test);
		// This was a test that failed :(

		SDL_RenderPresent(renderer);
		
	}

	window.get_window();
	window.get_renderer();

	window.window_destroy(window.get_renderer(), window.get_window());
	return 0;
}



