#ifndef CONCRETEVISITOR_HPP
#define CONCRETEVISITOR_HPP

#include "Visitor.hpp"

// 游客
class Tourist : public IVisitor
{
public:
    virtual void visit(BellTower *) override {
        qWarning() << "I'm visiting the Bell Tower!";
    }
    virtual void visit(TerracottaWarriors  *) override {
        qWarning() << "I'm visiting the Terracotta Warriors!";
    }
};

// 清洁工
class Cleaner : public IVisitor
{
public:
    virtual void visit(BellTower *) override {
        qWarning() << "I'm cleaning up the garbage of Bell Tower!";
    }
    virtual void visit(TerracottaWarriors  *) override {
        qWarning() << "I'm cleaning up the garbage of Terracotta Warriors!";
    }
};
#endif // CONCRETEVISITOR_HPP
