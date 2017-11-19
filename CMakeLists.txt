cmake_minimum_required(VERSION 2.8)
project( CGADS )

set(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -std=c++11 -Wall")

include_directories( ${PROJECT_SOURCE_DIR}/include )

aux_source_directory( ${PROJECT_SOURCE_DIR}/src SRC_LISTS )

#add_library(CGADS SHARED ${SRC_LISTS} )
add_executable(CGADS ${SRC_LISTS})


################ google test ################
enable_testing()
find_package(GTest REQUIRED)
if(GTest_FOUND)
    include_directories(${GTEST_INCLUDE_DIRS})
endif()
ADD_SUBDIRECTORY(UnitTest)
ADD_TEST(NAME ./UnitTest/UnitTest.run COMMAND ./UnitTest/UnitTest.run)
