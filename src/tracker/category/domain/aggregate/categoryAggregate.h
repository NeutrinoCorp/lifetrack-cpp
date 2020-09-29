//
// Created by luisr on 9/28/2020.
//

#ifndef LIFETRACK_CPP_CATEGORYAGGREGATE_H
#define LIFETRACK_CPP_CATEGORYAGGREGATE_H

#include "../../../../shared/domain/aggregate/aggregateRoot.h"

class categoryAggregate: public aggregateRoot {
    void isValid();
};


#endif //LIFETRACK_CPP_CATEGORYAGGREGATE_H
