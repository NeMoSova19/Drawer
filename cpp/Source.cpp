#include <SFML/Graphics.hpp>
//#include <SFML/Window.hpp>




void draw_circle(sf::RenderWindow* win, sf::Vector2f pos, float rad) {
    sf::CircleShape o(rad);
    o.setFillColor(sf::Color::Green);
    o.setPosition(pos);
    win->draw(o);
}

int main()
{
    
    sf::RenderWindow window(sf::VideoMode(920, 520), "SFML works!");
  

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        window.clear();
        draw_circle(&window, {50,10}, 34);
        window.display();
    }

    return 0;
}