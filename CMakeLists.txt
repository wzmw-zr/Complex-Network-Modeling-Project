cmake_minimum_required(VERSION 3.10)

project(ComplexNetwork VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
# set(CMAKE_AUTOUIC_SEARCH_PATHS ${PROJECT_SOURCE_DIR}/ui)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)
# find_package(Threads)
find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(NetWork STATIC ${PROJECT_SOURCE_DIR}/src/NetWork.cpp)
target_include_directories(NetWork
    PUBLIC
        ${PROJECT_SOURCE_DIR}/includes
)
target_link_libraries(NetWork
    PUBLIC
        ${PYTHON_LIBRARIES}
)

add_library(AttackWindow
    STATIC
    # ${PROJECT_SOURCE_DIR}/src/attack_ui.cpp
    ${PROJECT_SOURCE_DIR}/attack_ui.cpp
)
target_include_directories(AttackWindow
    PUBLIC
        # ${PROJECT_SOURCE_DIR}/includes
        ${PROJECT_SOURCE_DIR}
)
target_link_libraries(AttackWindow Qt5::Widgets Qt5::Core Qt5::Gui NetWork)

add_library(MainWindow 
    STATIC 
        # ${PROJECT_SOURCE_DIR}/src/mainwindow.cpp
        ${PROJECT_SOURCE_DIR}/mainwindow.cpp
)

target_link_libraries(MainWindow AttackWindow)

target_include_directories(MainWindow
    PUBLIC
        ${PROJECT_SOURCE_DIR}/includes
)

add_executable(app 
    ${PROJECT_SOURCE_DIR}/src/main.cpp
    ${PROJECT_SOURCE_DIR}/mainwindow.ui
    ${PROJECT_SOURCE_DIR}/qdarkstyle/light/style.qrc
)

# target_link_libraries(app PUBLIC NetWork MainWindow Qt5::Widgets Qt5::Core Qt5::Gui ${CMAKE_THREAD_LIBS_INIT})
target_link_libraries(app PUBLIC NetWork MainWindow Qt5::Widgets Qt5::Core Qt5::Gui)
