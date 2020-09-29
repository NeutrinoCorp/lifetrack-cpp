//
// Created by luisr on 9/28/2020.
//

#ifndef LIFETRACK_CPP_DOMAINEVENT_H
#define LIFETRACK_CPP_DOMAINEVENT_H

#include "string"

class domainEvent {
    std::string correlationID;
    std::string service;
    std::string action;
};


#endif //LIFETRACK_CPP_DOMAINEVENT_H
