#include "ConcreteElement.hpp"
#include "ObjectStructure.hpp"
#include "ConcreteVisitor.hpp"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p) { delete(p); (p) = NULL; }}
#endif

int main() {
    City *city = new City();

    // 景点
    IPlace *bellTower = new BellTower();
    IPlace *warriors = new TerracottaWarriors();
    // 访问者
    IVisitor *tourist = new Tourist();
    IVisitor *cleaner = new Cleaner();

    // 添加景点
    city->attach(bellTower);
    city->attach(warriors);

    // 接受访问
    city->accept(tourist);
    city->accept(cleaner);

    SAFE_DELETE(cleaner);
    SAFE_DELETE(tourist);
    SAFE_DELETE(warriors);
    SAFE_DELETE(bellTower);
    SAFE_DELETE(city);
    getchar();
    return 0;
}
