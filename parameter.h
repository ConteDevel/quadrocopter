/**********************************************************************
 * (c) Copyright by ConteDevel, DT.
 * Contact: https://www.contedevel.com/contacts
 ***********************************************************************/
#ifndef PARAMETER_H
#define PARAMETER_H

#include <random>
#include <ctime>
#include <memory>
#include <vector>
#include "interval.h"
#include "triangle_interval.h"
#include "trapeze_interval.h"

typedef std::vector<interval *> t_intervals;

class parameter
{
    std::mt19937 m_rand;
    std::uniform_real_distribution<double> m_urd;
    t_intervals *m_intervals;
public:
    parameter(t_intervals *intervals);
    ~parameter();
    emark mark(double x);
};

#endif // PARAMETER_H
