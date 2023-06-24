#include <SFML/Graphics.hpp>
namespace chess{
    class Figures{
    private:
        // 0 - чёрные, 1 - белые
        bool m_color;
        short m_x;
        short m_y;
        char type;
    protected:
        sf::Sprite m_visual;
    public:
        Figures(bool& color, short& x, short& y){
            m_color = color;
            m_x = x;
            m_y = y;
            m_visual.setPosition(m_x,m_y);
        }
        ~Figures() {};
        short Get_x(){
            return m_x;
        }
        void Set_x(short& x){
            m_x = x;
        }
        short Get_y(){
            return m_y;
        }
        void Set_y(short& y){
            m_y = y;
        }
        bool Get_color(){
            return m_color;
        }
        sf::Sprite Get_piece(){
            return m_visual;
        }
    };

    class Bishop: public Figures{
    private:
        sf::Texture m_image;
    public:
        Bishop(bool color, short x, short y) : Figures(color, x, y){
            if (color){
                m_image.loadFromFile("../res/bishop1.png");
            }
            else {
                m_image.loadFromFile("../res/bishop.png");
            }
            m_visual.setTexture(m_image);
            m_visual.setScale(1,1);
    }
    };
    class Horse: public Figures{
    private:
        sf::Texture m_image;
    public:
        Horse(bool color, short x, short y) : Figures(color, x, y){
            if (color){
                m_image.loadFromFile("../res/horse1.png");
            }
            else {
                m_image.loadFromFile("../res/horse.png");
            }
            m_visual.setTexture(m_image);
            m_visual.setScale(1,1);
        }
    };
    class Queen: public Figures{
    private:
        sf::Texture m_image;
    public:
        Queen(bool color, short x, short y) : Figures(color, x, y){
            if (color){
                m_image.loadFromFile("../res/queen1.png");
            }
            else {
                m_image.loadFromFile("../res/queen.png");
            }
            m_visual.setTexture(m_image);
            m_visual.setScale(1,1);
        }
    };
    class Rook: public Figures{
    private:
        sf::Texture m_image;
    public:
        Rook(bool color, short x, short y) : Figures(color, x, y){
            if (color){
                m_image.loadFromFile("../res/rook1.png");
            }
            else {
                m_image.loadFromFile("../res/rook.png");
            }
            m_visual.setTexture(m_image);
            m_visual.setScale(1,1);
        }
    };
    class King: public Figures{
    private:
        sf::Texture m_image;
    public:
        King(bool color, short x, short y) : Figures(color, x, y){
            if (color){
                m_image.loadFromFile("../res/king1.png");
            }
            else {
                m_image.loadFromFile("../res/king.png");
            }
            m_visual.setTexture(m_image);
            m_visual.setScale(1,1);

        }
    };
}


