/*#include "SFML\Graphics.hpp"
#include"SFML\System.hpp"
#include"SFML\Window.hpp"
#include"SFML\Audio.hpp"
#include"SFML\Network.hpp"

using namespace sf;
int main()
{
	RenderWindow window(VideoMode(640, 400), "Example 02", sf :: Style::Default);
	window.setFramerateLimit(60);
	CircleShape shape(50.f);
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		
			
		}
		//update
		shape.move(0.3f, 0.f);

		//draw

		window.clear(Color::Cyan);
		//draw everything
		window.draw(shape);

		window.display();
	}
	return 0;
}*/