#include "Header.h"

int main()
{
	FieldRender Field;
	FieldManager Matrix;
	   	
	Matrix.FixField();

	//Music settings
	Music music;
	music.openFromFile("resourses/music/Minecraft.ogg");
	music.setVolume(10);
	music.setLoop(true);
	music.play();

	//Window settings
	RenderWindow window;
	window.create(VideoMode(1280, 768), "Gem...me my minecraft!");
	window.setFramerateLimit(FPS);

	while (window.isOpen())
	{
		//Main Menu
		MainMenu(&Matrix, &Field, &window);

		//main game
		GameProcess(&Matrix, &Field, &window);
		
		//End
		DeathScreen(&Matrix, &Field, &window);
	}
		
	return 0;

}