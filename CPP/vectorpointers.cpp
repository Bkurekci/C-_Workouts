#include <iostream>
#include <vector>

int main(){
    std::vector<std::string> stooges {"Larry", "Moe", "Curly"};
    std::vector<std::string> *arr {&stooges};

    std::cout << "First stooges " << (*arr).at(0) << std::endl;
    
    for(auto names: *arr)
        std::cout << names << std::endl;

    std::cout << "Stooges address: " << &stooges << std::endl;
    std::cout << "Stooges first string address: " << &(stooges.at(0)) << std::endl;
    
    return 0;
}