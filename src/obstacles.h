#ifndef OBSTACLES_H
#define OBSTACLES_H

#define MAX_OBSTACLES 10
#define OBSTACLE_WIDTH 3
#define OBSTACLE_HEIGHT 1

typedef struct {
    int x;
    int y;
    int width;
    int height;
} Obstacle;

void initializeObstacles(Obstacle obstacles[], int count);
void updateObstacles(Obstacle obstacles[], int count);
int checkCollision(int playerX, int playerY, Obstacle obstacle);
void renderObstacles(Obstacle obstacles[], int count);

#endif // OBSTACLES_H