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
	void window_creation() {
		SDL_Init(SDL_INIT_VIDEO);
		// Initialize SDL with video support

		SDL_Window* window = SDL_CreateWindow("Window", 600, 400, 0);
		// Create a window with the title "Window" and dimensions 600x400

		SDL_Renderer* renderer = SDL_CreateRenderer(window, nullptr);
		// Create a renderer for the window

		SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
		// Set the draw color to blue (RGB: 0, 0, 255) with full opacity (A: 255)

		SDL_RenderClear(renderer);
		// Clear the renderer with the current draw color (blue)

		SDL_RenderPresent(renderer);
		// Present the renderer to the window
	};
	// ~Window();

	void window_changes() {
		SDL_Delay(100000);
		// Wait for 100 seconds (100000 milliseconds)
	};

	void window_destroy(SDL_Renderer* renderer, SDL_Window* window) {

		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);
		SDL_Quit();
	};


};

