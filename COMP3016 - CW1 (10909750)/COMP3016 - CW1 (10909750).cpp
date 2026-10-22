// COMP3016 - CW1 (10909750).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// #include <iostream>

// int main()
// {
   // std::cout << "Hello World!\n";
// }

#include <iostream>
#include "Window.h"

int main() {
	Window window;
	window.window_creation(1200, 800);
	window.window_changes();
	window.get_window();
	window.get_renderer();
	window.window_destroy(window.get_renderer(), window.get_window());
	return 0;
}



