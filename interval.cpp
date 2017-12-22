/**********************************************************************
 * (c) Copyright by ConteDevel, DT.
 * Contact: https://www.contedevel.com/contacts
 ***********************************************************************/
#include "interval.h"

interval::interval(emark mark)
    : m_mark{mark}
{

}

interval::~interval()
{

}

double interval::value(double x)
{
    return 0;
}

emark interval::mark()
{
    return m_mark;
}
