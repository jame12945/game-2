/*#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1200, 720), "REVERSE!");

	// Circle
	sf::CircleShape collision(100.f);
	collision.setPosition({ 200.f, 200.f });
	collision.setFillColor(sf::Color::Red);

	// Texture
	sf::Texture playerTexture;
	if (!playerTexture.loadFromFile("player2.png"))
	{
		std::cout << "Load failed" << std::endl;
	}

	// Sprite
	sf::Sprite shapeSprite;
	shapeSprite.setTexture(playerTexture);
	shapeSprite.setTextureRect(sf::IntRect(6, 1, 900, 675));
	shapeSprite.setPosition({ 0.f,0.f });
	shapeSprite.setScale(sf::Vector2f(1.0f, 1.0f));

	while (window.isOpen())
	{
		window.draw(shapeSprite);
		//window.draw(collision);
		window.display();
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) shapeSprite.move(1.f, 0.f);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) shapeSprite.move(-1.0f, 0.f);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) shapeSprite.move(0.f, -1.0f);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) shapeSprite.move(0.f, 1.0f);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window.close();
		window.clear();
	}
	return 0;
}*/