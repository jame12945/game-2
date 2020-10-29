#include "sprite.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
using namespace sf;


float x, y;
int c = 0, v, b, n = 0;
char keyx = '.';

/*int time10() {
	int i;
	for (i = 1; i <= 10; i++);
	return i;
}*/
int main()
{
	
	char revalue = '.';

	sf::RenderWindow window(sf::VideoMode(1080, 720), "Game from jamo!");

	////// Circle
	sf::CircleShape circle(20.f);
	circle.setPosition({ 900.f, 200.f });
	circle.setFillColor(sf::Color::Red);
	
	////// Rectangle1 (x1,y1)
	
	sf::RectangleShape rectangle(Vector2f(75.f, 52.f));
	rectangle.setPosition(Vector2f(187.f, 159.f));
	rectangle.setFillColor(Color::Black);
	
	////// Rectangle3(x1,y2)
	sf::RectangleShape rectangle3(Vector2f(75.f, 50.f));
	rectangle3.setPosition(Vector2f(187.f, 280.f));//285 283
	rectangle3.setFillColor(Color::Black);
	////// Rectangle3(x1,y3)
	sf::RectangleShape rectangle4(Vector2f(75.f, 50.f));
	rectangle4.setPosition(Vector2f(187.f, 400.f));//285 283
	rectangle4.setFillColor(Color::Black);
	////// Rectangle4(x1,y4)
	sf::RectangleShape rectangle5(Vector2f(75.f, 50.f));
	rectangle5.setPosition(Vector2f(187.f, 523.5f));//285 283
	rectangle5.setFillColor(Color::Black);
	////// Rectangle2(x2,y1)
	sf::RectangleShape rectangle2(Vector2f(75.f, 52.f));
	rectangle2.setPosition(Vector2f(345.f, 159.f));
	rectangle2.setFillColor(Color::Black);
	////// Rectangle2(x2,y2)
	sf::RectangleShape rectangle6(Vector2f(75.f, 52.f));
	rectangle6.setPosition(Vector2f(345.f, 280.f));
	rectangle6.setFillColor(Color::Black);
	////// Rectangle2(x2,y3)
	sf::RectangleShape rectangle7(Vector2f(75.f, 52.f));
	rectangle7.setPosition(Vector2f(345.f, 400.f));
	rectangle7.setFillColor(Color::Black);
	////// Rectangle2(x2,y4)
	sf::RectangleShape rectangle8(Vector2f(75.f, 52.f));
	rectangle8.setPosition(Vector2f(345.f, 525.f));
	rectangle8.setFillColor(Color::Black);
	////// Rectangle2(x3,y1)
	sf::RectangleShape rectangle9(Vector2f(75.f, 52.f));
	rectangle9.setPosition(Vector2f(500.f, 159.f));
	rectangle9.setFillColor(Color::Black);
	////// Rectangle2(x3,y2)
	sf::RectangleShape rectangle10(Vector2f(75.f, 52.f));
	rectangle10.setPosition(Vector2f(500.f,280.f));
	rectangle10.setFillColor(Color::Black);
	////// Rectangle2(x3,y3)
	sf::RectangleShape rectangle11(Vector2f(75.f, 52.f));
	rectangle11.setPosition(Vector2f(500.f, 400.f));
	rectangle11.setFillColor(Color::Black);
	////// Rectangle2(x3,y4)
	sf::RectangleShape rectangle12(Vector2f(75.f, 52.f));
	rectangle12.setPosition(Vector2f(500.f, 525.f));
	rectangle12.setFillColor(Color::Black);
	////// Rectangle2(x4,y1)
	sf::RectangleShape rectangle13(Vector2f(75.f, 52.f));
	rectangle13.setPosition(Vector2f(653.f, 159.f));
	rectangle13.setFillColor(Color::Black);
	////// Rectangle2(x4,y2)
	sf::RectangleShape rectangle14(Vector2f(75.f, 52.f));
	rectangle14.setPosition(Vector2f(653.f, 280.f));
	rectangle14.setFillColor(Color::Black);
	////// Rectangle2(x4,y3)
	sf::RectangleShape rectangle15(Vector2f(75.f, 52.f));
	rectangle15.setPosition(Vector2f(653.f, 400.f));
	rectangle15.setFillColor(Color::Black);
	////// Rectangle2(x4,y4)
	sf::RectangleShape rectangle16(Vector2f(75.f, 52.f));
	rectangle16.setPosition(Vector2f(653.f, 525.f));
	rectangle16.setFillColor(Color::Black);
	////// Rectangle2(x5,y1)
	sf::RectangleShape rectangle17(Vector2f(75.f, 52.f));
	rectangle17.setPosition(Vector2f(810.f, 159.f));
	rectangle17.setFillColor(Color::Black);
	////// Rectangle2(x5,y2)
	sf::RectangleShape rectangle18(Vector2f(75.f, 52.f));
	rectangle18.setPosition(Vector2f(810.f, 280.f));
	rectangle18.setFillColor(Color::Black);
	////// Rectangle2(x5,y3)
	sf::RectangleShape rectangle19(Vector2f(75.f, 52.f));
	rectangle19.setPosition(Vector2f(810.f, 400.f));
	rectangle19.setFillColor(Color::Black);
	////// Rectangle2(x5,y4)
	sf::RectangleShape rectangle20(Vector2f(75.f, 52.f));
	rectangle20.setPosition(Vector2f(810.f, 525.f));
	rectangle20.setFillColor(Color::Black);



	////// Texture player

	sf::Texture playerTexture;

	if (!playerTexture.loadFromFile("bomberman-sprite.png"))
	{
		std::cout << "Load failed" << std::endl;
	}
	////// Texture bomb
	sf::Texture bombTexture;
	if (!bombTexture.loadFromFile("bomb_anim.png"));
	////// Textur Map
	sf::Texture mapTexture;
	if (!mapTexture.loadFromFile("blocks_all.png"));
	//////Texture warp
	sf::Texture warpTexture;
	if (!warpTexture.loadFromFile("warp.png"));
	//////Texture explosion
	sf::Texture explosionTexture;
	if (!explosionTexture.loadFromFile("explosion.png"));
	//////Texture Wall
	sf::Texture wallTexture;
	if (!wallTexture.loadFromFile("wall-2.png"));
	//////Texture monster
	sf::Texture monsterTexture;
	if (!monsterTexture.loadFromFile("monster-1.png"));
	//////monster
	int monsterSizeX = monsterTexture.getSize().x/3;
	int monsterSizeY = monsterTexture.getSize().y/4;
	sf::Sprite shapemonster;
	sf::IntRect rectmonster(0, 0, monsterSizeX, monsterSizeY);
	shapemonster.setTextureRect(sf::IntRect(0, 0, monsterSizeX, monsterSizeY));
	shapemonster.setScale(sf::Vector2f(0.9f, 0.9f));
	shapemonster.setTexture(monsterTexture);
	sf::Vector2f spawnPoint100 = {270.f, 220.f };
	shapemonster.setPosition(spawnPoint100);
	//////Explosion
	sf::Sprite shapeExplosion;
	shapeExplosion.setTexture(explosionTexture);
	int explosionSizeX = explosionTexture.getSize().x;
	int explosionSizeY = explosionTexture.getSize().y;
	shapeExplosion.setScale(sf::Vector2f(0.185f, 0.185f));
	shapeExplosion.setTextureRect(sf::IntRect(0, 0, explosionSizeX, explosionSizeY));
	sf::Vector2f spawnPoint5 = { 10000.f, 0.f };
	shapeExplosion.setPosition(spawnPoint5);
	//////wall(1)
	sf::Sprite shapewall;
	shapewall.setTexture(wallTexture);
	int wall2SizeX = wallTexture.getSize().x;
	int wall2SizeY = wallTexture.getSize().y;
	shapewall.setScale(sf::Vector2f(0.044f, 0.0333f));
	shapewall.setTextureRect(sf::IntRect(0, 0, wall2SizeX, wall2SizeY));
	sf::Vector2f spawnPoint7 = { 110.f, 157.f };
	shapewall.setPosition(spawnPoint7);
	//////wall(2)
	sf::Sprite shapewall2;
	shapewall2.setTexture(wallTexture);
	int wallSizeX = wallTexture.getSize().x;
	int wallSizeY = wallTexture.getSize().y;
	shapewall2.setScale(sf::Vector2f(0.044f, 0.0333f));
	shapewall2.setTextureRect(sf::IntRect(0, 0, wallSizeX, wallSizeY));
	sf::Vector2f spawnPoint8 = { 110.f, 278.f };
	shapewall2.setPosition(spawnPoint8);
	//////wall(2.1)
	sf::Sprite shapewall5;
	shapewall5.setTexture(wallTexture);
	int wall5SizeX = wallTexture.getSize().x;
	int wall5SizeY = wallTexture.getSize().y;
	shapewall5.setScale(sf::Vector2f(0.044f, 0.0333f));
	shapewall5.setTextureRect(sf::IntRect(0, 0, wall5SizeX, wall5SizeY));
	sf::Vector2f spawnPoint11 = { 110.f, 400.f };
	shapewall5.setPosition(spawnPoint11);
	//////wall(2.2)
	sf::Sprite shapewall6;
	shapewall6.setTexture(wallTexture);
	int wall6SizeX = wallTexture.getSize().x;
	int wall6SizeY = wallTexture.getSize().y;
	shapewall6.setScale(sf::Vector2f(0.045f, 0.04f));
	shapewall6.setTextureRect(sf::IntRect(0, 0, wall6SizeX, wall6SizeY));
	sf::Vector2f spawnPoint12 = { 109.2f, 457.f };
	shapewall6.setPosition(spawnPoint12);
	//////wall(2.3)
	sf::Sprite shapewall7;
	shapewall7.setTexture(wallTexture);
	int wall7SizeX = wallTexture.getSize().x;
	int wall7SizeY = wallTexture.getSize().y;
	shapewall7.setScale(sf::Vector2f(0.044f, 0.0333f));
	shapewall7.setTextureRect(sf::IntRect(0, 0, wall7SizeX, wall7SizeY));
	sf::Vector2f spawnPoint13= { 110.f, 522.f };
	shapewall7.setPosition(spawnPoint13);
	//////wall(2.4)
	sf::Sprite shapewall8;
	shapewall8.setTexture(wallTexture);
	int wall8SizeX = wallTexture.getSize().x;
	int wall8SizeY = wallTexture.getSize().y;
	shapewall8.setScale(sf::Vector2f(0.0465f, 0.0375f));
	shapewall8.setTextureRect(sf::IntRect(0, 0, wall8SizeX, wall8SizeY));
	sf::Vector2f spawnPoint14 = { 107.f,580.f };
	shapewall8.setPosition(spawnPoint14);
	//////wall(3)
	sf::Sprite shapewall3;
	shapewall3.setTexture(wallTexture);
	int wall3SizeX = wallTexture.getSize().x;
	int wall3SizeY = wallTexture.getSize().y;
	shapewall3.setScale(sf::Vector2f(0.046f, 0.038f));
	shapewall3.setTextureRect(sf::IntRect(0, 0, wall3SizeX, wall3SizeY));
	sf::Vector2f spawnPoint9 = { 262.5f, 96.f };
	shapewall3.setPosition(spawnPoint9);
	//////wall(4)
	sf::Sprite shapewall4;
	shapewall4.setTexture(wallTexture);
	int wall4SizeX = wallTexture.getSize().x;
	int wall4SizeY = wallTexture.getSize().y;
	shapewall4.setScale(sf::Vector2f(0.046f, 0.033f));
	shapewall4.setTextureRect(sf::IntRect(0, 0, wall4SizeX, wall4SizeY));
	sf::Vector2f spawnPoint10 = { 262.5f, 160.f };
	shapewall4.setPosition(spawnPoint10);
	//////wall(5)
	sf::Sprite shapewall9;
	shapewall9.setTexture(wallTexture);
	int wall9SizeX = wallTexture.getSize().x;
	int wall9SizeY = wallTexture.getSize().y;
	shapewall9.setScale(sf::Vector2f(0.046f, 0.036f));
	shapewall9.setTextureRect(sf::IntRect(0, 0, wall9SizeX, wall9SizeY));
	sf::Vector2f spawnPoint15 = { 262.5f, 398.f };
	shapewall9.setPosition(spawnPoint15);
	//////wall(6)
	sf::Sprite shapewall10;
	shapewall10.setTexture(wallTexture);
	int wall10SizeX = wallTexture.getSize().x;
	int wall10SizeY = wallTexture.getSize().y;
	shapewall10.setScale(sf::Vector2f(0.046f, 0.033f));
	shapewall10.setTextureRect(sf::IntRect(0, 0, wall10SizeX, wall10SizeY));
	sf::Vector2f spawnPoint16 = { 262.5f, 522.f };
	shapewall10.setPosition(spawnPoint16);
	//////wall(7)
	sf::Sprite shapewall11;
	shapewall11.setTexture(wallTexture);
	int wall11SizeX = wallTexture.getSize().x;
	int wall11SizeY = wallTexture.getSize().y;
	shapewall11.setScale(sf::Vector2f(0.046f, 0.038f));
	shapewall11.setTextureRect(sf::IntRect(0, 0, wall11SizeX, wall11SizeY));
	sf::Vector2f spawnPoint17 = { 262.5f, 578.f };
	shapewall11.setPosition(spawnPoint17);
	//////wall(8)
	sf::Sprite shapewall12;
	shapewall12.setTexture(wallTexture);
	int wall12SizeX = wallTexture.getSize().x;
	int wall12SizeY = wallTexture.getSize().y;
	shapewall12.setScale(sf::Vector2f(0.043f, 0.038f));
	shapewall12.setTextureRect(sf::IntRect(0, 0, wall12SizeX, wall12SizeY));
	sf::Vector2f spawnPoint18 = { 188.5f, 579.f };
	shapewall12.setPosition(spawnPoint18);
	//////wall(9)
	sf::Sprite shapewall13;
	shapewall13.setTexture(wallTexture);
	int wall13SizeX = wallTexture.getSize().x;
	int wall13SizeY = wallTexture.getSize().y;
	shapewall13.setScale(sf::Vector2f(0.043f, 0.036f));
	shapewall13.setTextureRect(sf::IntRect(0, 0, wall13SizeX, wall13SizeY));
	sf::Vector2f spawnPoint19 = { 187.5f, 460.f };
	shapewall13.setPosition(spawnPoint19);
	//////wall(10)

	//////Map
	sf::Sprite shapeMap;
	shapeMap.setTexture(mapTexture);
	int mapSizeX = mapTexture.getSize().x;
	int mapSizeY = mapTexture.getSize().y ;
	shapeMap.setScale(sf::Vector2f(2.4f, 1.875f));//remember
	shapeMap.setTextureRect(sf::IntRect(0, 0, mapSizeX, mapSizeY));
	sf::Vector2f spawnPoint3= { 0.f, 0.f };
	shapeMap.setPosition(spawnPoint3);

	//////warp
	sf::Sprite shapewarp;
	shapewarp.setTexture(warpTexture);
	int warpSizeX = warpTexture.getSize().x;
	int warpSizeY = warpTexture.getSize().y;
	shapewarp.setScale(sf::Vector2f(0.4f, 0.4f));
	shapewarp.setTextureRect(sf::IntRect(0, 0, mapSizeX, mapSizeY));
	sf::Vector2f spawnPoint4={870.f, 175.f };
	shapewarp.setPosition(spawnPoint4);


	//////bomb

	sf::Sprite shapeBomb;
	shapeBomb.setTexture(bombTexture);
	int bombSizeX = bombTexture.getSize().x / 2;
	int bombSizeY = bombTexture.getSize().y / 8;
	shapeBomb.setScale(sf::Vector2f(0.15f, 0.15f));
	shapeBomb.setTextureRect(sf::IntRect(0, 0, bombSizeX, bombSizeY));

	sf::Vector2f spawnPoint2 = { 10000.f, 1024.4f };
	shapeBomb.setPosition(spawnPoint2);

	int animationFrame2 = 0;
	int animationFrame3 = 0;
	////// Sprite
	int spriteSizeX = playerTexture.getSize().x / 2;
	int spriteSizeY = playerTexture.getSize().y / 5;
	sf::IntRect rectPlayer(0, 0, spriteSizeX, spriteSizeY);
	sf::Sprite shapeSprite;
	shapeSprite.setTexture(playerTexture);
	
	shapeSprite.setScale(sf::Vector2f(0.8f, 0.8f));
	//delaybomb
	sf::Clock time;
	float bt,bt2,bt3,bt4,at,at2,at3,at4;
	shapeSprite.setTextureRect(sf::IntRect(0, 0, spriteSizeX, spriteSizeY));
	//time
	sf::Clock clock;
	sf::Clock playerClock;
	sf::Clock monsterClock;
	float time_interval=0;
	float time_interval2 = 0;

	//spawn point
	sf::Vector2f spawnPoint = { 120.f, 100.f };
	shapeSprite.setPosition(spawnPoint);
	int animationFrame = 0;
	
	sf::Sprite temp;
	sf::Sprite temp2;

	bool bomb=0;
	int explosion=0 ;
	bool bomberman=0;
	bool monster = 1;

	std::vector<sf::Sprite> bombPlace;
	std::vector<sf::Sprite> explosionPlace;
	std::vector<sf::Sprite> wallPlace;
	while (window.isOpen())
	{

		sf::Event event;
		bt = time.getElapsedTime().asMilliseconds();
		bt2 = time.getElapsedTime().asMilliseconds();
		bt3 = time.getElapsedTime().asMilliseconds();
		bt4 = time.getElapsedTime().asMilliseconds();
		at = time.getElapsedTime().asMilliseconds();
		at2 = time.getElapsedTime().asMilliseconds();
		at3 = time.getElapsedTime().asMilliseconds();
		at4 = time.getElapsedTime().asMilliseconds();
		//window.draw(rectangle);//dont forget na use
		window.draw(rectangle);
		window.draw(rectangle2);
		window.draw(rectangle3);
		window.draw(rectangle4);
		window.draw(rectangle5);
		window.draw(rectangle6);
		window.draw(rectangle7);
		window.draw(rectangle8);
		window.draw(rectangle9);
		window.draw(rectangle10);
		window.draw(rectangle11);
		window.draw(rectangle12);
		window.draw(rectangle9);
		window.draw(rectangle10);
		window.draw(rectangle11);
		window.draw(rectangle12);
		window.draw(rectangle13);
		window.draw(rectangle14);
		window.draw(rectangle15);
		window.draw(rectangle16);
		window.draw(rectangle17);
		window.draw(rectangle18);
		window.draw(rectangle19);
		window.draw(rectangle20);
		window.draw(shapeMap);
		window.draw(shapewall);
		window.draw(shapewall2);
		window.draw(shapewall3);
		window.draw(shapewall4);//monster
		window.draw(shapewall5);
		window.draw(shapewall6);
		window.draw(shapewall7);
		window.draw(shapewall8);
		window.draw(shapewall9); //monster
		window.draw(shapewall10);
		window.draw(shapewall11);
		window.draw(shapewall12);
		window.draw(shapewall13);
		window.draw(shapeSprite);
		window.draw(shapemonster);
		//sf::Vector2f P = shapeSprite.getPosition();
		//shapeBomb.setPosition(P);
		window.draw(shapeBomb);
		for (sf::Sprite sprites : bombPlace)

			window.draw(sprites);
		for (sf::Sprite bomb : explosionPlace)
			window.draw(bomb);
		
		window.draw(circle);

		window.draw(shapewarp);
		window.draw(shapeExplosion);
		window.display();
		if (shapemonster.getPosition().y >= 100 ) {

			if (monster == 1 || monster == 0) {
				rectmonster.top = monsterSizeY * 0;

				if (monster == 1) {
					shapemonster.move(0.f, 0.7f);

					if (shapewall9.getGlobalBounds().intersects(shapemonster.getGlobalBounds())|| shapemonster.getPosition().y >= 570 ) {
						monster = 0;
					}

					if (monsterClock.getElapsedTime().asSeconds() > 0.3f)
					{
						if (rectmonster.left == (monsterSizeX * 2))
						{
							rectmonster.left = 0;
						}
						else
						{
							rectmonster.left += monsterSizeX;
						}
						monsterClock.restart();
					}
					shapemonster.setTextureRect(sf::IntRect(rectmonster));
				}
				else if (monster == 0) {
					rectmonster.top = monsterSizeY * 3;
					shapemonster.move(0.f, -0.7f);
					if (shapewall4.getGlobalBounds().intersects(shapemonster.getGlobalBounds())|| shapemonster.getPosition().y <= 105) {
						monster = 1;
					}

					if (monsterClock.getElapsedTime().asSeconds() > 0.3f)
					{
						if (rectmonster.left == (monsterSizeX * 2))
						{
							rectmonster.left = 0;
						}
						else
						{
							rectmonster.left += monsterSizeX;
						}
						monsterClock.restart();
					}
					shapemonster.setTextureRect(sf::IntRect(rectmonster));
				}

				//shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, 60));

				sf::Vector2f monsterspawn1 = { x,y };
			}
		}
		/*else {
			if (monster == 1 || monster == 0) {
				rectmonster.top = monsterSizeY * 0;

				if (monster == 1) {
					shapemonster.move(0.f, -0.7f);

					if (shapewall9.getGlobalBounds().intersects(shapemonster.getGlobalBounds())) {
						monster = 0;
					}

					if (monsterClock.getElapsedTime().asSeconds() > 0.3f)
					{
						if (rectmonster.left == (monsterSizeX * 2))
						{
							rectmonster.left = 0;
						}
						else
						{
							rectmonster.left += monsterSizeX;
						}
						monsterClock.restart();
					}
					shapemonster.setTextureRect(sf::IntRect(rectmonster));
				}
			}

		}*/
		if (bomberman == 0) {
			rectPlayer.top = spriteSizeY * 2;
			
			if (playerClock.getElapsedTime().asSeconds() > 0.3f)
			{
				if (rectPlayer.left == (spriteSizeX * 1))
				{
					rectPlayer.left = 0;
				}
				else
				{
					rectPlayer.left += spriteSizeX;
				}
				playerClock.restart();
			}
			shapeSprite.setTextureRect(sf::IntRect(rectPlayer));
			//shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, 60));
			sf::Vector2f spritspawn1 = { x,y };
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && shapeSprite.getPosition().x < 1080 - spriteSizeX - 100)
		{
			rectPlayer.top = spriteSizeY;
			shapeSprite.move(0.7f, 0.f);
			if (playerClock.getElapsedTime().asSeconds() > 0.3f)
			{
				if (rectPlayer.left == (spriteSizeX*1 ))
				{
					rectPlayer.left = 0;
				}
				else
				{
					rectPlayer.left +=spriteSizeX;
				}
				playerClock.restart();
			}
			shapeSprite.setTextureRect(sf::IntRect(rectPlayer));
			//spriteSizeX* animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY)
			if (shapewall.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(-0.7f, 0.f);
			}
			if (shapewall2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(-0.7f, 0.f);
			}
			if (shapewall3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(-0.7f, 0.f);
			}
			if (shapewall4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(-0.7f, 0.f);
			}
			if (shapewall5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(-0.7f, 0.f);
			}
			if (shapewall6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(-0.7f, 0.f);
			}
			if (shapewall7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(-0.7f, 0.f);
			}
			if (shapewall8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(-0.7f, 0.f);
			}
			if (shapewall9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(-0.7f, 0.f);
			}
			if (shapewall10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(-0.7f, 0.f);
			}
			if (shapewall11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(-0.7f, 0.f);
			}
			sf::Vector2f spritspawn1 = { x,y };
			if (rectangle.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle12.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle13.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle14.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle15.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle16.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle17.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle18.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle19.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle20.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(-0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && shapeSprite.getPosition().x >= 100)
		{
			rectPlayer.top = spriteSizeY*0;
			shapeSprite.move(-0.7f, 0.f);
			if (playerClock.getElapsedTime().asSeconds() > 0.3f)
			{
				if (rectPlayer.left == (spriteSizeX * 1))
				{
					rectPlayer.left = 0;
				}
				else
				{
					rectPlayer.left += spriteSizeX;
				}
				playerClock.restart();
			}
			shapeSprite.setTextureRect(sf::IntRect(rectPlayer));
			//shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
			if (shapewall.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(0.7f, 0.f);
			}
			if (shapewall2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(0.7f, 0.f);
			}
			if (shapewall3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(0.7f, 0.f);
			}
			if (shapewall4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(0.7f, 0.f);
			}
			if (shapewall5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(0.7f, 0.f);
			}
			if (shapewall6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(0.7f, 0.f);
			}
			if (shapewall7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(0.7f, 0.f);
			}
			if (shapewall8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(0.7f, 0.f);
			}
			if (shapewall9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(0.7f, 0.f);
			}
			if (shapewall10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(0.7f, 0.f);
			}
			if (shapewall11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.move(0.7f, 0.f);
			}
			if (rectangle.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle12.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle13.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle14.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle15.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle16.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle17.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle18.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle19.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle20.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.7f, 0.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}

		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && shapeSprite.getPosition().y >= 100)
		{
			rectPlayer.top = spriteSizeY * 3.05;
			shapeSprite.move(0.f,-0.7f);
			if (playerClock.getElapsedTime().asSeconds() > 0.3f)
			{
				if (rectPlayer.left == (spriteSizeX * 1))
				{
					rectPlayer.left = 0;
				}
				else
				{
					rectPlayer.left += spriteSizeX;
				}
				playerClock.restart();
			}
			shapeSprite.setTextureRect(sf::IntRect(rectPlayer));
			//shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
			if (shapewall.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()) || shapewall2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y );
				shapeSprite.move(0.f, 0.7f);
			}
			if (shapewall3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()))  {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
				shapeSprite.move(0.f, 0.7f);
			}
			if (shapewall4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
				shapeSprite.move(0.f, 0.7f);
			}
			if (shapewall5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
				shapeSprite.move(0.f, 0.7f);
			}
			if (shapewall6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
				shapeSprite.move(0.f, 0.7f);
			}
			if (shapewall7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
				shapeSprite.move(0.f, 0.7f);
			}
			if (shapewall8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
				shapeSprite.move(0.f, 0.7f);
			}
			if (shapewall9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
				shapeSprite.move(0.f, 0.7f);
			}
			if (shapewall10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
				shapeSprite.move(0.f, 0.7f);
			}
			if (shapewall11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
				shapeSprite.move(0.f, 0.7f);
			}
			if (rectangle.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };

			}
			if (rectangle11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle12.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle13.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle14.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };

			}
			if (rectangle15.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle16.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle17.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle18.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };

			}
			if (rectangle19.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle20.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, 0.7f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && shapeSprite.getPosition().y < 720 - spriteSizeY - 65 )
		{
			rectPlayer.top = spriteSizeY * 2;
			shapeSprite.move(0.f, 0.7f);
			if (playerClock.getElapsedTime().asSeconds() > 0.3f)
			{
				if (rectPlayer.left == (spriteSizeX * 1))
				{
					rectPlayer.left = 0;
				}
				else
				{
					rectPlayer.left += spriteSizeX;
				}
				playerClock.restart();
			}
			shapeSprite.setTextureRect(sf::IntRect(rectPlayer));
			//shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, 60));
			if (shapewall.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())|| shapewall2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
				shapeSprite.move(0.f, -0.7f);
			}
			if (shapewall3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()) ) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
				shapeSprite.move(0.f, -0.7f);
			}
			if (shapewall4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
				shapeSprite.move(0.f, -0.7f);
			}
			if (shapewall5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
				shapeSprite.move(0.f, -0.7f);
			}
			if (shapewall6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
				shapeSprite.move(0.f, -0.7f);
			}
			if (shapewall7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
				shapeSprite.move(0.f, -0.7f);
			}
			if (shapewall8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
				shapeSprite.move(0.f, -0.7f);
			}
			if (shapewall9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
				shapeSprite.move(0.f, -0.7f);
			}
			if (shapewall10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
				shapeSprite.move(0.f, -0.7f);
			}
			if (shapewall11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
				shapeSprite.move(0.f, -0.7f);
			}



			if (rectangle.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle12.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle13.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle14.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle15.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle16.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle17.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle18.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle19.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}
			if (rectangle20.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

				shapeSprite.move(0.f, -0.7f);
				shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f);
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
				sf::Vector2f spritspawn1 = { x,y };
			}

		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && bomb == 0)//change clock
		{
			//int a;
			//a = time10();

			temp.setTexture(bombTexture);
			temp.setTextureRect(sf::IntRect(bombSizeX * animationFrame2, 0, bombSizeX, bombSizeY));
			temp.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);

			temp.setScale(sf::Vector2f(0.15f, 0.15f));
			temp.setTextureRect(sf::IntRect(bombSizeX * animationFrame2, 0, bombSizeX, bombSizeY));
			time.restart();

			bombPlace.push_back(temp);//delete bomb

			bomb = 1;
		}
		time_interval = time.getElapsedTime().asSeconds();
		if (time_interval > 2 && bomb == 1) {


			temp.setTexture(explosionTexture);
			temp.setTextureRect(sf::IntRect(explosionSizeX * animationFrame3, 0, explosionSizeX, explosionSizeY));
			temp.setPosition(temp.getPosition().x - 80.f, temp.getPosition().y - 50.f);

			temp.setScale(sf::Vector2f(0.3f,0.3f));

			explosionPlace.push_back(temp);
			bomb = 0;
			explosion  ++;
			//std::cout << 'a';
			system("cls");
		}
		if (time_interval >2.5 &&explosion>0) {
			explosionPlace[explosion-1].setPosition(NULL - 1000, NULL - 1000);
			bombPlace[explosion - 1].setPosition(NULL - 1000, NULL - 1000);
		clock.restart();
		time_interval = 0;
		bomb = 0;

	}
		std::cout << time_interval << '\n'; // printing time
		

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
		for (int i = 0; i <= explosion - 1; i++) {
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall.getGlobalBounds())) {
				shapewall.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall2.getGlobalBounds())) {
				shapewall2.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall3.getGlobalBounds())) {
				shapewall3.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall4.getGlobalBounds())) {
				shapewall4.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall5.getGlobalBounds())) {
				shapewall5.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall6.getGlobalBounds())) {
				shapewall6.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall7.getGlobalBounds())) {
				shapewall7.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall8.getGlobalBounds())) {
				shapewall8.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall9.getGlobalBounds())) {
				shapewall9.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall10.getGlobalBounds())) {
				shapewall10.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall11.getGlobalBounds())) {
				shapewall11.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall12.getGlobalBounds())) {
				shapewall12.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall13.getGlobalBounds())) {
				shapewall13.setPosition(10000.f, 10000.f);
			}
		}
		if (circle.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
			shapeSprite.setPosition(spawnPoint);
		}
		window.clear();
	}
	return 0;
}
