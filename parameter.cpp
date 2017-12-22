/**********************************************************************
 * (c) Copyright by ConteDevel, DT.
 * Contact: https://www.contedevel.com/contacts
 ***********************************************************************/
#include "parameter.h"

using namespace std;

parameter::parameter(t_intervals *intervals)
    : m_rand{static_cast<long unsigned int>(time(0))},
      m_urd {0, 1.0},
      m_intervals{intervals}
{

}

parameter::~parameter()
{
}

emark parameter::mark(double x)
{
    emark mark = emark::none;
    double max_p = 0;

    for (auto i = begin(*m_intervals); i < end(*m_intervals); ++i) {
        double cur = (*i)->value(x);

        if ((cur > max_p)
                || (cur > 0 && cur == max_p && m_urd(m_rand) > 0.5)) {
            max_p = cur;
            mark = (*i)->mark();
        }
    }

    return mark;
}
