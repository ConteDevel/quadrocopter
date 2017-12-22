/**********************************************************************
 * (c) Copyright by ConteDevel, DT.
 * Contact: https://www.contedevel.com/contacts
 ***********************************************************************/
#ifndef RULE_H
#define RULE_H

#include <memory>
#include <vector>
#include "emark.h"

typedef std::vector<emark> marks_t;

class rule
{
    std::unique_ptr<marks_t> m_conditions;
    std::unique_ptr<marks_t> m_outputs;
public:
    rule(const marks_t &&conditions, const marks_t &&outputs);
    ~rule();
    bool check(marks_t &marks, marks_t &outputs);
};

#endif // RULE_H
