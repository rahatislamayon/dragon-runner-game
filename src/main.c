#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "game.h"

int main() {
    // Initialize the game
    if (!initializeGame()) {
        printf("Failed to initialize the game.\n");
        return 1;
    }

    // Main game loop
    while (1) {
        // Handle player input
        handleInput();

        // Update game state
        updateGame();

        // Render graphics
        renderGraphics();

        // Check for game over condition
        if (isGameOver()) {
            printf("Game Over! Your score: %d\n", getScore());
            break;
        }

        // Delay for a short period to control game speed
        _sleep(100);
    }

    // Clean up resources
    cleanupGame();
    return 0;
}