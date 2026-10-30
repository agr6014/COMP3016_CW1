// This will act as header file for obstacles and set tags
#pragma once
#include <vector>
#include "SDL3/SDL.h"
#include "Grid.h"
// This calls the Grid class, meaning that the gtid is passed in

// Create a class

// Function to set positions of obstacles
// Function to set tags for obstacles (is it a obstacle or finish point)

class Obstacles {
public:

	void create_obstacles(Grid& grid) {
		
		grid.set_cell(2, 2, 1); 
		grid.set_cell(3, 4, 1); 
		grid.set_cell(5, 5, 1); 
		
	};
	// This will set where obstacles are and their values
	// This is a test for now

	void render_obstacles(SDL_Renderer* renderer, Grid& grid) {
		int cell_size = grid.get_cell_size();
		// Thid uses the getter from the grid.h so that i can get the size of a cell

		for (int i = 0; i < grid.get_rows(); i = i + 1) {
			for (int j = 0; j < grid.get_columns(); j = j + 1) {
				if (grid.get_cell(i, j) == 1) {
					SDL_FRect rect = {
						j * cell_size,
						i * cell_size,
						cell_size,
						cell_size
					};
					// This eill the size of the drawn block based on te location and size of each cell
					// I tried using just rect but it wasn't working :(

					SDL_SetRenderDrawColor(renderer, 15, 81, 196, 255);
					SDL_RenderFillRect(renderer, &rect);
					// This should render a different blue for obstacles and walls
				}
			}
		}
	}
	// This will render all of the cells with the value of 1 as a different colour

};