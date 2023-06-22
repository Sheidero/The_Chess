#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(2560, 1600), "The Chess");
    sf::Texture background;
    background.loadFromFile("../res/images/board1.png");
    sf::Sprite backgrounds(background);
    backgrounds.setScale(3,3);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(backgrounds);
        window.display();
    }

    return 0;
}
