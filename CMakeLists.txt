cmake_minimum_required(VERSION 3.10)

project(ComplexNetwork VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(NetWork STATIC ${PROJECT_SOURCE_DIR}/src/NetWork.cpp)
target_include_directories(NetWork
    PUBLIC
        ${PROJECT_SOURCE_DIR}/includes
)
add_executable(app ${PROJECT_SOURCE_DIR}/src/main.cpp)
target_link_libraries(app PUBLIC NetWork)


# set(SOURCES ${PROJECT_SOURCE_DIR}/src/NetWork.cpp ${PROJECT_SOURCE_DIR}/src/main.cpp)
# add_executable(app ${SOURCES})
#target_include_directories(app 
    # PUBLIC 
        # ${PROJECT_SOURCE_DIR}/includes)
