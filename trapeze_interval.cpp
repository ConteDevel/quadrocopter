/**********************************************************************
 * (c) Copyright by ConteDevel, DT.
 * Contact: https://www.contedevel.com/contacts
 ***********************************************************************/
#include "trapeze_interval.h"

trapeze_interval::trapeze_interval(double lb, double lt,
                                   double rt, double rb, emark mark)
    : interval{mark}, m_lb{lb}, m_lt{lt}, m_rt{rt}, m_rb{rb}
{

}

trapeze_interval::~trapeze_interval()
{

}

double trapeze_interval::value(double x)
{
    double result = 0;

    if (x < m_lt) {

        if (m_lt == m_lb) {
            result = 1;
        } else {
            result = 2 * (m_lt - x) / (m_lt - m_lb);
        }
    } else if (x > m_rt) {

        if (m_rt == m_rb) {
            result = 1;
        } else {
            result = 2 * (x - m_rt) / (m_rb - m_rt);
        }
    }

    return result > 1 ? 0 : 1 - result;
}
