#include <iostream>
#include <vector>

template<typename T>
T qrt(T a) {
    return a * a;
}

template<typename T>
std::vector<T> qrt(std::vector<T> a) {

    std::vector<T> b(a);
    for (int i{ 0 }; i < a.size(); i++) {
        b[i] = b[i] * b[i];
    }
    return b;
}


int main()
{
    int originalData = 4;
    std::cout << "[IN]: " << originalData << std::endl;
    int data = qrt(originalData);
    std::cout << "[OUT]: " << data << std::endl;


    std::vector<int> originalDataVector = { -1, 4, 8 };
    std::cout << "[IN]: ";
    for (int i{ 0 }; i < originalDataVector.size(); i++) {
        std::cout << originalDataVector[i] << " ";
    };
    std::cout << std::endl;

    std::vector<int>dataVector = qrt(originalDataVector);
    std::cout << "[OUT]: ";
    for (int i{ 0 }; i < dataVector.size(); i++) {
        std::cout << dataVector[i] << " ";
    };
}