//
// Created by luisr on 9/28/2020.
//

#ifndef LIFETRACK_CPP_ID_H
#define LIFETRACK_CPP_ID_H


#include <string>

class id {
private:
    std::string value;
public:
    void set(const std::string& v);
    std::string get();
    void isValid();
};


#endif //LIFETRACK_CPP_ID_H
