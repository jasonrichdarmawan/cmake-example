#include <hello.hpp>
#include <SubHello/subhello.hpp>
// #include <SubDemo/subdemo.hpp>

int main()
{
    Hello::PrintHello();
    SubHello::PrintSubHello();

    // SubDemo::PrintSubDemo();
    return 0;
}