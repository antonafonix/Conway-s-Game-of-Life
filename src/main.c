#include "game.h"

int main() {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Conway's Game of Life");

    SetTargetFPS(60);

    GameBoard board;
    GameBoard_Init(&board, COLS, ROWS);

    while (!WindowShouldClose()) {
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