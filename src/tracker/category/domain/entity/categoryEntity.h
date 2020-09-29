//
// Created by luisr on 9/28/2020.
//

#ifndef LIFETRACK_CPP_CATEGORYAGGREGATE_H
#define LIFETRACK_CPP_CATEGORY_H

#include "../../../../shared/domain/entity/entity.h"

class categoryEntity: public entity {
public:
    explicit categoryEntity(class id *v);
    void isValid() override;
};

#endif //LIFETRACK_CPP_CATEGORYAGGREGATE_H
