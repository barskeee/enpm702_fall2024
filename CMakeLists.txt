cmake_minimum_required(VERSION 3.20.0)
project(rm VERSION 0.1.0)

# Compilation flags
add_compile_options(-Wall)

# Add executable
add_executable(rm rm/src/rm.cpp)

# add_custom_command(TARGET rm POST_BUILD
#     COMMAND ./rm | c++filt -t
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#     COMMENT "Resolve name mangling"
#     VERBATIM
# )

# add_custom_command(TARGET rm POST_BUILD
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./rm
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#     COMMENT "Running Valgrind after building rm"
#     VERBATIM
# )

add_custom_target(demangle ALL
    COMMAND COMMAND ./rm | c++filt -t
    DEPENDS rm
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_target(run_valgrind ALL
    COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./rm
    DEPENDS rm
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)


# Set C++ standard to C++17
set_property(TARGET rm PROPERTY CXX_STANDARD 17)
