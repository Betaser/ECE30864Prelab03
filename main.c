#include <raylib.h>

int main() {
	InitWindow(800, 600, "Gaem");

	int player_x, player_y;
	player_x = 200;
	player_y = 500;

	while (!WindowShouldOpen()) {
		BeginDrawing();

		// Ground
		DrawRectangle(0, 400, 800, 200, BROWN);

		// Player
		DrawRectangle(player_x, player_y, 100, 100, WHITE);
		EndDrawing();
	}
}
