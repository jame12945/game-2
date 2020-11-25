#include "sprite.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
using namespace sf;
int p = 0;
int jk = 0;
float x, y;
int c = 0, v, b, n = 0;
char keyx = '.';
int health = 3;
int banana = 0;
int apple = 0;
int grape = 0;
int k = 0;
float invincible = 0;
float invinciblemon = 0;
float invinciblemon2 = 0;
float invinciblemon3 = 0;
float time2 = 0;
int specialbomb = 0;
bool bomb10 = 0;
int fire = 0;
bool fire2 = 0;
int exploding = 0;
int mv = 0;
int monsterheart = 3;
int monsterheart2 = 3;
int monsterheart3= 3;
int j, j2, j3;
bool monsterheartbool = 0;
int fireuse = 2;
int bombmove = 0;
int bombloop=1;
int highscore;
int victoryy = 0;
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
	rectangle10.setPosition(Vector2f(500.f, 280.f));
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
	if (!explosionTexture.loadFromFile("splash2.png"));
	//////Texture Wall
	sf::Texture wallTexture;
	if (!wallTexture.loadFromFile("wall-2.png"));
	//////Texture monster
	sf::Texture monsterTexture;
	if (!monsterTexture.loadFromFile("monster-1.png"));
	//////Texture heart
	sf::Texture heartTexture;
	if (!heartTexture.loadFromFile("heart3.png"));
	//////Texture blueblock
	sf::Texture blueblockTexture;
	if (!blueblockTexture.loadFromFile("blue_block.png"));
	//////Texture banana
	sf::Texture bananaTexture;
	if (!bananaTexture.loadFromFile("banana-2.png"));
	//////Texture apple
	sf::Texture appleTexture;
	if (!appleTexture.loadFromFile("apple.png"));
	//////Texture grape
	sf::Texture grapeTexture;
	if (!grapeTexture.loadFromFile("grape.png"));
	//////Texture victory
	sf::Texture victoryTexture;
	if (!victoryTexture.loadFromFile("9gag.jpg"));
	//////Texture lose
	sf::Texture loseTexture;
	if (!loseTexture.loadFromFile("lose.png"));
	//////Texture angry bomb
	sf::Texture specialbombTexture;
	if (!specialbombTexture.loadFromFile("angry.png"));
	//////Texture fire
	sf::Texture fireTexture;
	if (!fireTexture.loadFromFile("firesheild.png"));
	//////Texture fireeffect
	sf::Texture fireeffectTexture;
	if (!fireeffectTexture.loadFromFile("fire2.1111.png"));
	//////Texture lose
	sf::Texture timerTexture;
	if (!timerTexture.loadFromFile("timer.png"));
	//////Texture explosion2
	sf::Texture explosion2Texture;
	if (!explosion2Texture.loadFromFile("boom.png"));
	//////Texture enermyheart
	sf::Texture enermyheartTexture;
	if (!enermyheartTexture.loadFromFile("heart4.png"));
	sf::Texture remoteTexture;
	if (!remoteTexture.loadFromFile("remote4.png"));
	//////Font
	sf::Font font;
	if (!font.loadFromFile("The Bugatten.ttf"));

	///////font
	sf::Text word;
	word.setCharacterSize(70.f);
	word.setFont(font);
	word.setPosition(250.f, -40.f);
	word.setFillColor(sf::Color::Black);
	///////font2
	sf::Text word2;
	word2.setCharacterSize(70.f);
	word2.setFont(font);
	word2.setPosition(375.f, -40.f);
	word2.setFillColor(sf::Color::Black);
	///////font3
	sf::Text word3;
	word3.setCharacterSize(70.f);
	word3.setFont(font);
	word3.setPosition(495.f, -40.f);
	word3.setFillColor(sf::Color::Black);
	///////font4
	sf::Text word4;
	word4.setCharacterSize(70.f);
	word4.setFont(font);
	word4.setPosition(625.f, -40.f);
	word4.setFillColor(sf::Color::Black);
	///////font5
	sf::Text word5;
	word5.setCharacterSize(70.f);
	word5.setFont(font);
	word5.setPosition(825.f, -40.f);
	word5.setFillColor(sf::Color::Black);
	word5.setString("Jamo");
	///////font6
	sf::Text word6;
	word6.setCharacterSize(100.f);
	word6.setFont(font);
	word6.setPosition(525.f, 260.f);
	word6.setFillColor(sf::Color::Black);
	///////font7
	sf::Text word7;
	word7.setCharacterSize(110.f);
	word7.setFont(font);
	word7.setPosition(150.f, 250.f);
	word7.setFillColor(sf::Color::Black);
	word7.setString("Your Highscore:");
	///////enermyheart
	int enermyheartSizeX = enermyheartTexture.getSize().x;
	int enermyheartSizeY = enermyheartTexture.getSize().y;
	sf::Sprite shapeenermyheart(enermyheartTexture);
	shapeenermyheart.setScale(0.08f, 0.08f);
	//sf::Vector2f spawnPoint227 = { 290.f,400.f };//290,100
	//shapeenermyheart.setPosition(spawnPoint227);
	///////victory
	sf::Sprite shapevictory;
	shapevictory.setTexture(victoryTexture);
	int victorySizeX = victoryTexture.getSize().x;
	int victorySizeY = victoryTexture.getSize().y;
	shapevictory.setScale(sf::Vector2f(2.38f, 2.16f));
	shapevictory.setTextureRect(sf::IntRect(0, 0, victorySizeX, victorySizeY));
	sf::Vector2f spawnPoint216 = { 2500.f,7000.f };//140
	shapevictory.setPosition(spawnPoint216);
	///////remote jamao
	sf::Sprite shaperemote;
	shaperemote.setTexture(remoteTexture);
	int remoteSizeX = remoteTexture.getSize().x;
	int remoteSizeY = remoteTexture.getSize().y;
	shaperemote.setScale(sf::Vector2f(0.1f, 0.1f));
	shaperemote.setTextureRect(sf::IntRect(0, 0, remoteSizeX,remoteSizeY));
	sf::Vector2f spawnPoint233 = { 250.f,200.f };//140
	shaperemote.setPosition(spawnPoint233);
	///////lose
	sf::Sprite shapelose;
	shapelose.setTexture(loseTexture);
	int loseSizeX = loseTexture.getSize().x;
	int loseSizeY = loseTexture.getSize().y;
	shapelose.setScale(sf::Vector2f(1.0f, 1.0f));
	shapelose.setTextureRect(sf::IntRect(0, 0, loseSizeX, loseSizeY));
	sf::Vector2f spawnPoint217 = { 2900.f,10000.f };//290,100
	shapelose.setPosition(spawnPoint217);
	///////grape
	sf::Sprite shapegrape;
	shapegrape.setTexture(grapeTexture);
	int grapeSizeX = grapeTexture.getSize().x;
	int grapeSizeY = grapeTexture.getSize().y;
	shapegrape.setScale(sf::Vector2f(0.06f, 0.06f));
	shapegrape.setTextureRect(sf::IntRect(0, 0, grapeSizeX, grapeSizeY));
	sf::Vector2f spawnPoint300 = { 430.f, 0.f };//140
	shapegrape.setPosition(spawnPoint300);
	///////explosion2

	int explosion2SizeX = explosion2Texture.getSize().x / 3;
	int explosion2SizeY = explosion2Texture.getSize().y / 2;
	sf::Sprite shapeexplosion2;
	sf::IntRect rectex(explosion2SizeX, 0, explosion2SizeX, explosion2SizeY);
	shapeexplosion2.setTexture(explosion2Texture);
	shapeexplosion2.setScale(sf::Vector2f(3.6f, 3.6f));
	//shapeexplosion2.setTextureRect(sf::IntRect(0, 0, explosion2SizeX,explosion2SizeY));
	sf::Vector2f spawnPoint340 = { 5300.f, 3000.f };//140
	shapeexplosion2.setPosition(spawnPoint340);
	///////timer
	sf::Sprite shapetimer;
	shapetimer.setTexture(timerTexture);
	int timerSizeX = timerTexture.getSize().x;
	int timerSizeY = timerTexture.getSize().y;
	shapetimer.setScale(sf::Vector2f(0.09f, 0.09f));
	shapetimer.setTextureRect(sf::IntRect(0, 0, timerSizeX, timerSizeY));
	sf::Vector2f spawnPoint320 = { 560.f, 0.f };//140
	shapetimer.setPosition(spawnPoint320);
	///////angrybomb
	sf::Sprite shapespecialbomb;
	shapespecialbomb.setTexture(specialbombTexture);
	int bomb2SizeX = specialbombTexture.getSize().x;
	int bomb2SizeY = specialbombTexture.getSize().y;
	shapespecialbomb.setScale(sf::Vector2f(0.07f, 0.07f));
	shapespecialbomb.setTextureRect(sf::IntRect(0, 0, bomb2SizeX, bomb2SizeY));
	time_t t5;
	
	srand((unsigned)time(&t5));
	sf::Vector2f spawnPoint321 = { 100 + float(rand() % 821),100 + float(rand() % 492) };
	shapespecialbomb.setPosition(spawnPoint321);
	//sf::Vector2f spawnPoint321 = { 150.f, 340.f };//140
	//shapespecialbomb.setPosition(spawnPoint321);
	///////grape2
	sf::Sprite shapegrape2;
	shapegrape2.setTexture(grapeTexture);
	int grape2SizeX = grapeTexture.getSize().x;
	int grape2SizeY = grapeTexture.getSize().y;
	shapegrape2.setScale(sf::Vector2f(0.07f, 0.07f));
	shapegrape2.setTextureRect(sf::IntRect(0, 0, grape2SizeX, grape2SizeY));
	sf::Vector2f spawnPoint301 = { 830.f, 470.f };//140
	shapegrape2.setPosition(spawnPoint301);
	///////grape3
	sf::Sprite shapegrape3;
	shapegrape3.setTexture(grapeTexture);
	int grape3SizeX = grapeTexture.getSize().x;
	int grape3SizeY = grapeTexture.getSize().y;
	shapegrape3.setScale(sf::Vector2f(0.07f, 0.07f));
	shapegrape3.setTextureRect(sf::IntRect(0, 0, grape3SizeX, grape3SizeY));
	sf::Vector2f spawnPoint302 = { 670.f, 110.f };//140
	shapegrape3.setPosition(spawnPoint302);
	///////apple
	sf::Sprite shapeapple3;
	shapeapple3.setTexture(appleTexture);
	int apple3SizeX = appleTexture.getSize().x;
	int apple3SizeY = appleTexture.getSize().y;
	shapeapple3.setScale(sf::Vector2f(0.05f, 0.05f));
	shapeapple3.setTextureRect(sf::IntRect(0, 0, apple3SizeX, apple3SizeY));
	sf::Vector2f spawnPoint208 = { 300.f, 0.f };//140
	shapeapple3.setPosition(spawnPoint208);
	///////apple2
	sf::Sprite shapeapple2;
	shapeapple2.setTexture(appleTexture);
	int apple2SizeX = appleTexture.getSize().x;
	int apple2SizeY = appleTexture.getSize().y;
	shapeapple2.setScale(sf::Vector2f(0.06f, 0.06f));
	shapeapple2.setTextureRect(sf::IntRect(0, 0, apple2SizeX, apple2SizeY));
	sf::Vector2f spawnPoint207 = { 430.f, 250.f };//140
	shapeapple2.setPosition(spawnPoint207);
	///////apple3
	sf::Sprite shapeapple4;
	shapeapple4.setTexture(appleTexture);
	int apple4SizeX = appleTexture.getSize().x;
	int apple4SizeY = appleTexture.getSize().y;
	shapeapple4.setScale(sf::Vector2f(0.06f, 0.06f));
	shapeapple4.setTextureRect(sf::IntRect(0, 0, apple4SizeX, apple4SizeY));
	sf::Vector2f spawnPoint209 = { 600.f, 465.f };//140
	shapeapple4.setPosition(spawnPoint209);
	///////apple4
	sf::Sprite shapeapple5;
	shapeapple5.setTexture(appleTexture);
	int apple5SizeX = appleTexture.getSize().x;
	int apple5SizeY = appleTexture.getSize().y;
	shapeapple5.setScale(sf::Vector2f(0.06f, 0.06f));
	shapeapple5.setTextureRect(sf::IntRect(0, 0, apple5SizeX, apple5SizeY));
	sf::Vector2f spawnPoint210 = { 200.f, 465.f };//140
	shapeapple5.setPosition(spawnPoint210);

	///////banana
	sf::Sprite shapebanana;
	shapebanana.setTexture(bananaTexture);
	int bananaSizeX = bananaTexture.getSize().x;
	int bananaSizeY = bananaTexture.getSize().y;
	shapebanana.setScale(sf::Vector2f(0.1f, 0.1f));
	shapebanana.setTextureRect(sf::IntRect(0, 0, bananaSizeX, bananaSizeY));
	int bananax = 1, bananay = 1;
	time_t t;


	srand((unsigned)time(&t));


	//y=492
	//x=821
	sf::Vector2f spawnPoint200 = { 100 + float(rand() % 821),100 + float(rand() % 492) };//140
	shapebanana.setPosition(spawnPoint200);
	///////banana2
	sf::Sprite shapebanana2;
	shapebanana2.setTexture(bananaTexture);
	int banana2SizeX = bananaTexture.getSize().x;
	int banana2SizeY = bananaTexture.getSize().y;
	shapebanana2.setScale(sf::Vector2f(0.1f, 0.1f));
	shapebanana2.setTextureRect(sf::IntRect(0, 0, banana2SizeX, banana2SizeY));
	sf::Vector2f spawnPoint201 = { 260.f, 398.f };//140
	shapebanana2.setPosition(spawnPoint201);
	///////banana3
	sf::Sprite shapebanana3;
	shapebanana3.setTexture(bananaTexture);
	int banana3SizeX = bananaTexture.getSize().x;
	int banana3SizeY = bananaTexture.getSize().y;
	shapebanana3.setScale(sf::Vector2f(0.1f, 0.1f));
	shapebanana3.setTextureRect(sf::IntRect(0, 0, banana3SizeX, banana3SizeY));
	sf::Vector2f spawnPoint202 = { 576.f,338.f };//140
	shapebanana3.setPosition(spawnPoint202);
	///////banana4
	sf::Sprite shapebanana4;
	shapebanana4.setTexture(bananaTexture);
	int banana4SizeX = bananaTexture.getSize().x;
	int banana4SizeY = bananaTexture.getSize().y;
	shapebanana4.setScale(sf::Vector2f(0.1f, 0.1f));
	shapebanana4.setTextureRect(sf::IntRect(0, 0, banana4SizeX, banana4SizeY));
	sf::Vector2f spawnPoint203 = { 730.f,214.5f };//140
	shapebanana4.setPosition(spawnPoint203);
	///////banana5
	sf::Sprite shapebanana5;
	shapebanana5.setTexture(bananaTexture);
	int banana5SizeX = bananaTexture.getSize().x;
	int banana5SizeY = bananaTexture.getSize().y;
	shapebanana5.setScale(sf::Vector2f(0.1f, 0.1f));
	shapebanana5.setTextureRect(sf::IntRect(0, 0, banana5SizeX, banana5SizeY));
	sf::Vector2f spawnPoint204 = { 330.f, 579.f };//140
	shapebanana5.setPosition(spawnPoint204);
	///////banana6
	sf::Sprite shapebanana6;
	shapebanana6.setTexture(bananaTexture);
	int banana6SizeX = bananaTexture.getSize().x;
	int banana6SizeY = bananaTexture.getSize().y;
	shapebanana6.setScale(sf::Vector2f(0.075f, 0.075f));
	shapebanana6.setTextureRect(sf::IntRect(0, 0, banana6SizeX, banana6SizeY));
	sf::Vector2f spawnPoint205 = { 180.f, 0.f };//140
	shapebanana6.setPosition(spawnPoint205);
	//////blue block
	sf::Sprite shapeblueblock;
	shapeblueblock.setTexture(blueblockTexture);
	int blueblockSizeX = blueblockTexture.getSize().x;
	int blueblockSizeY = blueblockTexture.getSize().y;
	shapeblueblock.setScale(sf::Vector2f(2.5f, 2.6f));
	shapeblueblock.setTextureRect(sf::IntRect(0, 0, blueblockSizeX, blueblockSizeY));
	sf::Vector2f spawnPoint104 = { 170.f, 0.f };//140
	shapeblueblock.setPosition(spawnPoint104);
	//////blue block2
	sf::Sprite shapeblueblock2;
	shapeblueblock2.setTexture(blueblockTexture);
	int blueblock2SizeX = blueblockTexture.getSize().x;
	int blueblock2SizeY = blueblockTexture.getSize().y;
	shapeblueblock2.setScale(sf::Vector2f(2.5f, 2.6f));
	shapeblueblock2.setTextureRect(sf::IntRect(0, 0, blueblock2SizeX, blueblock2SizeY));
	sf::Vector2f spawnPoint105 = { 180.f, 0.f };//100
	shapeblueblock2.setPosition(spawnPoint105);
	//////blue block3
	sf::Sprite shapeblueblock3;
	shapeblueblock3.setTexture(blueblockTexture);
	int blueblock3SizeX = blueblockTexture.getSize().x;
	int blueblock3SizeY = blueblockTexture.getSize().y;
	shapeblueblock3.setScale(sf::Vector2f(2.5f, 2.6f));
	shapeblueblock3.setTextureRect(sf::IntRect(0, 0, blueblock3SizeX, blueblock3SizeY));
	sf::Vector2f spawnPoint106 = { 190.f, 0.f };//100
	shapeblueblock3.setPosition(spawnPoint106);

	//////heart
	sf::Sprite shapeheart;
	shapeheart.setTexture(heartTexture);
	int heartSizeX = heartTexture.getSize().x;
	int heartSizeY = heartTexture.getSize().y;
	shapeheart.setScale(sf::Vector2f(0.3f, 0.3f));
	shapeheart.setTextureRect(sf::IntRect(0, 0, heartSizeX, heartSizeY));
	sf::Vector2f spawnPoint103 = { 30.f, 0.f };
	shapeheart.setPosition(spawnPoint103);

	//////monster
	int monsterSizeX = monsterTexture.getSize().x / 3;
	int monsterSizeY = monsterTexture.getSize().y / 4;
	sf::Sprite shapemonster;
	sf::IntRect rectmonster(0, 0, monsterSizeX, monsterSizeY);
	shapemonster.setTextureRect(sf::IntRect(0, 0, monsterSizeX, monsterSizeY));
	shapemonster.setScale(sf::Vector2f(0.9f, 0.9f));
	shapemonster.setTexture(monsterTexture);
	sf::Vector2f spawnPoint100 = { 270.f, 220.f };
	shapemonster.setPosition(spawnPoint100);
	//////monster2
	int monster2SizeX = monsterTexture.getSize().x / 3;
	int monster2SizeY = monsterTexture.getSize().y / 4;
	sf::Sprite shapemonster2;
	sf::IntRect rectmonster2(0, 0, monster2SizeX, monster2SizeY);
	shapemonster2.setTextureRect(sf::IntRect(0, 0, monster2SizeX, monster2SizeY));
	shapemonster2.setScale(sf::Vector2f(0.77f, 0.77f));
	shapemonster2.setTexture(monsterTexture);
	sf::Vector2f spawnPoint101 = { 370.f, 95.f };
	shapemonster2.setPosition(spawnPoint101);
	//////monster3
	int monster3SizeX = monsterTexture.getSize().x / 3;
	int monster3SizeY = monsterTexture.getSize().y / 4;
	sf::Sprite shapemonster3;
	sf::IntRect rectmonster3(0, 0, monster3SizeX, monster3SizeY);
	shapemonster3.setTextureRect(sf::IntRect(0, 0, monster3SizeX, monster3SizeY));
	shapemonster3.setScale(sf::Vector2f(0.9f, 0.9f));
	shapemonster3.setTexture(monsterTexture);
	sf::Vector2f spawnPoint102 = { 887.f, 295.f };
	shapemonster3.setPosition(spawnPoint102);
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
	sf::Vector2f spawnPoint13 = { 110.f, 522.f };
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
	sf::Sprite shapewall14;
	shapewall14.setTexture(wallTexture);
	int wall14SizeX = wallTexture.getSize().x;
	int wall14SizeY = wallTexture.getSize().y;
	shapewall14.setScale(sf::Vector2f(0.043f, 0.036f));
	shapewall14.setTextureRect(sf::IntRect(0, 0, wall14SizeX, wall14SizeY));
	sf::Vector2f spawnPoint20 = { 345.f, 217.f };
	shapewall14.setPosition(spawnPoint20);
	//////wall(11)
	sf::Sprite shapewall15;
	shapewall15.setTexture(wallTexture);
	int wall15SizeX = wallTexture.getSize().x;
	int wall15SizeY = wallTexture.getSize().y;
	shapewall15.setScale(sf::Vector2f(0.043f, 0.036f));
	shapewall15.setTextureRect(sf::IntRect(0, 0, wall15SizeX, wall15SizeY));
	sf::Vector2f spawnPoint21 = { 345.f, 336.f };
	shapewall15.setPosition(spawnPoint21);
	//////wall(12)
	sf::Sprite shapewall16;
	shapewall16.setTexture(wallTexture);
	int wall16SizeX = wallTexture.getSize().x;
	int wall16SizeY = wallTexture.getSize().y;
	shapewall16.setScale(sf::Vector2f(0.043f, 0.036f));
	shapewall16.setTextureRect(sf::IntRect(0, 0, wall16SizeX, wall16SizeY));
	sf::Vector2f spawnPoint22 = { 345.f, 461.f };
	shapewall16.setPosition(spawnPoint22);
	//////wall(13)
	sf::Sprite shapewall17;
	shapewall17.setTexture(wallTexture);
	int wall17SizeX = wallTexture.getSize().x;
	int wall17SizeY = wallTexture.getSize().y;
	shapewall17.setScale(sf::Vector2f(0.045f, 0.038f));
	shapewall17.setTextureRect(sf::IntRect(0, 0, wall16SizeX, wall16SizeY));
	sf::Vector2f spawnPoint23 = { 342.f, 579.f };
	shapewall17.setPosition(spawnPoint23);
	//////wall(14)
	sf::Sprite shapewall18;
	shapewall18.setTexture(wallTexture);
	int wall18SizeX = wallTexture.getSize().x;
	int wall18SizeY = wallTexture.getSize().y;
	shapewall18.setScale(sf::Vector2f(0.045f, 0.038f));
	shapewall18.setTextureRect(sf::IntRect(0, 0, wall18SizeX, wall18SizeY));
	sf::Vector2f spawnPoint24 = { 420.f, 579.f };
	shapewall18.setPosition(spawnPoint24);
	//////wall(15)-speacial
	sf::Sprite shapewall19;
	shapewall19.setTexture(wallTexture);
	int wall19SizeX = wallTexture.getSize().x;
	int wall19SizeY = wallTexture.getSize().y;
	shapewall19.setScale(sf::Vector2f(0.045f, 0.036f));
	shapewall19.setTextureRect(sf::IntRect(0, 0, wall19SizeX, wall19SizeY));
	sf::Vector2f spawnPoint25 = { 497.f, 461.f };
	shapewall19.setPosition(spawnPoint25);
	//////wall(16)
	sf::Sprite shapewall20;
	shapewall20.setTexture(wallTexture);
	int wall20SizeX = wallTexture.getSize().x;
	int wall20SizeY = wallTexture.getSize().y;
	shapewall20.setScale(sf::Vector2f(0.045f, 0.036f));
	shapewall20.setTextureRect(sf::IntRect(0, 0, wall20SizeX, wall20SizeY));
	sf::Vector2f spawnPoint26 = { 575.f, 338.f };
	shapewall20.setPosition(spawnPoint26);
	//////wall(17)
	sf::Sprite shapewall21;
	shapewall21.setTexture(wallTexture);
	int wall21SizeX = wallTexture.getSize().x;
	int wall21SizeY = wallTexture.getSize().y;
	shapewall21.setScale(sf::Vector2f(0.045f, 0.036f));
	shapewall21.setTextureRect(sf::IntRect(0, 0, wall21SizeX, wall21SizeY));
	sf::Vector2f spawnPoint27 = { 575.f, 399.f };
	shapewall21.setPosition(spawnPoint27);
	//////wall(18)
	sf::Sprite shapewall22;
	shapewall22.setTexture(wallTexture);
	int wall22SizeX = wallTexture.getSize().x;
	int wall22SizeY = wallTexture.getSize().y;
	shapewall22.setScale(sf::Vector2f(0.045f, 0.036f));
	shapewall22.setTextureRect(sf::IntRect(0, 0, wall22SizeX, wall22SizeY));
	sf::Vector2f spawnPoint28 = { 575.f, 461.f };
	shapewall22.setPosition(spawnPoint28);
	//////wall(19)
	sf::Sprite shapewall23;
	shapewall23.setTexture(wallTexture);
	int wall23SizeX = wallTexture.getSize().x;
	int wall23SizeY = wallTexture.getSize().y;
	shapewall23.setScale(sf::Vector2f(0.045f, 0.033f));
	shapewall23.setTextureRect(sf::IntRect(0, 0, wall23SizeX, wall23SizeY));
	sf::Vector2f spawnPoint29 = { 575.f, 523.f };
	shapewall23.setPosition(spawnPoint29);
	//////wall(20)
	sf::Sprite shapewall24;
	shapewall24.setTexture(wallTexture);
	int wall24SizeX = wallTexture.getSize().x;
	int wall24SizeY = wallTexture.getSize().y;
	shapewall24.setScale(sf::Vector2f(0.045f, 0.0375f));
	shapewall24.setTextureRect(sf::IntRect(0, 0, wall24SizeX, wall24SizeY));
	sf::Vector2f spawnPoint30 = { 575.f, 580.f };
	shapewall24.setPosition(spawnPoint30);
	///////////////////////////////////////////////////////////////////////
	//////wall(21)
	sf::Sprite shapewall25;
	shapewall25.setTexture(wallTexture);
	int wall25SizeX = wallTexture.getSize().x;
	int wall25SizeY = wallTexture.getSize().y;
	shapewall25.setScale(sf::Vector2f(0.044f, 0.0363f));
	shapewall25.setTextureRect(sf::IntRect(0, 0, wall25SizeX, wall25SizeY));
	sf::Vector2f spawnPoint31 = { 653.f, 95.f };
	shapewall25.setPosition(spawnPoint31);
	//////wall(22)
	sf::Sprite shapewall26;
	shapewall26.setTexture(wallTexture);
	int wall26SizeX = wallTexture.getSize().x;
	int wall26SizeY = wallTexture.getSize().y;
	shapewall26.setScale(sf::Vector2f(0.044f, 0.0363f));
	shapewall26.setTextureRect(sf::IntRect(0, 0, wall26SizeX, wall26SizeY));
	sf::Vector2f spawnPoint32 = { 653.f, 214.5f };
	shapewall26.setPosition(spawnPoint32);
	//////wall(23)
	sf::Sprite shapewall27;
	shapewall27.setTexture(wallTexture);
	int wall27SizeX = wallTexture.getSize().x;
	int wall27SizeY = wallTexture.getSize().y;
	shapewall27.setScale(sf::Vector2f(0.044f, 0.0363f));
	shapewall27.setTextureRect(sf::IntRect(0, 0, wall27SizeX, wall27SizeY));
	sf::Vector2f spawnPoint33 = { 653.f, 460.f };
	shapewall27.setPosition(spawnPoint33);
	//////wall(24)
	sf::Sprite shapewall28;
	shapewall28.setTexture(wallTexture);
	int wall28SizeX = wallTexture.getSize().x;
	int wall28SizeY = wallTexture.getSize().y;
	shapewall28.setScale(sf::Vector2f(0.046f, 0.0363f));
	shapewall28.setTextureRect(sf::IntRect(0, 0, wall28SizeX, wall28SizeY));
	sf::Vector2f spawnPoint34 = { 729.f, 214.5f };
	shapewall28.setPosition(spawnPoint34);
	//////wall(25)
	sf::Sprite shapewall29;
	shapewall29.setTexture(wallTexture);
	int wall29SizeX = wallTexture.getSize().x;
	int wall29SizeY = wallTexture.getSize().y;
	shapewall29.setScale(sf::Vector2f(0.046f, 0.0363f));
	shapewall29.setTextureRect(sf::IntRect(0, 0, wall29SizeX, wall29SizeY));
	sf::Vector2f spawnPoint35 = { 729.f, 276.f };
	shapewall29.setPosition(spawnPoint35);
	//////wall(26)
	sf::Sprite shapewall30;
	shapewall30.setTexture(wallTexture);
	int wall30SizeX = wallTexture.getSize().x;
	int wall30SizeY = wallTexture.getSize().y;
	shapewall30.setScale(sf::Vector2f(0.0465f, 0.0363f));
	shapewall30.setTextureRect(sf::IntRect(0, 0, wall30SizeX, wall30SizeY));
	sf::Vector2f spawnPoint36 = { 729.f, 460.f };
	shapewall30.setPosition(spawnPoint36);
	//////wall(27)
	sf::Sprite shapewall31;
	shapewall31.setTexture(wallTexture);
	int wall31SizeX = wallTexture.getSize().x;
	int wall31SizeY = wallTexture.getSize().y;
	shapewall31.setScale(sf::Vector2f(0.0465f, 0.0363f));
	shapewall31.setTextureRect(sf::IntRect(0, 0, wall31SizeX, wall31SizeY));
	sf::Vector2f spawnPoint37 = { 805.f, 460.f };
	shapewall31.setPosition(spawnPoint37);
	//////Map
	sf::Sprite shapeMap;
	shapeMap.setTexture(mapTexture);
	int mapSizeX = mapTexture.getSize().x;
	int mapSizeY = mapTexture.getSize().y;
	shapeMap.setScale(sf::Vector2f(2.4f, 1.875f));//remember
	shapeMap.setTextureRect(sf::IntRect(0, 0, mapSizeX, mapSizeY));
	sf::Vector2f spawnPoint3 = { 0.f, 0.f };
	shapeMap.setPosition(spawnPoint3);

	//////warp
	sf::Sprite shapewarp;
	shapewarp.setTexture(warpTexture);
	int warpSizeX = warpTexture.getSize().x;
	int warpSizeY = warpTexture.getSize().y;
	shapewarp.setScale(sf::Vector2f(0.4f, 0.4f));
	shapewarp.setTextureRect(sf::IntRect(0, 0, mapSizeX, mapSizeY));
	sf::Vector2f spawnPoint4 = { 870.f, 175.f };
	shapewarp.setPosition(spawnPoint4);


	//////bomb

	sf::Sprite shapeBomb;
	shapeBomb.setTexture(bombTexture);
	int bombSizeX = bombTexture.getSize().x / 2;
	int bombSizeY = bombTexture.getSize().y / 8;
	shapeBomb.setScale(sf::Vector2f(0.15f, 0.15f));
	shapeBomb.setTextureRect(sf::IntRect(0, 0, bombSizeX, bombSizeY));
	///////fire
	sf::Sprite shapefire;
	shapefire.setTexture(fireTexture);
	int fireSizeX = fireTexture.getSize().x;
	int fireSizeY = fireTexture.getSize().y;
	shapefire.setScale(sf::Vector2f(0.2f, 0.2f));
	shapefire.setTextureRect(sf::IntRect(0, 0, fireSizeX, fireSizeY));
	time_t t4;
	srand((unsigned)time(&t4));
	sf::Vector2f spawnPoint226 = { 100 + float(rand() % 821),100 + float(rand() % 492) };
	shapefire.setPosition(spawnPoint226);
	/*sf::Vector2f spawnPoint226 = { 265.f,235.f };
	shapefire.setPosition(spawnPoint226);*/
	//fixfire
	///////fireeffection
	int f2SizeX = fireeffectTexture.getSize().x / 2;
	int f2SizeY = fireeffectTexture.getSize().y;
	sf::Sprite shapefireeffect;
	sf::IntRect rectfire(0, 0, f2SizeX, f2SizeY);
	shapefireeffect.setTextureRect(sf::IntRect(0, 0, f2SizeX, f2SizeY));
	shapefireeffect.setScale(sf::Vector2f(1.18f, 0.7f));
	shapefireeffect.setTexture(fireeffectTexture);
	sf::Vector2f spawnPoint450 = { 3900.f, 295.f };
	shapefireeffect.setPosition(spawnPoint450);;


	//specialbomb maimoke
	sf::Sprite specialBombSprite;
	specialBombSprite.setTexture(specialbombTexture);
	specialBombSprite.setScale(0.07f, 0.07f);
	specialBombSprite.setPosition(-1200.f, -1100.f);

	//specialexplosion
	sf::Sprite specialExplosion;
	specialExplosion.setTexture(explosion2Texture);
	specialExplosion.setPosition(-1000.f, -1000.f);
	float specialExplosionSizeX = 130.8f;//change
	float specialExplosionSizeY = 127.3f;//change
	specialExplosion.setTextureRect(sf::IntRect(0, 0, specialExplosionSizeX, specialExplosionSizeY));
	int SpecialExplosionFrame = 0;
	float SpecialExplosionTime = 0;
	float bombtime = INT_MAX;

	sf::Vector2f spawnPoint2 = { 10000.f, 1024.4f };
	shapeBomb.setPosition(spawnPoint2);

	int animationFrame2 = 0;
	int animationFrame3 = 0;
	////// Sprite
	int spriteSizeX = playerTexture.getSize().x / 2;
	int spriteSizeY = playerTexture.getSize().y / 5;
	sf::IntRect rectPlayer(0, 0, spriteSizeX, spriteSizeY);
	sf::IntRect rectPlayer2(0, 0, spriteSizeX, spriteSizeY);
	sf::Sprite shapeSprite;
	shapeSprite.setTexture(playerTexture);

	shapeSprite.setScale(sf::Vector2f(0.8f, 0.8f));
	//delaybomb
	sf::Clock time;
	float bt, bt2, bt3, bt4, at, at2, at3, at4;
	shapeSprite.setTextureRect(sf::IntRect(0, 0, spriteSizeX, spriteSizeY));
	//time
	sf::Clock clock10;
	sf::Clock clock;
	sf::Clock playerClock;
	sf::Clock bombclock;
	sf::Clock monsterClock;
	sf::Clock monsterClock2;
	sf::Clock monsterClock3;
	sf::Clock deltaClock;
	sf::Clock fireClock;
	sf::Time DeltaTime;
	float time_interval = 0;
	float time_interval2 = 0;
	//spawn point
	sf::Vector2f spawnPoint = { 120.f, 100.f };
	shapeSprite.setPosition(spawnPoint);
	int animationFrame = 0;

	sf::Sprite temp;
	sf::Sprite temp2;
	sf::Sprite temp3;
	sf::Sprite temp4;

	bool bomb = 0;
	int explosion = 0;
	int explosion2 = 0;
	bool bomberman = 0;
	bool ex = 0;
	bool monster = 1;
	bool monster2 = 1;
	bool monster3 = 1;
	bool spb = 1;
	bool spb2 = 1;
	bool f = 1;
	std::vector<sf::Sprite> bombPlace;
	std::vector<sf::Sprite> bombPlace2;
	std::vector<sf::Sprite> explosionPlace;
	std::vector<sf::Sprite> explosionPlace2;
	std::vector<sf::Sprite> wallPlace;

	while (window.isOpen())
	{

		//printf("Position X=%f Y=%f\n\n", shapeSprite.getPosition().x, shapeSprite.getPosition().y);
		sf::Event event;
		bt = time.getElapsedTime().asMilliseconds();
		bt2 = time.getElapsedTime().asMilliseconds();
		bt3 = time.getElapsedTime().asMilliseconds();
		bt4 = time.getElapsedTime().asMilliseconds();
		at = time.getElapsedTime().asMilliseconds();
		at2 = time.getElapsedTime().asMilliseconds();
		at3 = time.getElapsedTime().asMilliseconds();
		at4 = time.getElapsedTime().asMilliseconds();
		DeltaTime = deltaClock.restart();
		//window.draw(rectangle);//dont forget na use

		word.setString(std::to_string(banana));//important string
		word2.setString(std::to_string(apple));
		word3.setString(std::to_string(grape));
		word4.setString(std::to_string(time2));
		word6.setString(std::to_string(highscore));
		//word5.setString(std::to_string(times[5]));
		window.draw(shapebanana);
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
		window.draw(word);
		window.draw(word2);
		window.draw(word3);

		window.draw(shapebanana2);
		window.draw(shapebanana3);
		window.draw(shapebanana4);
		window.draw(shapebanana5);
		window.draw(shapeapple2);
		window.draw(shapeapple3);
		window.draw(shapeapple4);
		window.draw(shapeapple5);
		window.draw(shapegrape);
		window.draw(shapegrape2);
		window.draw(shapegrape3);
		window.draw(circle);
		window.draw(shapewarp);
		window.draw(shapeheart);
		window.draw(shapeblueblock);
		window.draw(shapeblueblock2);
		window.draw(shapeblueblock3);
		//window.draw(word4);
		//window.draw(word5);
		window.draw(shapewall);
		window.draw(shapewall2);
		window.draw(shapewall3);//try
		window.draw(shapewall4);
		window.draw(shapewall5);
		window.draw(shapewall6);
		window.draw(shapewall7);
		window.draw(shapewall8);
		window.draw(shapewall9); //monster
		window.draw(shapewall10);//monster
		window.draw(shapewall11);//monster
		window.draw(shapewall12);
		window.draw(shapewall13);
		window.draw(shapewall14);
		window.draw(shapewall15);
		window.draw(shapewall16);
		window.draw(shapewall17);
		window.draw(shapewall18);
		window.draw(shapewall19);
		window.draw(shapewall20);
		window.draw(shapewall21);
		window.draw(shapewall22);
		window.draw(shapewall23);
		window.draw(shapewall24);
		window.draw(shapewall25);
		window.draw(shapewall26);
		window.draw(shapewall27);
		window.draw(shapewall28);
		window.draw(shapewall29);
		window.draw(shapewall30);
		window.draw(shapewall31);
		window.draw(shapefire);
		window.draw(shapefireeffect);
		window.draw(shapeSprite);
		window.draw(shapebanana6);
		window.draw(shapemonster);
		window.draw(shapemonster2);
		window.draw(shapemonster3);
		window.draw(shapetimer);
	
		window.draw(shapelose);
		//sf::Vector2f P = shapeSprite.getPosition();
		//shapeBomb.setPosition(P);
		window.draw(shapeBomb);
		window.draw(shaperemote);
		window.draw(shapespecialbomb);
		window.draw(specialBombSprite);
		window.draw(specialExplosion);
		for (sf::Sprite sprites : bombPlace)

			window.draw(sprites);
		for (sf::Sprite sprites2 : bombPlace2)

			window.draw(sprites2);
		for (sf::Sprite bomb : explosionPlace)
			window.draw(bomb);
		for (sf::Sprite bomb2 : explosionPlace2)
			window.draw(bomb2);
		window.draw(shapeExplosion);
		window.draw(shapeexplosion2);
		for (j = 0; j < monsterheart; j++)
		{
			sf::IntRect rectEnemyHeart(0, 0, enermyheartSizeX, enermyheartSizeY);
			shapeenermyheart.setTexture(enermyheartTexture);
			shapeenermyheart.setPosition(shapemonster.getPosition().x + (20 * j), shapemonster.getPosition().y - 20.f);
			window.draw(shapeenermyheart);
		}
		for (j2 = 0; j2 < monsterheart2; j2++)
		{
			sf::IntRect rectEnemyHeart(0, 0, enermyheartSizeX, enermyheartSizeY);
			shapeenermyheart.setTexture(enermyheartTexture);
			shapeenermyheart.setPosition(shapemonster2.getPosition().x + (20 * j2), shapemonster2.getPosition().y - 20.f);
			window.draw(shapeenermyheart);
		}
		for (j3 = 0; j3 < monsterheart3; j3++)
		{
			sf::IntRect rectEnemyHeart(0, 0, enermyheartSizeX, enermyheartSizeY);
			shapeenermyheart.setTexture(enermyheartTexture);
			shapeenermyheart.setPosition(shapemonster3.getPosition().x + (20 * j3), shapemonster3.getPosition().y - 20.f);
			window.draw(shapeenermyheart);
		}
		window.draw(word4);
		window.draw(word5);
		window.draw(shapevictory);
		if (health > 0 && p == 0) {
			highscore = time2 * (apple + banana + grape); 
		}
		//writrhere
		if (victoryy >0) {
			window.draw(word6);
			window.draw(word7);

		}
		if (health > 0&&p==0)
			time2 = time2 + DeltaTime.asSeconds(); //maimoke1234567890
		window.display();
		//fix1
		if (p == 0) {
			if (shapespecialbomb.getPosition().x >= 95) {
				if (spb == 0 || spb == 1) {
					if (spb == 1) {
						shapespecialbomb.move(0.8f, 0.f);
						if (shapespecialbomb.getPosition().x >= 900) {
							spb = 0;
						}
					}
					if (spb == 0) {
						shapespecialbomb.move(-0.8f, 0.f);
						if (shapespecialbomb.getPosition().x <= 100) {
							spb = 1;
						}
					}
				}

			}
		}
		//fix2
		if (p == 0) {
			if (shapefire.getPosition().y >= 100) {
				if (spb2 == 0 || spb2 == 1) {
					if (spb2 == 1) {
						shapefire.move(0.f, 0.8f);
						if (shapefire.getPosition().y >= 570) {
							spb2 = 0;
						}
					}
					if (spb2 == 0) {
						shapefire.move(0.f, -0.8f);
						if (shapefire.getPosition().y <= 105) {
							spb2 = 1;
						}
					}
				}

			}
		}
		if (p == 0) {
			if (shapemonster3.getPosition().y >= 100) {

				if (monster3 == 1 || monster3 == 0) {
					rectmonster3.top = monster3SizeY * 0;

					if (monster3 == 1) {
						shapemonster3.move(0.f, 0.5f);

						if (shapemonster3.getPosition().y >= 570) {
							monster3 = 0;
						}

						if (monsterClock3.getElapsedTime().asSeconds() > 0.3f)
						{
							if (rectmonster3.left == (monster3SizeX * 2))
							{
								rectmonster3.left = 0;
							}
							else
							{
								rectmonster3.left += monster3SizeX;
							}
							monsterClock3.restart();
						}
						shapemonster3.setTextureRect(sf::IntRect(rectmonster3));
					}
					else if (monster3 == 0) {
						rectmonster3.top = monster3SizeY * 3;
						shapemonster3.move(0.f, -0.5f);
						if (shapemonster3.getPosition().y <= 105) {
							monster3 = 1;
						}

						if (monsterClock3.getElapsedTime().asSeconds() > 0.3f)
						{
							if (rectmonster3.left == (monster3SizeX * 2))
							{
								rectmonster3.left = 0;
							}
							else
							{
								rectmonster3.left += monster3SizeX;
							}
							monsterClock3.restart();
						}
						shapemonster3.setTextureRect(sf::IntRect(rectmonster3));
					}

					//shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, 60));

					sf::Vector2f monsterspawn3 = { x,y };
				}
			}
		}
		/////////////////////////////////////////////////////////////////////////////////////////
		if (p == 0) {
			if (shapemonster2.getPosition().x >= 95) {

				if (monster2 == 1 || monster2 == 0) {
					rectmonster2.top = monster2SizeY * 2;

					if (monster2 == 1) {
						shapemonster2.move(0.9f, 0.f);

						if (shapewall25.getGlobalBounds().intersects(shapemonster2.getGlobalBounds()) || shapemonster2.getPosition().x >= 900) {
							monster2 = 0;
						}

						if (monsterClock2.getElapsedTime().asSeconds() > 0.3f)
						{
							if (rectmonster2.left == (monster2SizeX * 2))
							{
								rectmonster2.left = 0;
							}
							else
							{
								rectmonster2.left += monster2SizeX;
							}
							monsterClock2.restart();
						}
						shapemonster2.setTextureRect(sf::IntRect(rectmonster2));
					}
					else if (monster2 == 0) {
						rectmonster2.top = monster2SizeY * 1;
						shapemonster2.move(-0.9f, 0.f);
						if (shapewall3.getGlobalBounds().intersects(shapemonster2.getGlobalBounds()) || shapemonster2.getPosition().x <= 100) {
							monster2 = 1;
						}

						if (monsterClock2.getElapsedTime().asSeconds() > 0.3f)
						{
							if (rectmonster2.left == (monster2SizeX * 2))
							{
								rectmonster2.left = 0;
							}
							else
							{
								rectmonster2.left += monster2SizeX;
							}
							monsterClock2.restart();
						}
						shapemonster2.setTextureRect(sf::IntRect(rectmonster2));
					}

					//shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, 60));

					sf::Vector2f monsterspawn2 = { x,y };
				}
			}
		}
		////////////////////////////////////////////////////////////////////////////////
		if (p == 0) {
			if (shapemonster.getPosition().y >= 100) {

				if (monster == 1 || monster == 0) {
					rectmonster.top = monsterSizeY * 0;

					if (monster == 1) {
						shapemonster.move(0.f, 0.45f);

						if (shapewall9.getGlobalBounds().intersects(shapemonster.getGlobalBounds()) ||
							shapewall10.getGlobalBounds().intersects(shapemonster.getGlobalBounds()) ||
							shapewall11.getGlobalBounds().intersects(shapemonster.getGlobalBounds()) ||
							shapemonster.getPosition().y >= 570) {
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
						shapemonster.move(0.f, -0.45f);
						if (
							shapewall3.getGlobalBounds().intersects(shapemonster.getGlobalBounds()) ||
							shapewall4.getGlobalBounds().intersects(shapemonster.getGlobalBounds()) ||
							shapemonster.getPosition().y <= 105) {
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
		}

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
		//fixfire
		if (fire2 == 1) {
			rectfire.top = f2SizeY * 0;

			if (fireClock.getElapsedTime().asSeconds() > 0.5f)
			{
				if (rectfire.left == (f2SizeX * 1))
				{
					rectfire.left = 0;
				}
				else
				{
					rectfire.left += f2SizeX;
				}
				fireClock.restart();
			}
			shapefireeffect.setTextureRect(sf::IntRect(rectfire));
			shapefireeffect.setPosition(shapeSprite.getPosition().x - 53.f, shapeSprite.getPosition().y - 65.f);
			sf::Vector2f spritspawn1 = { x,y };
			//shapeSprite.getPosition().x, shapeSprite.getPosition().y - 10.f
		}
		if (p == 0) {
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && shapeSprite.getPosition().x < 1080 - spriteSizeX - 100)
			{	
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::I) && shapeSprite.getPosition().x < 1080 - spriteSizeX - 100) {
					rectPlayer2.top = spriteSizeY;
					shapeSprite.move(1.7f, 0.f);
					if (playerClock.getElapsedTime().asSeconds() > 0.3f)
					{
						if (rectPlayer2.left == (spriteSizeX * 1))
						{
							rectPlayer2.left = 0;
						}
						else
						{
							rectPlayer2.left += spriteSizeX;
						}
						playerClock.restart();
					}
					shapeSprite.setTextureRect(sf::IntRect(rectPlayer2));
				}

				rectPlayer.top = spriteSizeY;
				shapeSprite.move(0.7f, 0.f);
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
				//spriteSizeX* animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY)
		
				if (shapewall.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall12.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall13.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall14.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall15.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall16.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall17.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall18.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall19.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall20.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall21.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall22.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall23.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall24.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall25.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall26.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall27.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall28.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall29.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall30.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				if (shapewall31.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(-2.7f, 0.f);
				}
				sf::Vector2f spritspawn1 = { x,y };
				if (rectangle.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle12.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle13.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle14.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle15.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle16.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle17.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle18.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle19.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle20.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(-2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
			}
		}
		if (p == 0) {
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && shapeSprite.getPosition().x >= 100)
			{
				
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::I) && shapeSprite.getPosition().x >= 100) {
					rectPlayer2.top = spriteSizeY * 0;
					shapeSprite.move(-1.7f, 0.f);
					if (playerClock.getElapsedTime().asSeconds() > 0.3f)
					{
						if (rectPlayer2.left == (spriteSizeX * 1))
						{
							rectPlayer2.left = 0;
						}
						else
						{
							rectPlayer2.left += spriteSizeX;
						}
						playerClock.restart();
					}
					shapeSprite.setTextureRect(sf::IntRect(rectPlayer2));
				}
				rectPlayer.top = spriteSizeY * 0;
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
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall12.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall13.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall14.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall15.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall16.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall17.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall18.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall19.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall20.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall21.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall22.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall23.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall24.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall25.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall26.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall27.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall28.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall29.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall30.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (shapewall31.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.move(2.7f, 0.f);
				}
				if (rectangle.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle12.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle13.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle14.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle15.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle16.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle17.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle18.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle19.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle20.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(2.7f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}

			}
		}
		if (p == 0) {
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && shapeSprite.getPosition().y >= 100)
			{
			
				rectPlayer.top = spriteSizeY * 3.05;
				shapeSprite.move(0.f, -0.7f);
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
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::I) && shapeSprite.getPosition().y >= 100) {
					rectPlayer2.top = spriteSizeY * 3.05;
					shapeSprite.move(0.f, -1.7f);
					if (playerClock.getElapsedTime().asSeconds() > 0.2f)
					{
						if (rectPlayer2.left == (spriteSizeX * 1))
						{
							rectPlayer2.left = 0;
						}
						else
						{
							rectPlayer2.left += spriteSizeX;
						}
						playerClock.restart();
					}
					shapeSprite.setTextureRect(sf::IntRect(rectPlayer2));
				}
				//shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
				if (shapewall.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()) || shapewall2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall12.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall13.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall14.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall15.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall16.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall17.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall18.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall19.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall20.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall21.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall22.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall23.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall24.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall25.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall26.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall27.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall28.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall29.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall30.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (shapewall31.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);
					shapeSprite.move(0.f, 2.7f);
				}
				if (rectangle.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };

				}
				if (rectangle11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle12.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle13.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle14.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };

				}
				if (rectangle15.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle16.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle17.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle18.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };

				}
				if (rectangle19.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle20.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, 2.7f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3.05, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
			}
		}

		if (p == 0) {
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && shapeSprite.getPosition().y < 720 - spriteSizeY - 65)

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
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::I) && shapeSprite.getPosition().y < 720 - spriteSizeY - 65) {
					rectPlayer2.top = spriteSizeY * 2;
					shapeSprite.move(0.f, 1.7f);
					if (playerClock.getElapsedTime().asSeconds() > 0.2f)
					{
						if (rectPlayer2.left == (spriteSizeX * 1))
						{
							rectPlayer2.left = 0;
						}
						else
						{
							rectPlayer2.left += spriteSizeX;
						}
						playerClock.restart();
					}
					shapeSprite.setTextureRect(sf::IntRect(rectPlayer2));
				}
				//shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, 60));
				if (shapewall.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall12.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall13.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall14.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall15.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall16.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall17.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall18.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall19.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall20.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall21.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall22.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall23.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall24.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall25.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall26.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall27.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall28.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall29.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall30.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}
				if (shapewall31.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.move(0.f, -2.7f);
				}

				if (rectangle.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle12.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle13.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle14.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle15.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle16.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle17.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle18.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle19.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}
				if (rectangle20.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {

					shapeSprite.move(0.f, -2.7f);
					shapeSprite.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y - 5.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, spriteSizeY));
					sf::Vector2f spritspawn1 = { x,y };
				}

			}
		}
		//maimoke


		if (specialbomb != 0) {
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && bomb10 == 0 && bomb == 0) {
				specialBombSprite.setPosition(shapeSprite.getPosition());
				bomb10 = 1;
				specialbomb--;
				bombtime = 1;
			}
		}
		if (bombtime <= 0 && bombmove==1)
		{
			specialExplosion.setPosition(specialBombSprite.getPosition().x - specialExplosionSizeX / 2 + spriteSizeX / 2, specialBombSprite.getPosition().y - specialExplosionSizeY / 2 + spriteSizeY / 2);

			specialBombSprite.setPosition(-1000.f, -1000.f);
			bombtime = INT_MAX;
			SpecialExplosionFrame = 0;
		}
		else bombtime = bombtime - DeltaTime.asSeconds();

		if (specialBombSprite.getPosition().x == -1000) {
			specialExplosion.setTextureRect(sf::IntRect(SpecialExplosionFrame * specialExplosionSizeX, specialExplosionSizeY * 0, specialExplosionSizeX, specialExplosionSizeY));
			if (SpecialExplosionTime >= 0.3)
			{
				SpecialExplosionFrame++;
				SpecialExplosionTime = 0;
			}
			else 				SpecialExplosionTime += DeltaTime.asSeconds();
		}
		if (SpecialExplosionFrame == 5)
		{
			bomb10 = 0;
			SpecialExplosionFrame = 999;
			specialExplosion.setPosition(-1000.f, -1000.f);
			bombmove--;
			jk--;
		}
		//jamao.play
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::P)&&bombmove==0)//Bug
		{
				bombmove++;
		}
		//Boom
		//if (jk == 0) {
		if (specialbomb == 0) {
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && bomb == 0 && bomb10 == 0)
			{
				temp.setTexture(bombTexture);
				temp.setTextureRect(sf::IntRect(bombSizeX * animationFrame2, 0, bombSizeX, bombSizeY));
				temp.setPosition(shapeSprite.getPosition().x, shapeSprite.getPosition().y);

				temp.setScale(sf::Vector2f(0.15f, 0.15f));
				time.restart();

				bombPlace.push_back(temp);//delete bomb

				bomb = 1;
			}
		}
			//	}
			time_interval = time.getElapsedTime().asSeconds();
			if (time_interval > 1.5 && bomb == 1) {
				int h = 0;

				temp.setTexture(explosionTexture);
				temp.setTextureRect(sf::IntRect(explosionSizeX * animationFrame3, 0, explosionSizeX, explosionSizeY));
				temp.setPosition(temp.getPosition().x - 60.f, temp.getPosition().y - 50.f);

				temp.setScale(sf::Vector2f(0.25f, 0.25f));

				explosionPlace.push_back(temp);
				bomb = 0;
				explosion++;
				//std::cout << 'a';
				system("cls");
				if (h == 0 && health == 3) {

					shapeblueblock.setPosition(130.f, 0.f);
					health--;
				}
			}
			if (time_interval > 2 && explosion > 0) {
				explosionPlace[explosion - 1].setPosition(NULL - 1000, NULL - 1000);
				bombPlace[explosion - 1].setPosition(NULL - 1000, NULL - 1000);
				clock.restart();
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
		if (animationFrame3 >= 2) {
			animationFrame3 = 0;
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall.getGlobalBounds())) {
			shapewall.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall2.getGlobalBounds())) {
			shapewall2.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall3.getGlobalBounds())) {
			shapewall3.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall4.getGlobalBounds())) {
			shapewall4.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall5.getGlobalBounds())) {
			shapewall5.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall6.getGlobalBounds())) {
			shapewall6.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall7.getGlobalBounds())) {
			shapewall7.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall8.getGlobalBounds())) {
			shapewall8.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall9.getGlobalBounds())) {
			shapewall9.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall10.getGlobalBounds())) {
			shapewall10.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall11.getGlobalBounds())) {
			shapewall11.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall12.getGlobalBounds())) {
			shapewall12.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall13.getGlobalBounds())) {
			shapewall13.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall14.getGlobalBounds())) {
			shapewall14.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall15.getGlobalBounds())) {
			shapewall15.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall16.getGlobalBounds())) {
			shapewall16.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall17.getGlobalBounds())) {
			shapewall17.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall18.getGlobalBounds())) {
			shapewall18.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall19.getGlobalBounds())) {
			shapewall19.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall20.getGlobalBounds())) {
			shapewall20.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall21.getGlobalBounds())) {
			shapewall21.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall22.getGlobalBounds())) {
			shapewall22.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall23.getGlobalBounds())) {
			shapewall23.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall24.getGlobalBounds())) {
			shapewall24.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall25.getGlobalBounds())) {
			shapewall25.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall26.getGlobalBounds())) {
			shapewall26.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall27.getGlobalBounds())) {
			shapewall27.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall28.getGlobalBounds())) {
			shapewall28.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall29.getGlobalBounds())) {
			shapewall29.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall30.getGlobalBounds())) {
			shapewall30.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapewall31.getGlobalBounds())) {
			shapewall31.setPosition(10000.f, 10000.f);
		}

		if (specialExplosion.getGlobalBounds().intersects(shapemonster.getGlobalBounds())) {

			shapemonster.setPosition(10000.f, 10000.f);
		}
		if (specialExplosion.getGlobalBounds().intersects(shapemonster2.getGlobalBounds())) {

			shapemonster2.setPosition(10000.f, 10000.f);
		}
		//gm2
		if (specialExplosion.getGlobalBounds().intersects(shapemonster3.getGlobalBounds())) {


			shapemonster3.setPosition(10000.f, 10000.f);
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
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall14.getGlobalBounds())) {
				shapewall14.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall15.getGlobalBounds())) {
				shapewall15.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall16.getGlobalBounds())) {
				shapewall16.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall17.getGlobalBounds())) {
				shapewall17.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall18.getGlobalBounds())) {
				shapewall18.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall19.getGlobalBounds())) {
				shapewall19.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall20.getGlobalBounds())) {
				shapewall20.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall21.getGlobalBounds())) {
				shapewall21.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall22.getGlobalBounds())) {
				shapewall22.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall23.getGlobalBounds())) {
				shapewall23.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall24.getGlobalBounds())) {
				shapewall24.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall25.getGlobalBounds())) {
				shapewall25.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall26.getGlobalBounds())) {
				shapewall26.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall27.getGlobalBounds())) {
				shapewall27.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall28.getGlobalBounds())) {
				shapewall28.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall29.getGlobalBounds())) {
				shapewall29.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall30.getGlobalBounds())) {
				shapewall30.setPosition(10000.f, 10000.f);
			}
			if (explosionPlace[i].getGlobalBounds().intersects(shapewall31.getGlobalBounds())) {
				shapewall31.setPosition(10000.f, 10000.f);
			}
			//gm3
		
			if (explosionPlace[i].getGlobalBounds().intersects(shapemonster.getGlobalBounds()) && invinciblemon <= 0) {
				monsterheart--;
				invinciblemon = 3;
				
				if (monsterheart == 0) {
					shapemonster.setPosition(10000.f, 10000.f);
				}
			}
			invinciblemon = invinciblemon - DeltaTime.asSeconds();
			if (explosionPlace[i].getGlobalBounds().intersects(shapemonster2.getGlobalBounds())  && invinciblemon2 <= 0) {
				monsterheart2--;
				invinciblemon2 = 3;
				if (monsterheart2 == 0) {
					shapemonster2.setPosition(10000.f, 10000.f);
				}
				
			}
			invinciblemon2 = invinciblemon2 - DeltaTime.asSeconds();
			if (explosionPlace[i].getGlobalBounds().intersects(shapemonster3.getGlobalBounds()) && invinciblemon3 <= 0) {
				monsterheart3--;
				invinciblemon3 = 3;
				if (monsterheart3 == 0) {
					shapemonster3.setPosition(10000.f, 10000.f);
				}
			}
			invinciblemon3 = invinciblemon3 - DeltaTime.asSeconds();
			if (i > 0.7) {
				if (explosionPlace[i].getGlobalBounds().intersects(shapeSprite.getGlobalBounds()) && health == 2) {

					shapeblueblock2.setPosition(80.f, 0.f);
					health--;
				}
			}
			if (i > 1) {
				if (explosionPlace[i].getGlobalBounds().intersects(shapeSprite.getGlobalBounds()) && health == 1) {

					//shapeblueblock2.setPosition(100.f, 0.f);
					shapeblueblock3.setPosition(30.f, 0.f);
					health--;
					//death
				}
			}

		}
		if (shapefireeffect.getGlobalBounds().intersects(shapemonster.getGlobalBounds()))
		{
			fireuse--;
			shapemonster.setPosition(-1000.f, -1000.f);
		}
		if (shapefireeffect.getGlobalBounds().intersects(shapemonster2.getGlobalBounds()))
		{
			fireuse--;
			shapemonster2.setPosition(-1000.f, -1000.f);
		}
		if (shapefireeffect.getGlobalBounds().intersects(shapemonster3.getGlobalBounds()))
		{
			fireuse--;
			shapemonster3.setPosition(-1000.f, -1000.f);
		}
		if (fireuse == 0) {
			shapefireeffect.setPosition(-1000.f, -1000.f);
		}

		//25

		if (circle.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()) && apple + banana + grape >= 25&& health != -1) {
			//shapeSprite.setPosition(spawnPoint);
			invincible = 0;
			p = 1;
			victoryy = victoryy + 1;
			health = 1;//new health
			//shapelose.setPosition(2500.f, 7000.f);
			shapevictory.setPosition(0.f, 0.f);
			invincible = invincible - 0.1;
			if (invincible <= -2) {
				window.close();
			}
		}
		printf("%d", victoryy);
		if (shapespecialbomb.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
			
			shapespecialbomb.setPosition(1700.f, 1700.f);
			specialbomb = 3;
			jk = 3;
		}
		if (jk >0) {
			shaperemote.setPosition(shapeSprite.getPosition().x-5.f, shapeSprite.getPosition().y - 45.f);
		}
		if (jk == 0) {
			shaperemote.setPosition(-1000.f, -1000.f);
		}
		if (shapefire.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
			shapefire.setPosition(1700.f, 1700.f);
			fire2 = 1;
		}
		if (shapebanana.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
			banana++;
			shapebanana.setPosition(1700.f, 1700.f);
		}
		if (shapebanana2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
			banana++;
			shapebanana2.setPosition(1700.f, 1700.f);
		}

		if (shapebanana3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
			banana++;
			shapebanana3.setPosition(1700.f, 1700.f);
		}
		if (shapebanana4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
			banana++;
			shapebanana4.setPosition(1700.f, 1700.f);
		}
		if (shapebanana5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
			banana++;
			shapebanana5.setPosition(1700.f, 1700.f);
		}

		if (shapeapple2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
			apple = apple + 3;
			shapeapple2.setPosition(1700.f, 1700.f);
		}
		if (shapeapple4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
			apple = apple + 3;
			shapeapple4.setPosition(1700.f, 1700.f);
		}
		if (shapeapple5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
			apple = apple + 3;
			shapeapple5.setPosition(1700.f, 1700.f);
		}
		if (shapegrape2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
			grape = grape + 6;
			shapegrape2.setPosition(1700.f, 1700.f);
		}
		if (shapegrape3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) {
			grape = grape + 6;
			shapegrape3.setPosition(1700.f, 1700.f);
		}
		if ((shapemonster.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()) ||
			shapemonster2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()) ||
			shapemonster3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())
			) && invincible <= 0
			)
		{
			health--;
			invincible = 3.0;
			shapeSprite.setPosition(spawnPoint);
		}
		invincible = invincible - DeltaTime.asSeconds();
		//heart update
		shapeheart.setTextureRect(sf::IntRect(0, 0, health * heartSizeX / 3, heartSizeY));

		if (health == 0)
		{
			p = 1;
			window.draw(shapelose);
			shapelose.setPosition(290.f, 100.f);

		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
			window.close();
		}
		window.clear();
	}
	return 0;
}
