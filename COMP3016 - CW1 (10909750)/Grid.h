// This class will handle the creation of a grid and cells, allowing for cell based movement
// I couldn't think of how or which file to put it in, so here we are :(
#pragma once
#include <vector>
// Vector will let me create the needed cells
#include "SDL3/SDL.h"

class Grid {
public:
	void grid_create() {
		cells.resize(rows, std::vector<int>(columns, 0));

		for (int i = 0; i < rows; i = i + 1) {
			for (int j = 0; j < columns; j = j + 1) {
				if (j == 0 || j == columns - 1 || i == 0 || i == rows - 1) {
					cells[i][j] = 1;
				}
			}
		}
		// In theoryu this should set the outer walls to 1 (being obstacles)

	};
	// This function will create the grid, next is to make the getters and setters
	// Which are annoying :(

	int get_columns() {
		return columns;
	};

	int get_rows() {
		return rows;
	};
	// These will get the rows and columns

	int get_cell(int row, int column) {
		return cells[row][column];
	};

	int get_cell_size() {
		return cell_size;
	};
	// This will get the size of a cell

	void set_cell(int row, int column, int value) {
		cells[row][column] = value;
	};
	// This is the setter so that the obstacles and goal can be placed

private:
	int columns = 10;
	int rows = 10;
	// This sets up how many rows and columns for the grid

	std::vector<std::vector<int>> cells;
	int cell_size = 40;
};