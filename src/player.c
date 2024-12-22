#include <stdio.h>
#include "player.h"

#define GRAVITY 1
#define JUMP_STRENGTH 5

typedef struct {
    int x;
    int y;
    int isJumping;
    int jumpVelocity;
} Player;

Player player;

void initPlayer() {
    player.x = 5; // Starting position
    player.y = 10; // Ground level
    player.isJumping = 0;
    player.jumpVelocity = 0;
}

void handleInput(char input) {
    if (input == ' ') { // Spacebar for jump
        if (!player.isJumping) {
            player.isJumping = 1;
            player.jumpVelocity = JUMP_STRENGTH;
        }
    }
}

void updatePlayer() {
    if (player.isJumping) {
        player.y -= player.jumpVelocity;
        player.jumpVelocity -= GRAVITY;

        if (player.y >= 10) { // Reset to ground level
            player.y = 10;
            player.isJumping = 0;
            player.jumpVelocity = 0;
        }
    }
}

int getPlayerX() {
    return player.x;
}

int getPlayerY() {
    return player.y;
}