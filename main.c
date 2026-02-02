#include <raylib.h>

int main() {
	InitWindow(800, 600, "Gaem");

	while (!WindowShouldOpen()) {
		BeginDrawing();
		EndDrawing();
	}
}
