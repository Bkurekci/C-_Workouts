#include <iostream>
#include <vector>

int main(){
    // int *num {nullptr};
    // char *c {nullptr};
    // std::string *string {nullptr};
    // double *huge {nullptr};
    // long *more {nullptr};
    // std::vector<std::string> *array {nullptr};
    // std::vector<char> *letters {nullptr};
    // std::vector<int> *numbers {nullptr};


    // std::cout << "num pointer's size " << sizeof num << std::endl;
    // std::cout << "c pointer's size " << sizeof c << std::endl;
    // std::cout << "string pointer's size " << sizeof string << std::endl;
    // std::cout << "huge pointer's size " << sizeof huge << std::endl;
    // std::cout << "more pointer's size " << sizeof more << std::endl;
    // std::cout << "array pointer's size " << sizeof array << std::endl;
    // std::cout << "letters pointer's size " << sizeof letters << std::endl;
    // std::cout << "numbers pointer's size " << sizeof numbers << std::endl;

    std::string name {"Busra"};
    std::string *name_ptr {nullptr};
    name_ptr = &name;

    char str[] {"Hello"};
    char *arr {str};
    int tab[] { 10, 20, 30, 40, 50};
    int *ptr {tab};

    std::cout << ptr[0] << std::endl;

    std::cout << &name << std::endl;//adresi gosterir
    std::cout << name_ptr << std::endl;//adresi gosterir
    std::cout << name << std::endl;//name stringini yazdirir
    std::cout << *name_ptr << std::endl;//stringi yazdirir
    std::cout << str << std::endl;
    std::cout << *arr << std::endl;
}