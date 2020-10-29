/*#include "SFML\Graphics.hpp"
#include"SFML\System.hpp"
#include"SFML\Window.hpp"
#include"SFML\Audio.hpp"
#include"SFML\Network.hpp"

using namespace sf;
int main()
{
    RenderWindow window(VideoMode(640, 400), "SFML-works!");
    window.setFramerateLimit(60);
    CircleShape triangle;
    triangle.setRadius(50.f);
    triangle.setPointCount(3);
    triangle.setFillColor(Color::Red);
    triangle.setOutlineThickness(5.f);
    triangle.setOutlineColor(Color::Green);

    Vertex line[] = { Vertex(Vector2f(100.f, 400.f)), Vertex(Vector2f(50.f, 100.f)) };

    //resize it to 5points
    sf::ConvexShape convex;
    convex.setPosition(Vector2f(400.f, 50.f));

    //define the points
    convex.setPointCount(5);

    convex.setPoint(0, sf::Vector2f(0, 0));
    convex.setPoint(1, sf::Vector2f(150,10));
    convex.setPoint(2, sf::Vector2f(120, 90));
    convex.setPoint(3, sf::Vector2f(30, 100));
    convex.setPoint(4, sf::Vector2f(0, 50));

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();


        }
        //update
       

        //draw

        window.clear();
        //draw everything
        window.draw(triangle);
        window.draw(line, 2, Lines);
        window.draw(convex);
       

        window.display();
    }
    return 0;
}*/