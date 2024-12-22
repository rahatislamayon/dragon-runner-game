#ifndef GAME_H
#define GAME_H

// Game state constants
#define GAME_RUNNING 1
#define GAME_OVER 0

// Function declarations
void initialize_game();
void game_loop();
void update_game_state();
void render_graphics();
void handle_collisions();
void cleanup_game();

#endif // GAME_H