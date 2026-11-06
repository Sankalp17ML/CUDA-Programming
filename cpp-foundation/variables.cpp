#include <iostream>
#include <string>

int main(){
    int age = 21;
    float temperature = 36.5f;
    double pi = 3.1415926535;
    char grade = 'A';
    bool is_learning_cuda = true;
    std::string name = "Sankalp";

    std::cout << "Age: " << age << std::endl;
    std::cout << "Temperature: " << temperature << std::endl;
    std::cout << "Pi: " << pi << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Learning CUDA: " << is_learning_cuda << std::endl;
    std::cout << "Name: " << name << std::endl;

    return 0;
}