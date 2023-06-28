#include "Board.hpp"

namespace chess {
    Board::Board() {
        // Инициализация доски и её клеток
        float size = 100.f; // Размер одной клетки
        bool isWhite = true; // Флаг для чередования цветов клеток

        boardArray.setPrimitiveType(sf::Quads);
        boardArray.resize(64 * 4); // 4 вершины для каждой клетки

        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                int index = (i * 8 + j) * 4;
                sf::Vertex* quad = &boardArray[index];

                float left = j * size+200;
                float top = i * size+100;

                quad[0].position = sf::Vector2f(left, top);
                quad[1].position = sf::Vector2f(left + size, top);
                quad[2].position = sf::Vector2f(left + size, top + size);
                quad[3].position = sf::Vector2f(left, top + size);

                if (isWhite) {
                    quad[0].color = sf::Color::White;
                    quad[1].color = sf::Color::White;
                    quad[2].color = sf::Color::White;
                    quad[3].color = sf::Color::White;
                }
                else {
                    quad[0].color = sf::Color::Black;
                    quad[1].color = sf::Color::Black;
                    quad[2].color = sf::Color::Black;
                    quad[3].color = sf::Color::Black;
                }

                isWhite = !isWhite;
            }
            isWhite = !isWhite;
        }
    }

    void Board::draw(sf::RenderWindow& window) {
        // Отрисовка доски
        window.draw(boardArray);
    }
}






