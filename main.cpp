#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include "inc/log.hpp"
#include <ctime>
#include "inc/game.hpp"

#define N 10
int main() {
    // 0 - пусто, 1 - Короли, 2 - Ферзи, 3 - Ладьи, 4 - Слоны, 5 - Кони, 6 - пешки
    short situation[8][8] = {{-3,-5,-4,-1,-2,-4,-5,-3},\
    {-6,-6,-6,-6,-6,-6,-6,-6},\
    {0,0,0,0,0,0,0,0},\
    {0,0,0,0,0,0,0,0},\
    {0,0,0,0,0,0,0,0},\
    {0,0,0,0,0,0,0,0},\
    {6,6,6,6,6,6,6,6},\
    {3,5,4,1,2,4,5,3}};
    chess::can_move(situation);
    Log::SetLogPath("log.txt");
    Log::Write(LogLevel::INFO, "Hi, world!");
    Log::Write(LogLevel::ERROR, "No  errors");
    Log::Write(LogLevel::INFO, "Congrats");
    Log::Write(LogLevel::DEBUG, "Program is ended");

    sf::RenderWindow window(sf::VideoMode(2560, 1600), "The Chess");
    sf::Texture background;
    background.loadFromFile("../res/images/board1.jpg");
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
