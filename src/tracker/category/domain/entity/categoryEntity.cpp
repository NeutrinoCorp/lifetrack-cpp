//
// Created by luisr on 9/28/2020.
//

#include "categoryEntity.h"

void categoryEntity::isValid() {
    entity::id->isValid();
}

categoryEntity::categoryEntity(class id *v) : entity(v) {
    v->isValid();
    categoryEntity::id = v;
}
