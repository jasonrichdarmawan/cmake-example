add_executable(demo2 demo2.cpp SubDemo/subdemo.cpp)

include_directories(/usr/local/include)
target_link_libraries(demo2 -L/usr/local/lib -lHello)