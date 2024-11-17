add_library(calculator calculator/calculator.cpp)
target_include_directories(calculator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(hw01 hw01/Hw01.cpp)
target_include_directories(hw01 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# add_subdirectory(hw01)