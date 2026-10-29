// This class will handle the creation of a grid and cells, allowing for cell based movement
// I couldn't think of how or which file to put it in, so here we are :(
#pragma once
#include <vector>

class Grid {
public:
	Grid(int no_rows, int no_columns);
	void grid_create() {
	
	};
	
private:
	int width;
	int height;
	std::vector<std::vector<int>> cells;
};