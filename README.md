# Conway’s Game of Life

An implementation of **Conway’s Game of Life** written in **C** using **Raylib** for rendering the simulation.

![Demo](ttps://private-user-images.githubusercontent.com/225547815/615235299-5e8f8ed6-06fe-4b98-9c25-f7e164d804f8.mov?jwt=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3ODI4MzI0MjMsIm5iZiI6MTc4MjgzMjEyMywicGF0aCI6Ii8yMjU1NDc4MTUvNjE1MjM1Mjk5LTVlOGY4ZWQ2LTA2ZmUtNGI5OC05YzI1LWY3ZTE2NGQ4MDRmOC5tb3Y_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjYwNjMwJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI2MDYzMFQxNTA4NDNaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT0zNjU4NTE2YjYwNmU1NzkwMzc4OTdhOWY4ZDhmZGUwZjkzOGRmODQ4ZWRlNzg0NGViOGIxNDZhYzhjZDY1Y2Q5JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZyZXNwb25zZS1jb250ZW50LXR5cGU9dmlkZW8lMkZxdWlja3RpbWUifQ.7ozJlhIAyaztYkRJQFF_Gzo_GYKcv9uS636znFKKk78)

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
