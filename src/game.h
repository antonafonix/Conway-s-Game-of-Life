#ifndef GAME_H
#define GAME_H

#include <stdlib.h>

#include "raylib.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define CELLS_SIZE 20
#define ROWS (SCREEN_HEIGHT / CELLS_SIZE)
#define COLS (SCREEN_WIDTH / CELLS_SIZE)

typedef struct {
    int rows;
    int cols;
    int* current_grid;
    int* next_grid;
} GameBoard;

void GameBoard_Init(GameBoard* board, int rows, int cols);
void GameBoard_Draw(const GameBoard* board);
void GameBoard_Free(GameBoard* board);
int count_neighbors(GameBoard* board, int current_index);
void GameBoard_Update(GameBoard* board);

#endif