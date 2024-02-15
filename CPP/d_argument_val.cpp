#include <iostream>

int calc(int x, int y = 10){//fonksiyona default bir deger atiyoruz. 
//Eger ikinci parametreye herhangi bir deger girmezsek, default olarak 10 degerini kullaniyoruz.
    return x + y;
}

int main(){
    int a = 6;
    std::cout << "a = " << a << std::endl;
    int b = calc(a);
    std::cout << "b = " << b << std::endl;
    int c = calc(a, b);
    std::cout << "c = " << c << std::endl;
    return (0);
}