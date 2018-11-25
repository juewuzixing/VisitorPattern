#ifndef OBJECTSTRUCTURE_HPP
#define OBJECTSTRUCTURE_HPP

#include "Element.hpp"
#include <list>

// 城市
class City
{
public:
    void attach(IPlace *place);
    void detach(IPlace *place);

    void accept(IVisitor *visitor);

private:
    std::list<IPlace *> mPlace;
};

#endif // OBJECTSTRUCTURE_HPP
