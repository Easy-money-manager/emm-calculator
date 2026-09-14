#include<cstdio>
#include<raylib.h>


int main()
{
    InitWindow(800, 500, "EMM Calculator");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);

        DrawText(
            "EMM Calculator",
            40,
            40,
            32,
            RAYWHITE
        );

        DrawText(
            "It lives.",
            40,
            100,
            20,
            GRAY
        );

        EndDrawing();
    }

    CloseWindow();
	printf("Ayo\n");
    return 0;
}
