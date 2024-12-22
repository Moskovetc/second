#pragma once

class Point
{
    private:
        int m_x;
        int m_y;
    public:
        Point();
        Point(int _x, int _y);

        int getX();
        int getY();

        ~Point();
};