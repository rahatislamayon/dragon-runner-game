#include "obstacles.h"
#include <stdlib.h>
#include <time.h>

#define MAX_OBSTACLES 10
#define OBSTACLE_WIDTH 3
#define SCREEN_WIDTH 80

typedef struct {
    int x;
    int y;
} Obstacle;

static Obstacle obstacles[MAX_OBSTACLES];
static int obstacleCount = 0;

void initObstacles() {
    srand(time(NULL));
    obstacleCount = 0;
}

void generateObstacle() {
    if (obstacleCount < MAX_OBSTACLES) {
        obstacles[obstacleCount].x = SCREEN_WIDTH;
        obstacles[obstacleCount].y = 0; // Ground level
        obstacleCount++;
    }
}

void moveObstacles() {
    for (int i = 0; i < obstacleCount; i++) {
        obstacles[i].x -= 1; // Move left
    }
}

int checkCollision(int playerX, int playerY) {
    for (int i = 0; i < obstacleCount; i++) {
        if (obstacles[i].x < playerX + OBSTACLE_WIDTH && 
            obstacles[i].x + OBSTACLE_WIDTH > playerX && 
            obstacles[i].y == playerY) {
            return 1; // Collision detected
        }
    }
    return 0; // No collision
}

void clearObstacles() {
    for (int i = 0; i < obstacleCount; i++) {
        if (obstacles[i].x < 0) {
            obstacles[i] = obstacles[obstacleCount - 1];
            obstacleCount--;
            i--;
        }
    }
}

Obstacle* getObstacles() {
    return obstacles;
}

int getObstacleCount() {
    return obstacleCount;
}