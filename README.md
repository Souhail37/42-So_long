# 42-So_long
42-Cursus : So_long
# So Long - 2D Game

## Description
**So Long** is a basic 2D game where the player's goal is to collect every collectible on the map and then escape using the shortest possible route.
## Table of Contents
- [Mandatory Part](#mandatory-part)
- [Bonus Part](#bonus-part)

**Game Rules**:
- The player's character is moved using the W, A, S, and D keys.
- The player can move in four directions: up, down, left, and right.
- The player cannot move through walls.
- The current number of movements must be displayed in the shell after each move.
- The game uses a 2D view (top-down or profile).
- The game does not have to be real-time.

### Graphic Management
- The game displays the image in a window.
- Window management is smooth, including switching to another window and minimizing.
- Pressing ESC closes the window and quits the program.
- Clicking on the window's cross button also closes the window and quits the program.

### Map
- The map is constructed with three components: walls, collectibles, and free space.
- The map uses the following characters:
  - `0` for an empty space.
  - `1` for a wall.
  - `C` for a collectible.
  - `E` for the map exit.
  - `P` for the player's starting position.
- The map must contain 1 exit, at least 1 collectible, and 1 starting position to be valid. Duplicates are not allowed.
- The map must be rectangular and closed/surrounded by walls.
- Valid path checking is required.

### Bonus Part
- Making the player lose when they touch an enemy patrol.
- Adding sprite animations.
- Displaying the movement count directly on the screen instead of writing it in the shell.
