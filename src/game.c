#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "game.h"
#include "player.h"
#include "obstacles.h"
#include "graphics.h"

#define GAME_WIDTH 40
#define GAME_HEIGHT 10

void gameLoop() {
    int score = 0;
    int gameOver = 0;
    Player player = { .x = 5, .y = GAME_HEIGHT - 2, .isJumping = 0 };
    Obstacle obstacles[10];
    int obstacleCount = 0;

    while (!gameOver) {
        system("clear"); // Clear the terminal for rendering
        renderGraphics(player, obstacles, obstacleCount, score);
        
        // Handle player input
        if (playerInput() == JUMP) {
            playerJump(&player);
        }

        // Update game state
        updatePlayer(&player);
        obstacleCount = updateObstacles(obstacles, obstacleCount);
        score += checkCollisions(player, obstacles, obstacleCount);

        // Check for game over condition
        if (checkGameOver(player, obstacles, obstacleCount)) {
            gameOver = 1;
        }

        usleep(100000); // Control the game speed
    }

    printf("Game Over! Your score: %d\n", score);
}

int main() {
    printf("Welcome to Dragon Runner!\n");
    gameLoop();
    return 0;
}