// This will act as header file for the window
#pragma once

#include <iostream>
#include "SDL3/SDL.h"

// Create a class

// Function to create the window and renderer
// Function to create the maze
// Function to handle events
// Function to destroy the window and renderer when completing the game

class Window
{
public:
	std::pair<SDL_Window*, SDL_Renderer*> window_creation(int x, int y) {
		SDL_Init(SDL_INIT_VIDEO);
		// Initialize SDL with video support

		SDL_Window* window = SDL_CreateWindow("Window", x, y, 0);
		// Create a window with the title "Window" and dimensions 600x400

		SDL_Renderer* renderer = SDL_CreateRenderer(window, nullptr);
		// Create a renderer for the window

		SDL_SetRenderDrawColor(renderer, 0, 217, 255, 255);
		// Set the draw color to blue (RGB: 0, 217, 255) with full opacity (A: 255)

		SDL_RenderClear(renderer);
		// Clear the renderer with the current draw color (blue)

		SDL_RenderPresent(renderer);
		// Present the renderer to the window

		return std::make_pair(window, renderer);
	};
	// ~Window();

	void window_changes() {
		SDL_Delay(5000);
		// Wait for 5 seconds (5000 milliseconds)
	};

	void window_destroy(SDL_Renderer* renderer, SDL_Window* window) {

		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);
		SDL_Quit();
	};

	SDL_Window* get_window() {
		return window;
	};

	SDL_Renderer* get_renderer() {
		return renderer;
	};

private:
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;

};

