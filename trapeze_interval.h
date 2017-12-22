/**********************************************************************
 * (c) Copyright by ConteDevel, DT.
 * Contact: https://www.contedevel.com/contacts
 ***********************************************************************/
#ifndef TRAPEZE_INTERVAL_H
#define TRAPEZE_INTERVAL_H

#include "interval.h"

class trapeze_interval : public interval
{
    double m_lb, m_lt, m_rt, m_rb;
public:
    trapeze_interval(double lb, double lt, double rt, double rb, emark mark);
    ~trapeze_interval();
    virtual double value(double x) override;
};

#endif // TRAPEZE_INTERVAL_H
