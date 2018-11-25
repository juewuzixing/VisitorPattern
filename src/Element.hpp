#ifndef ELEMENT_HPP
#define ELEMENT_HPP

// 创建元素

class IVisitor;
// 地方
class IPlace
{
public:
    virtual ~IPlace() {}
    virtual void accept(IVisitor *visitor) = 0;
};

#endif // ELEMENT_HPP
