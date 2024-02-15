#include <iostream>

class cat{
    public: // butun uyelere erisebilmek icin public yaptim
    std::string color;
    std::string breed;
    int age;

    void meow(std::string meowe) {std::cout << meowe << std::endl;};
    bool isSleep();
};

class human{
    private:
    std::string name {"Busra"};
    std::string gender {"Female"};
    int age {23};

    public:
    std::string whois() {return name;}
    int puff(int magic) {return (age - magic);}
};

//bir kedi sinifi olusturduk, ustte niteliklerini belirledik, altta da davranislarini belirledik 

int main(){
    cat mycat;
    mycat.color = "White";//eger isaretci tarzi bir nesnemiz yoksa . ile uyelere ulasabiliyoruz.
    mycat.breed = "Main Coon";
    mycat.age = 2;
    mycat.meow("MEOOOOOWW");

    std::cout << "Your cat's color is " << mycat.color << std::endl;
    std::cout << "Breed of your cat is " << mycat.breed << std::endl;
    std::cout << "Your meow meow is " << mycat.age << " years old ^^" << std::endl;

    //eger isaretci ile dinamik alan uzerinde bir nesnemiz varsa -> ile ulasiyoruz.
    cat *othercat = new cat;
    othercat->color = "Orange";
    othercat->breed = "British Long Hair";
    othercat->age = 6;
    othercat->meow("HISSSSSSSSSSSSSSSSS");

    std::cout << "There is another cat showed up, hmmmm, it looks old and angry :|" << std::endl;
    std::cout << "Other cat's color " << othercat->color << std::endl;
    std::cout << "Other cat's breed is " << (*othercat).breed << std::endl; // aslinda -> gosterimi bu anlama geliyor
    std::cout << "Other cat is " << othercat->age << " years old, it is legend huh? ;)" << std::endl;

    delete othercat;
    //simdi de private public kisimlari olan nesnemi olusturdum
    human busbus;
    std::cout << "There is a hooman near the cats, ummm I think her name is " << busbus.whois() << std::endl;
    std::cout << "OH! THE CATS ARE MASSAGING MAGICLY AND SHE IS "  << busbus.puff(2) << " NOW!" << std::endl;
    
    return 0;
}