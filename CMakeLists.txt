cmake_minimum_required(VERSION 3.17)
project(lifetrack_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(lifetrack_cpp main.cpp src/shared/domain/aggregate/aggregateRoot.cpp src/shared/domain/aggregate/aggregateRoot.h src/shared/domain/entity/entity.cpp src/shared/domain/entity/entity.h src/shared/domain/value/id.cpp src/shared/domain/value/id.h src/tracker/category/domain/aggregate/categoryAggregate.cpp src/tracker/category/domain/aggregate/categoryAggregate.h src/shared/domain/event/domainEvent.cpp src/shared/domain/event/domainEvent.h src/tracker/category/domain/entity/categoryEntity.cpp src/tracker/category/domain/entity/categoryEntity.h)