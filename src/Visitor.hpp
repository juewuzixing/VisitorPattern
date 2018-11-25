#ifndef VISITOR_H
#define VISITOR_H

#include <QDebug>

class BellTower;
class TerracottaWarriors;

// 创建访问者
class IVisitor
{
public:
    virtual ~IVisitor() {}
    // 访问者需要为每个景点都提供一个访问方法
    virtual void visit(BellTower *) = 0;
    virtual void visit(TerracottaWarriors *) = 0;
};

#endif // VISITOR_H
