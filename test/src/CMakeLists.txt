#INCLUDE_DIRECTORIES(/usr/local/include/CppUnitLite)
find_package(CppUnitLite REQUIRED)
ADD_EXECUTABLE(main testmain.cpp)
TARGET_LINK_LIBRARIES(main CppUnitLite)
