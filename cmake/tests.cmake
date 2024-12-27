# tests
enable_testing()
# Catch2 cmake helper functions
set(TARGET_NAME run_tests)

# add test sources here ... 
add_executable(${TARGET_NAME}
    ../src/calculator/tests/catch2_calculator_ops.cpp
    ../src/hw01/tests/catch2_hw01_ops.cpp
    ../src/hw02/tests/catch2_hw02.cpp
)
# Catch2 cmake helper functions
include(
    ${PROJECT_SOURCE_DIR}/contrib/Catch2/extras/Catch.cmake
    ${PROJECT_SOURCE_DIR}/contrib/Catch2/extras/CatchAddTests.cmake
)
target_include_directories(${TARGET_NAME} PRIVATE
    ${PROJECT_SOURCE_DIR}/contrib/Catch2
    ${PROJECT_SOURCE_DIR}/contrib/FakeIt/single_header/catch
)
target_link_libraries(${TARGET_NAME} PRIVATE
    Catch2::Catch2WithMain
    calculator
    hw01
    hw02
)

# ctest -VV
include(CTest)
catch_discover_tests(${TARGET_NAME})
