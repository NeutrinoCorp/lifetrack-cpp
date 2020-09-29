#include <iostream>
#include "src/shared/domain/value/id.h"
#include "src/tracker/category/domain/entity/categoryEntity.h"
#include "src/tracker/category/domain/aggregate/categoryAggregate.h"

int main() {
    try {
        categoryAggregate c;
        id idV;
        idV.set("123");
        categoryEntity e(&idV);

        c.setRoot(reinterpret_cast<entity *>(&e));

        std::cout << c.getRoot()->id->get() << std::endl;

        c.getRoot()->id->set("abc");

        std::cout << c.getRoot()->id->get() << std::endl;

    } catch (const char* msg) {
        std::cout << msg << std::endl;
    }
    return 0;
}
