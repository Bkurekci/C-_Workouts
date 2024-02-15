#include <iostream>

void print(const int* arr, const int);
int *apply_all(int*, int, int*, int);

int main()
{
    int *result_arr {nullptr};
    int array1 [] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};

    std::cout << "Array 1: " << std::endl;
    print(array1, 5);

    std::cout << "Array 2: " << std::endl;
    print(array2, 3);

    result_arr = apply_all(array1, 5, array2, 3);
    print(result_arr, 3*5);

    delete [] result_arr;
    return 0;
}


int *apply_all(int *tab, int size1, int *arr, int size2)
{
    int *new_array {nullptr};
    int total_size {size1 * size2};
    int i {0};

    new_array = new int[total_size];

    for(int j{0}; j < size2; j++)
    {
            for(int k{0}; k < size1; k++, i++)
            {
                new_array[i] = arr[j] * tab[k];
                std::cout << "arr[j]: " << arr[j] << " tab[k]: " <<  tab[k] << std::endl;
            }
    }
    
    return new_array;
}

void print(const int* arr, const int value)
{
    for(int i {0}; i < value; i++)
        std::cout << i + 1 << ". element: " << arr[i] << std::endl;
}