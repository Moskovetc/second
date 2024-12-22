#include "Point.hpp"



Point::Point()
{
    m_x = 0;
    m_y = 0;
}

Point::Point(int _x, int _y)
{
    m_x = _x;
    m_y = _y;
}

int Point::getX()
{
    return m_x;
}

int Point::getY()
{
    return m_y;
}

Point::~Point()
{
}