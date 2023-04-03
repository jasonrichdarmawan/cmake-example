#include "hello.hpp"
#include <iostream>
#include <opencv2/core.hpp>
#include "SubHello/subhello.hpp"

void Hello::PrintHello()
{
    std::cout << "Hello" << std::endl;
    SubHello::PrintSubHello();

    cv::Rect rect{0, 0, 0, 0};
}