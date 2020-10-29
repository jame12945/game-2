/*#include <SFML/Graphics.hpp>
#include <iostream>
int x, y;
int c=0, v,b,n=0;
char keyx = '.';
int main()
{
	char revalue = '.';
	
	sf::RenderWindow window(sf::VideoMode(1080, 720), "Game from jamo!");

	////// Circle
	sf::CircleShape collision(60.f);
	collision.setPosition({ 800.f, 200.f });
	collision.setFillColor(sf::Color::Red);

	////// Texture player

	sf::Texture playerTexture;

	if (!playerTexture.loadFromFile("bomberman-sprite.png"))
	{
		std::cout << "Load failed" << std::endl;
	}
	////// Texture bomb
	sf::Texture bombTexture;
	if (!bombTexture.loadFromFile("bomb_anim.png"));


	//////bomb

	sf::Sprite shapeBomb;
	shapeBomb.setTexture(bombTexture);
	int bombSizeX = bombTexture.getSize().x / 2;
	int bombSizeY = bombTexture.getSize().y / 8;
	shapeBomb.setScale(sf::Vector2f(0.15f, 0.15f));
	shapeBomb.setTextureRect(sf::IntRect(0, 0, bombSizeX, bombSizeY));

	sf::Vector2f spawnPoint2 = { 0.f, 0.f };
	shapeBomb.setPosition(spawnPoint2);

	int animationFrame2 = 0;
	////// Sprite
	sf::Sprite shapeSprite;
	shapeSprite.setTexture(playerTexture);
	int spriteSizeX = playerTexture.getSize().x / 2;
	int spriteSizeY = playerTexture.getSize().y / 5;

	shapeSprite.setTextureRect(sf::IntRect(0, 0, spriteSizeX, spriteSizeY));

	sf::Vector2f spawnPoint = { 0.f, 0.f };
	shapeSprite.setPosition(spawnPoint);
	int animationFrame = 0;

	while (window.isOpen())
	{
		window.draw(shapeSprite);
		window.draw(shapeBomb);
		window.draw(collision);
		window.display();

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			
			shapeSprite.move(0.7f, 0.f);
			shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
			
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
			{
			
				if (c < 10) {
					
					spawnPoint2 = { 100.1f + b ,0.f };
					shapeBomb.setPosition(spawnPoint2);
					shapeBomb.setTextureRect(sf::IntRect(bombSizeX * animationFrame2, 0, bombSizeX, bombSizeY));
					b = 10.f;
					b = v;
					v = v + 10.f;
					c = c + 1;
				}
			
				shapeBomb.setTextureRect(sf::IntRect(bombSizeX * animationFrame2, 0, bombSizeX, bombSizeY));
				

				
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			shapeSprite.move(-0.7f, 0.f);
			shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
			{
				shapeBomb.setTextureRect(sf::IntRect(bombSizeX * animationFrame2, 0, bombSizeX, bombSizeY));
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			shapeSprite.move(0.f, -0.7f);
			shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
			{
				shapeBomb.setTextureRect(sf::IntRect(bombSizeX * animationFrame2, 0, bombSizeX, bombSizeY));
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			shapeSprite.move(0.f, 0.7f);
			shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, 60));
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
				if (n < 10) {

					spawnPoint2 = { 100.f ,100.f+b };
					shapeBomb.setPosition(spawnPoint2);
					shapeBomb.setTextureRect(sf::IntRect(bombSizeX * animationFrame2, 0, bombSizeX, bombSizeY));
					b = 10.f;
					b = v;
					v = v + 10.f;
					n = n + 1;
				}
			{
				shapeBomb.setTextureRect(sf::IntRect(bombSizeX * animationFrame2, 0, bombSizeX, bombSizeY));
			}
		}
		


		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}
		animationFrame++;
		animationFrame2++;

		if (animationFrame >= 2) {
			animationFrame = 0;
		}
		if (animationFrame2 >= 2) {
			animationFrame2 = 0;
		}
		if (collision.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
			shapeSprite.setPosition(spawnPoint);
		}
		window.clear();
	}
	return 0;
}*/