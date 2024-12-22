# Dragon Runner Game

## Overview
Dragon Runner is a simple offline game where the player controls a dragon that must jump over obstacles to score points. The game is implemented in C and features basic terminal graphics.

## Project Structure
```
dragon-runner-game
├── src
│   ├── main.c          # Entry point of the game
│   ├── game.c          # Game loop and state management
│   ├── game.h          # Header for game functions and constants
│   ├── player.c        # Player input and mechanics
│   ├── player.h        # Header for player functions and variables
│   ├── obstacles.c      # Obstacle generation and collision detection
│   ├── obstacles.h      # Header for obstacle functions and constants
│   └── graphics.c      # Terminal graphics rendering
│       └── graphics.h  # Header for graphics functions
├── Makefile             # Build instructions
└── README.md            # Project documentation
```

## Building the Game
To build the game, navigate to the project directory and run the following command:

```
make
```

This will compile the source files and create an executable.

## Running the Game
After building, you can run the game with the following command:

```
./dragon-runner-game
```

## Controls
- Press the spacebar to make the dragon jump over obstacles.

## Scoring
The player scores points by successfully jumping over obstacles. The score is displayed on the screen during gameplay.

## Dependencies
This project is written in standard C and does not require any external libraries. It should compile on any system with a C compiler.

## Contributing
Feel free to fork the repository and submit pull requests for improvements or bug fixes.
