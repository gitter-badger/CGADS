#SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})

include_directories(${PROJECT_SOURCE_DIR}/include)
ADD_EXECUTABLE( UnitTest.run
    gtest_main.cc
    TLinearList.cc )
TARGET_LINK_LIBRARIES(UnitTest.run gtest pthread)
