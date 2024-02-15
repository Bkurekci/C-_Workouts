#include <iostream>
#include <vector>

void display(/*1const*/ std::vector<std::string> * /*2const*/); // 1.const u uygularsak stooges 
//stringinde degisiklik yapamayiz ancak pointer baska bir adresi isaret edebilir
//2. constu uygularsak stooges stringinde degisiklik yapabiliriz yalniz bu sefer pointer baska adresi temsil edemez
//eger iki const u da uygularsak bu sefer ne stringde degisiklik yapabiliriz ne de pointer baska bir adresi gosterir

void display_sentinel(const int *arr, int sentinel){
    while(*arr != sentinel)
        std::cout << *arr++ << std::endl; // buradaki islem icerigi degistirmez, mantiken islem onceligine gore 
//degeri yazdirir ardindan adresi bir artirarak devam eder, degeri degistirmez!!!!!!!!!!!!!!!!!!!!!!!!
}

int main(){
    std::vector<std::string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);

    int arr[] {100, 90, 80, 70, 60, -1};
    display_sentinel(arr, -1);

    return 0;
}

void display(/*1const*/ std::vector<std::string> * /*2const*/ v){ 
    for(auto str: *v)// *v = stooges
        std::cout << str << std::endl;
    (*v).at(0) = "Busra";// (*v).at(index) = stooges.at(index)   yani ikisi de ayni anlama geliyor
    for(auto str: *v)
        std::cout << str << std::endl;

    v = {nullptr};
}