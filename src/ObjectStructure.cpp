#include "ObjectStructure.hpp"

void City::attach(IPlace *place) {
    mPlace.push_back(place);
}

void City::detach(IPlace *place) {
    mPlace.remove(place);
}

void City::accept(IVisitor *visitor) {
    for (std::list<IPlace*>::iterator it = mPlace.begin(); it != mPlace.end(); ++it) {
        (*it)->accept(visitor);
    }
}
