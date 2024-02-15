#include <iostream>
#include <vector>

//fonksiyon overloading
void change(std::vector<std::string>);
void change(char&);

int main(){

    std::vector<std::string> stooges {"Larry", "Moe", "Curly"};
    int a (5);
    char c {'a'};
    change(stooges);
    change(c);

    std::cout << a << std::endl;
    std::cout << c << std::endl;

    //int num (10);
    // int &ref {num};//ikiz gibi davraniyorlar biri degisince digeri de degisiyor
                    //(ki gercek hayatta boyle birsey yok ben de ikizim.)

    // ref = 20;
    // std::cout << "Num is= " << num << "\nAnd ref is= " << ref << std::endl;

    // num = 30;
    // std::cout << "<<<<NOW>>>>>>>>\nNum is= " << num << "\nAnd ref is= " << ref << std::endl;

    return 0;
}

void change(std::vector<std::string> stooges)
{
    //refeansla degistirmezsek sadece aldigi kopya veriyi degistirir, bu nedenle asagidaki kisimda
    // yine orijinal vektoru goruruz. 
    for(auto str: stooges)
        str = "busbus";

    for(auto str: stooges)
        std::cout << str << " ";
    std::cout << std::endl;

    //burada referans degiskeni stooges degiskeninin adresini temsil eder ve stooges degiskeni uzerinde islem
    //yapabilmemizi saglar. boylece stooges degiskeninin icerigi bir suru busbus ile dolar.
    for(auto &str: stooges)
        str = "busbus";

    for(auto str: stooges)
        std::cout << str << " ";
    std::cout << std::endl;
}

void change(char &c){
    c = 'b';
}