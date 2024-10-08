cmake_minimum_required(VERSION 3.20.0)
project(lecture6 VERSION 0.1.0)

include_directories(lecture6/include) # so that program can find header
# Compilation flags
add_compile_options(-Wall)

# Add executable
add_executable(lecture6 lecture6/src/lecture6.cpp)


# add_custom_command(TARGET rm POST_BUILD
#     COMMAND ./rm | c++filt -t
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#     COMMENT "Resolve name mangling"
#     VERBATIM
# )

# add_custom_target(demangle ALL
#     COMMAND ./lecture3 | c++filt -t
#     DEPENDS lecture3
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# )

# add_custom_command(TARGET lecture3 POST_BUILD
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./lecture3
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#     COMMENT "Running Valgrind after building rm"
#     VERBATIM
# )


# add_custom_target(run_valgrind ALL
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./rm
#     DEPENDS lecture6
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# )


# Set C++ standard to C++17
set_property(TARGET lecture6 PROPERTY CXX_STANDARD 17)

