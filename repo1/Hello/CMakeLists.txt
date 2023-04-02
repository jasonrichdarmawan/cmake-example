find_package(OpenCV REQUIRED)
# prevent opencv2/core.hpp: No such file or directory
include_directories(${OpenCV_INCLUDE_DIRS})

# Create a library called "Hello" which includes the source file "hello.cxx".
# The extension is already found. Any number of sources could be listed here.
add_library (Hello hello.cpp)

# Make sure the compiler can find include files for our Hello library
# when other libraries or executables link to Hello
target_include_directories (Hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Make sure that any executables or other libraries link to Hello
# also have access to the OpenCV libraries.
target_link_libraries(Hello ${OpenCV_LIBS})

install(TARGETS Hello
        DESTINATION lib)
install(FILES hello.hpp 
        DESTINATION include)