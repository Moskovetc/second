set(TARGET_NAME run_tests)

# add test sources here ... 
add_executable(${TARGET_NAME} 
    runner_tests.cpp 
    ../src/calculator/tests/catch2_calculator_ops.cpp 
    ../src/hw01/tests/catch2_hw01_ops.cpp
)
# Catch2 cmake helper functions
include(${PROJECT_SOURCE_DIR}/contrib/Catch2/extras/Catch.cmake)
target_link_libraries(${TARGET_NAME} PRIVATE calculator hw01 Catch2::Catch2WithMain)
target_include_directories(${TARGET_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/contrib/FakeIt/single_header/catch)

# ctest -VV
include(CTest)
catch_discover_tests(${TARGET_NAME} EXTRA_ARGS -r console --abort)
