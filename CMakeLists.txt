cmake_minimum_required(VERSION 2.8)
project(CppUnitLite)

set(PROJ_NAME CppUnitLite)


file(GLOB cppunitlite_headers "cpp/*.h")
file(GLOB cppunitlite_src "cpp/*.cpp")

add_library(${PROJ_NAME} STATIC ${cppunitlite_src} ${cppunitlite_headers})

install(TARGETS ${PROJ_NAME} 
	EXPORT mylib-targets
	ARCHIVE DESTINATION /usr/lib)
install(FILES ${cppunitlite_headers} DESTINATION /usr/include/${PROJ_NAME} )

#===============================================================================
install(EXPORT mylib-targets
        NAMESPACE CppUnitLite::
	FILE cppunitlite-config.cmake
	DESTINATION /usr/lib/cmake/CppUnitLite)


