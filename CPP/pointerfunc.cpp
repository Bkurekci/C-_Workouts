#include <iostream>

int *allocate_arr(size_t, int = 0);
void display_arr(int*, size_t);

int main(){
    int *arr {nullptr};
    size_t size {};
    int value {};

    std::cout << "How many elements do you want in the array: ";
    std::cin >> size;

    if(size > 0){
        std::cout << "What value would you like them initialize to? ";
        std::cin >> value;

        arr = allocate_arr(size, value);
        display_arr(arr, size);

        delete [] arr;
    }
    return 0;
}

int *allocate_arr(size_t size, int value){
    int *newstorage {nullptr};
    newstorage = new int[size];
    for(size_t i {0}; i < size; i++)
        *(newstorage + i) = value;
    return newstorage;
}

void display_arr(int *tab, size_t size)
{
    for(size_t i{0}; i < size; i++)
        std::cout << *(tab+i) << std::endl;
}