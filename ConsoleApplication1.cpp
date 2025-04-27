#include <iostream>
#include <vector>

template<typename T>
void qrt(T& a) {
    a = a * a;
}

template<typename T>
void qrt(std::vector<T>& a) {
    for (int i{ 0 }; i < a.size(); i++) {
          a[i] = a[i] * a[i];
    }
}


int main()
{
    int data = 4;
    std::cout << "[IN]: " << data << std::endl;
    qrt(data);
    std::cout << "[OUT]: " << data << std::endl;


    std::vector<int> dataVector = { -1, 4, 8 };
    std::cout << "[IN]: ";
    for (int i{ 0 }; i < dataVector.size(); i++) {
        std::cout << dataVector[i] << " ";
    };
    std::cout << std::endl;

    qrt(dataVector);
    std::cout << "[OUT]: ";
    for (int i{ 0 }; i < dataVector.size(); i++) {
        std::cout << dataVector[i] << " ";
    };
}