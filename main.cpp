/**********************************************************************
 * (c) Copyright by ConteDevel, DT.
 * Contact: https://www.contedevel.com/contacts
 ***********************************************************************/
#include <iostream>
#include "parameter.h"

const char *to_str(emark mark) {

    switch (mark) {
    case emark::high_neg:
        return "high_neg";
    case emark::low_neg:
        return "low_neg";
    case emark::zero:
        return "zero";
    case emark::low_pos:
        return "low_pos";
    case emark::high_pos:
        return "high_pos";
    default:
        return "none";
    }
}

void print(parameter *p, double value) {
    std::cout << "Value: " << value
              << " Mark: " << to_str(p->mark(value))
              << std::endl;
}

int main()
{
    t_intervals angle_intervals {
        new trapeze_interval(-45, -45, -30, -15, emark::high_neg),
        new triangle_interval(30, -15, emark::low_neg),
        new triangle_interval(30, 0, emark::zero),
        new triangle_interval(30, 15, emark::low_pos),
        new trapeze_interval(15, 30, 45, 45, emark::high_pos)
    };
    t_intervals speed_intervals {
        new trapeze_interval(-9, -9, -6, -3, emark::high_neg),
        new triangle_interval(6, -3, emark::low_neg),
        new triangle_interval(6, 0, emark::zero),
        new triangle_interval(6, 3, emark::low_pos),
        new trapeze_interval(3, 6, 9, 9, emark::high_pos)
    };
    parameter angle_x(&angle_intervals);
    parameter angle_y(&angle_intervals);
    parameter speed(&speed_intervals);

    print(&angle_x, 5);
    print(&angle_x, 22.5);
    print(&angle_x, 50);
    print(&angle_x, -45);
    print(&angle_x, -10);

    return 0;
}
