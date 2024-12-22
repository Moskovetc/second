#include "Hw02.hpp"
#include <iostream>


Hw02::Hw02(Point & _point1, Point & _point2)
{
    m_point1 = _point1;
    m_point2 = _point2;
}

Hw02::~Hw02()
{
    int distanceX = abs(m_point1.getX() - m_point2.getX());
    int distanceY = abs(m_point1.getY() - m_point2.getY());
    
    std::cout << "distance: " << distanceX + distanceY << std::endl;
}


int Hw02::abs(int _number)
{
    if (_number < 0)
    {
        return -_number;
    }
    return _number;
}