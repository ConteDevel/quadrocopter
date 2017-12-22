/**********************************************************************
 * (c) Copyright by ConteDevel, DT.
 * Contact: https://www.contedevel.com/contacts
 ***********************************************************************/
#include "triangle_interval.h"

triangle_interval::triangle_interval(double width, double center, emark mark)
    : interval{mark}, m_width{width}, m_center{center}
{

}

triangle_interval::~triangle_interval()
{

}

double triangle_interval::value(double x)
{
    double result = x <= m_center ?
                (2 * (m_center - x) / m_width) :
                (2 * (x - m_center) / m_width);

    return result > 1 ? 0 : 1 - result;
}
