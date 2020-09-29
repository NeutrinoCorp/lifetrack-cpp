//
// Created by luisr on 9/28/2020.
//

#include "aggregateRoot.h"

entity* aggregateRoot::getRoot() {
    return root;
}

void aggregateRoot::setRoot(entity* v) {
    if (v == nullptr) {
        throw "empty root entity";
    }

    root = v;
}
