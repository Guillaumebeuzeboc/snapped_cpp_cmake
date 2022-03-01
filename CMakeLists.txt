cmake_minimum_required(VERSION 3.16)
project(BasicCppSnapedApp)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)

find_package(Boost REQUIRED COMPONENTS filesystem)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} PRIVATE ${Boost_LIBRARIES})
target_include_directories(${PROJECT_NAME} PRIVATE ${Boost_INCLUDE_DIRS})

install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION bin/
)
