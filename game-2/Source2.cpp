/*#include "SFML\Graphics.hpp"
#include"SFML\System.hpp"
#include"SFML\Window.hpp"
#include"SFML\Audio.hpp"
#include"SFML\Network.hpp"

using namespace sf;
int main()
{
	RenderWindow window(VideoMode(640, 400), "Example 02", sf::Style::Default);
	window.setFramerateLimit(60);

	CircleShape circle(50.f);
    circle.setPosition(Vector2f(0.f, 0.f));
	RectangleShape rect(Vector2f(50.f,100.f));
	rect.setPosition(Vector2f(400.f, 200.f));

	circle.setFillColor(Color(255, 100, 200, 200));
	rect.setFillColor(Color(255,255, 200, 100));

	
	
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();


		}
		//update
		circle.move(0.5f, 0.1f);// normal x,y
		circle.rotate(5.f);
		rect.move(-0.5, -0.1f);
		rect.rotate(2.f);
		//draw

		window.clear(Color::Black);
		//draw everything
		window.draw(circle);
		window.draw(rect);

		window.display();
	}
	return 0;
}*/