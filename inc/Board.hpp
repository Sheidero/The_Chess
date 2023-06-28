#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <array>
// Определение цвета клетки
enum class TileColor
{
    White,
    Black
};

// Определение типа фигуры
enum class PieceType
{
    None,
    Pawn,
    Knight,
    Bishop,
    Rook,
    Queen,
    King
};

// Определение клетки на доске
struct Tile
{
    TileColor color;
    PieceType piece;
};

namespace chess {
	class Board
	{
    private:
        sf::VertexArray boardArray;
        float squareSize;
    public:
        Board();
        void draw(sf::RenderWindow& window);

    
	};
}
