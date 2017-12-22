/**********************************************************************
 * (c) Copyright by ConteDevel, DT.
 * Contact: https://www.contedevel.com/contacts
 ***********************************************************************/
#include "rule.h"

rule::rule(const marks_t &&conditions, const marks_t &&outputs)
    : m_conditions{std::make_unique<marks_t>(std::move(conditions))},
      m_outputs{std::make_unique<marks_t>(std::move(outputs))}
{

}

rule::~rule()
{
    m_conditions->clear();
}

bool rule::check(marks_t &marks, marks_t &outputs)
{
    if (marks.size() != m_conditions->size()
            || outputs.size() != m_outputs->size()) {
        return false;
    }

    for (auto s = begin(*m_conditions), d = begin(marks);
         s != end(*m_conditions); ++s, ++d) {

        if ((*s) != (*d)) {
            return false;
        }
    }

    for (auto s = begin(*m_outputs), d = begin(outputs);
         s != end(*m_outputs); ++s, ++d) {
        *d = (*s);
    }

    return true;
}
