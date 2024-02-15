#include <iostream>

class Student{
    private:
    std::string name;
    int id;

    public:
    std::string get_name();
    void set_name(std::string);
    int get_id();
    void set_id(int);

    Student(){
        std::cout << " Constructor calisti." << std::endl;
    }
    ~Student(){
        std::cout << "Destructor calisti. " << std::endl;
    }
};



std::string Student::get_name(){
    return name;
}

void Student::set_name(std::string _name){
    name = _name;
}

int Student::get_id(){
    return id;
}

void Student::set_id(int _id){
    id = _id;
}


int main(){
    Student A;
    std::string name {0};
    int id {0};

    std::cout << "Ogrencinin ismini giriniz: ";
    std::cin >> name;
    std::cout << "Ogrenci id'sini giriniz: ";
    std::cin >> id;

    A.set_name(name), A.set_id(id);

    std::cout << "Ogrencinin ismi: " << A.get_name() << "\nOgrencinin id'si: " << A.get_id() << std::endl;

    return 0;
}