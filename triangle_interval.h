/**********************************************************************
 * (c) Copyright by ConteDevel, DT.
 * Contact: https://www.contedevel.com/contacts
 ***********************************************************************/
#ifndef TRIANGLE_INTERVAL_H
#define TRIANGLE_INTERVAL_H

#include "interval.h"

class triangle_interval : public interval
{
    double m_width;
    double m_center;
public:
    triangle_interval(double width, double center, emark mark);
    ~triangle_interval();
    virtual double value(double x) override;
};

#endif // TRIANGLE_INTERVAL_H
