// This will act as the header file for player movement and collision detection
#pragma once
#include <vector>
#include "Grid.h"
#include "Obstacles.h"
#include "SDL3/SDL.h"

// Create a class

// Function to handle player movement
// Function to handle collision detection with obstacles and finish point

class Player {
public:
	void movement(Grid& grid, int next_x, int next_y) {
		int new_row = player_y + next_y;
		int new_column = player_x + next_x;

		while (new_row >= 0 && new_row < grid.get_rows() && new_column >= 0 && new_column < grid.get_columns() && grid.get_cell(new_row, new_column) != 1) {
			// This checks if the player is colliding with a wall or obstacle
			// This line is longer than originally expected XD

			player_y = new_row;
			player_x = new_column;
			// This changes the position of the player

			new_row = player_y + next_y;
			new_column = player_x + next_x;
			// Now the "new" positions are changed so another check can be performed
		}
		
	}

	void render_player(SDL_Renderer* renderer, Grid& grid) {
		int cell_size = grid.get_cell_size();
		SDL_FRect rect_player = {
			player_x * cell_size,
			player_y * cell_size,
			cell_size,
			cell_size
		};

		SDL_SetRenderDrawColor(renderer, 255, 251, 0, 255);
		SDL_RenderFillRect(renderer, &rect_player);

	}


private:
	int player_y = 1;
	int player_x = 1;
	// This will set where the player starts and be updated 

};