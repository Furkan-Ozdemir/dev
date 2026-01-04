#include <iostream>

int main()
{
    bool red_light{true};
    bool green_light{false};

    if (red_light)
        std::cout << "Stop! " << red_light << std::endl;
    else
        std::cout << "Go! " << green_light << std::endl;

    std::cout << std::endl;
    std::cout << std::boolalpha;

    std::cout << "Go! " << green_light << std::endl;
    std::cout << "Stop! " << red_light << std::endl;

    return 0;
}