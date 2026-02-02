#include <raylib.h>

int main() {
	InitWindow(800, 600, "Gaem");

	while (!WindowShouldOpen()) {
		BeginDrawing();

		DrawRectangle(0, 400, 800, 200, BROWN);
		EndDrawing();
	}
}
