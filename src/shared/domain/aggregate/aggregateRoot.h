//
// Created by luisr on 9/28/2020.
//

#ifndef LIFETRACK_CPP_AGGREGATEROOT_H
#define LIFETRACK_CPP_AGGREGATEROOT_H

#include "string"
#include "../entity/entity.h"

class aggregateRoot {
private:
    entity* root;

public:
    entity* getRoot();
    void setRoot(entity* v);
};

#endif //LIFETRACK_CPP_AGGREGATEROOT_H
