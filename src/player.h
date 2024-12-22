#ifndef PLAYER_H
#define PLAYER_H

typedef struct {
    int x;          // Player's horizontal position
    int y;          // Player's vertical position
    int isJumping;  // Flag to indicate if the player is jumping
    int jumpHeight; // Height of the jump
} Player;

// Function to initialize the player
void initPlayer(Player* player, int startX, int startY);

// Function to handle player input
void handleInput(Player* player);

// Function to update the player's position
void updatePlayer(Player* player);

// Function to render the player
void renderPlayer(const Player* player);

#endif // PLAYER_H