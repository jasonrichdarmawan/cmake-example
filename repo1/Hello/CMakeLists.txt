# Create a library called "Hello" which includes the source file "hello.cxx".
# The extension is already found. Any number of sources could be listed here.
add_library (Hello hello.cpp)

# Make sure the compiler can find include files for our Hello library
# when other libraries or executables link to Hello
target_include_directories (Hello PUBLIC /usr/local/include)

install(TARGETS Hello
        DESTINATION lib)
install(FILES hello.hpp 
        DESTINATION include)