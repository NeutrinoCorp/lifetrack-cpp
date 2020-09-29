//
// Created by luisr on 9/28/2020.
//

#ifndef LIFETRACK_CPP_ENTITY_H
#define LIFETRACK_CPP_ENTITY_H

#include <string>
#include "../value/id.h"

class entity {
public:
    id* id{};
    explicit entity(struct id* v);

    virtual void isValid();
};


#endif //LIFETRACK_CPP_ENTITY_H
