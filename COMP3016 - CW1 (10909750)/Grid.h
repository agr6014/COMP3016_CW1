// This class will handle the creation of a grid and cells, allowing for cell based movement
// I couldn't think of how or which file to put it in, so here we are :(
#pragma once
#include <vector>
// Vector will let me create the needed cells
#include "SDL3/SDL.h"

class Grid {
public:
	void grid_create() {
		cells.resize(columns * rows, std::vector<int>(rows, 0));

		for (int i = 0; i < rows; i = i + 1) {
			for (int j = 0; j < columns; j = j + 1) {
				
			}
		}
	};
	
private:
	int columns = 10;
	int rows = 10;
	// This sets up how many rows and columns for the grid

	std::vector<std::vector<int>> cells;
	int cell_size = 40;
};