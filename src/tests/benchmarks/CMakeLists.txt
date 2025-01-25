set_source_group(
    run
    benchmarks_main.cpp
)
set_source_group(
    tests
    binary_search_benchmarks.cpp
)
set_source_group(
    nanobench
    nanobench.cpp
    nanobench.h
)
add_executable(
    benchmarks
    ${run}
    ${tests}
    ${nanobench}
)

target_compile_definitions(
    benchmarks
    PRIVATE
)

target_link_libraries(
    unit_tests
    PRIVATE
    ultra_strict_compiler_flags
    core
    Catch2::Catch2
)

set_target_properties(benchmarks PROPERTIES FOLDER tests)