#ifndef CONCRETEELEMENT_HPP
#define CONCRETEELEMENT_HPP

#include "Element.hpp"
#include "Visitor.hpp"
#include <QDebug>

class BellTower : public IPlace
{
public:
    virtual void accept(IVisitor *visitor) override;
};

class TerracottaWarriors : public IPlace
{
public:
    virtual void accept(IVisitor *visitor) override;
};

#endif // CONCRETEELEMENT_HPP
