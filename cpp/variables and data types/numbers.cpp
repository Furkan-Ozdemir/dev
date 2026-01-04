#include <iostream>
#include <iomanip>
int main()
{
    int number1 = 15;
    int number2 = 017;
    int number3 = 0x0f;
    int number4 = 0b00001111;

    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;
    std::cout << number4 << std::endl;

    int a{2};
    std::cout << a << std::endl;

    int garbage_value{}; // random if not initialized
    std::cout << garbage_value << std::endl;
    std::cout << "Size of :" << sizeof(garbage_value) << std::endl;

    signed int negative_value{-300};
    // unsigned int negative_value{-300};
    long l_var{88};
    std::cout << "l var : " << sizeof(l_var) << std::endl;

    std::cout << "negative value is : " << negative_value << std::endl;

    std::cout << 0.0 / 0.0 << std::endl;
    // std::cout << std::

    float f1{1.12345678901234567890f};
    double f2{1.12345678901234567890};
    long double f3{1.12345678901234567890L};
    std::cout << std::setprecision(20);
    std::cout << "f1 : " << f1 << std::endl;
    std::cout << "f2 : " << f2 << std::endl;
    std::cout << "f3 : " << f3 << std::endl;
    std::cout << "f1 : " << sizeof(f1) << std::endl;
    std::cout << "f2 : " << sizeof(f2) << std::endl;
    std::cout << "f3 : " << sizeof(f3) << std::endl;

    return 0;
}