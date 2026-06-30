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
            int index = r * board->cols + c;
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

int count_neighbors(GameBoard* board, int current_index) {
    int alive_neighbors = 0;

    int current_row = current_index / board->cols;
    int current_col = current_index % board->cols;

    for (int r_offset = -1; r_offset <= 1; r_offset++) {
        for (int c_offset = -1; c_offset <= 1; c_offset++) {
            if (r_offset == 0 && c_offset == 0) continue;

            int target_row = current_row + r_offset;
            int target_col = current_col + c_offset;

            if (target_row < 0) {
                target_row = board->rows - 1;
            }
            if (target_row >= board->rows) {
                target_row = 0;
            }
            if (target_col < 0) {
                target_col = board->cols - 1;
            }
            if (target_col >= board->cols) {
                target_col = 0;
            }

            int target_1d_index = (target_row * board->cols) + target_col;

            if (board->current_grid[target_1d_index] == 1) {
                alive_neighbors++;
            }
        }
    }

    return alive_neighbors;
}

void GameBoard_Update(GameBoard* board) {
    int total_cells = board->rows * board->cols;

    for (int current_index = 0; current_index < total_cells; current_index++) {
        int neighbors = count_neighbors(board, current_index);

        if (board->current_grid[current_index] == 1) {
            if (neighbors < 2 || neighbors > 3) {
                board->next_grid[current_index] = 0;
            } else {
                board->next_grid[current_index] = 1;
            }
        } else {
            if (neighbors == 3) {
                board->next_grid[current_index] = 1;
            } else {
                board->next_grid[current_index] = 0;
            }
        }
    }

    for (int i = 0; i < total_cells; i++) {
        board->current_grid[i] = board->next_grid[i];
    }
}