# Conway’s Game of Life

An implementation of **Conway’s Game of Life** written in **C** using **Raylib** for rendering the simulation.

<img width="400" height="325" alt="Screen Recording 2026-06-30 at 11 07 15 AM" src="https://github.com/user-attachments/assets/743f5a7e-38aa-4b9d-a6bd-6e67aee83121" />


---

## Description

This project simulates Conway’s Game of Life, a cellular automaton where a grid of cells evolves over time based on simple rules:

-   Any live cell with fewer than 2 neighbors dies (underpopulation)
-   Any live cell with 2 or 3 neighbors survives
-   Any live cell with more than 3 neighbors dies (overpopulation)
-   Any dead cell with exactly 3 neighbors becomes alive (reproduction)

The simulation runs on a 2D grid with wrap-around edges (toroidal world).

---

## Features

-   Real-time simulation using Raylib
-   Random initial grid generation
-   Toroidal (wrap-around) boundaries
-   Double-buffered grid update (no flickering)
-   FPS counter display

---

## Technologies Used

-   C (C99)
-   Raylib
-   Standard C library

---

## Build & Run

### Requirements

-   Raylib installed
-   CMake (>= 3.10)
-   GCC or Clang compiler

### Compile

```bash
mkdir build && cmake -S . -B build
cmake --build build
```
