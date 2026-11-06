
#include <iostream>

int main() {

    int a = 20;
    int b = 6;

    std::cout << "Addition: " << a + b << std::endl;
    std::cout << "Subtraction: " << a - b << std::endl;
    std::cout << "Multiplication: " << a * b << std::endl;
    std::cout << "Division: " << a / b << std::endl;
    std::cout << "Remainder: " << a % b << std::endl;

    a++;

    std::cout << "After increment: " << a << std::endl;

    float result = static_cast<float>(a) / b;

    std::cout << "Float division: " << result << std::endl;

    return 0;
}
