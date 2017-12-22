/**********************************************************************
 * (c) Copyright by ConteDevel, DT.
 * Contact: https://www.contedevel.com/contacts
 ***********************************************************************/
#ifndef INTERVAL_H
#define INTERVAL_H

#include <emark.h>

class interval
{
    emark m_mark;
public:
    interval(emark mark);
    virtual ~interval();
    virtual double value(double x);
    emark mark();
};

#endif // INTERVAL_H
