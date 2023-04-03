#include "demo.hpp"
#include "demo_b.hpp"
#include "SubHello/subhello.hpp"

int main()
{
    Demo_B demo_b;
    demo_b.PrintHello();

    SubHello::PrintSubHello();

    return 0;
}