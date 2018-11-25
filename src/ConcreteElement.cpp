#include "ConcreteElement.hpp"

void BellTower::accept(IVisitor *visitor) {
    qWarning() << "Bell Tower is accepting visitor.";
    visitor->visit(this);
}

void TerracottaWarriors::accept(IVisitor *visitor) {
    qWarning() << "Terracotta Warriors is accepting visitor.";
    visitor->visit(this);
}
