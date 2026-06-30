#include "game.h"
#include <time.h>

int main() {
    srand(time(NULL));
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Conway's Game of Life");

    SetTargetFPS(10);

    GameBoard board;
    GameBoard_Init(&board, COLS, ROWS);

    while (!WindowShouldClose()) {
        GameBoard_Update(&board);

        BeginDrawing();
        ClearBackground(BLACK);
        GameBoard_Draw(&board);
        DrawFPS(10, 10);
        EndDrawing();
    }

    GameBoard_Free(&board);
    CloseWindow();
    return 0;
}