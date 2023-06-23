namespace chess{
    class Figures{
    private:
        // 0 - чёрные, 1 - белые
        bool m_color;
        short m_x;
        short m_y;
    public:
        Figures(bool color, short x, short y){
            m_color = color;

        }
    };
}


