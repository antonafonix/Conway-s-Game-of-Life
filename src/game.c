#include "game.h"

void GameBoard_Init(GameBoard* board, int rows, int cols) {
    board->rows = rows;
    board->cols = cols;
    int total_cells = rows * cols;

    board->current_grid = malloc(total_cells * sizeof(int));
    board->next_grid = malloc(total_cells * sizeof(int));

    for (int i = 0; i < total_cells; i++) {
        board->current_grid[i] = rand() % 5 == 0 ? 1 : 0;
    }
}

void GameBoard_Draw(const GameBoard* board) {
    for (int r = 0; r < board->rows; r++) {
        for (int c = 0; c < board->cols; c++) {
            int index = r * board->cols * c;
            if (board->current_grid[index] == 1) {
                DrawRectangle(c * CELLS_SIZE, r * CELLS_SIZE, CELLS_SIZE - 1,
                              CELLS_SIZE - 1, LIME);
            }
        }
    }
}

void GameBoard_Free(GameBoard* board) {
    free(board->current_grid);
    free(board->next_grid);
}