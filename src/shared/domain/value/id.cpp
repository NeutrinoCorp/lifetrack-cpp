//
// Created by luisr on 9/28/2020.
//

#include "id.h"

void id::set(const std::string& v) {
    const std::string& memoized = v;
    value = v;

    try {
        isValid();
    } catch (const char* msg) {
        value = memoized;
        throw msg;
    }
}

std::string id::get() {
    return value;
}

void id::isValid() {
    if (value.empty()) {
        throw "empty id value";
    }
}
