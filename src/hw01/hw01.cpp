#include "Hw01.hpp"
#include <math.h>



Hw01::Hw01(float value)
{
    m_value = value;
}

Hw01::~Hw01()
{
}

float Hw01::getValue()
{
    return m_value;
}

float Hw01::sqr()
{
    return m_value * m_value;
}

float Hw01::sqrt()
{
    return sqrtf(m_value);
}




