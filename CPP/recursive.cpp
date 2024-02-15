#include <iostream>

int sum_of_digits(int n) {
    // Write your code below this line
    int sum {0};
    if(n > 0 && n <= 9)
        return n;
    sum += sum_of_digits(n%10);
    std::cout << n << "sum is " << sum << std::endl;

    return sum;
    
    // Write your code above this line
}

int main(){
    int x {};
    x = sum_of_digits(1234);
    std::cout << "Sum of the number is " << x << std::endl;
}