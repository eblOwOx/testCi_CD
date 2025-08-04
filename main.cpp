// main.cpp
#include "hello.h"

int main() {
    std::string name;
    std::cout << "Rentre ton nom??";
    std::cin >> name;
    std::cout << hello(name) << std::endl;
    return 0;
}
