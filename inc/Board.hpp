#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <array>
// ����������� ����� ������
enum class TileColor
{
    White,
    Black
};

// ����������� ���� ������
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

// ����������� ������ �� �����
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
