include(FetchCatch2)

set(TARGET_NAME run_tests)

# add test sources here ... 
add_executable(${TARGET_NAME} runner_tests.cpp)
target_link_libraries(run_tests PRIVATE calculator Catch2::Catch2WithMain)
# ctest -VV
include(CTest)
include(Catch)
catch_discover_tests(${TARGET_NAME} EXTRA_ARGS -r console --abort)
