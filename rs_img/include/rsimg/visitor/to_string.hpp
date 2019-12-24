#ifndef TO_STRING_VISITOR_H
#define TO_STRING_VISITOR_H

#include "../transform.hpp"

namespace rs::visitor {

class toString : public TransformVisitor {
public:
    toString(const rs::Transform &t) { t.accept(*this); }
    std::string result() { return m_result_str; }
    operator std::string() { return this->result(); }
    RS_DECLARE_VISITORS
private:
    std::string m_result_str;
};

} // ns rs

#endif
