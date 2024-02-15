#include <iostream>

void reverse_array(int* arr, int size) {
    //-- Write your code below this line 
    int tab[size];
    for(int i{size - 1},j {0}; i >= 0 && j < size; i--, j++)
        tab[i] = arr[j];
    
    for(int i{0}; i<size; i++)
        arr[i] = tab[i];
    //-- Write your code above this line
}

void display_arr(int *tab, size_t size)
{
    for(size_t i{0}; i < size; i++)
        std::cout << *(tab+i) << std::endl;
}

std::string reverse_string(const std::string &str) {
    std::string reversed;
    // Write your code below this line 
    for(int i = str.length() - 1; i >= 0; i--)
        reversed.push_back(str.at(i));// metotlari kullan B)X
    // Write your code abocve this line
    return reversed;
}

int main(){

    std::string arr {"Hello, World"};
    std::string tab {reverse_string(arr)};

    std::cout << tab << std::endl;
    // int arr[] {1, 2, 3, 4, 5};
    // int size {5};

    // reverse_array(arr, size);
    // display_arr(arr, 5);
}