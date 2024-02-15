#include <iostream>
#include <vector>

void add_list(std::vector<int>& list){
    int num;
    std::cin >> num;
    list.push_back(num);
    std::cout << "succesfull." << std::endl;
    std::cout << list.at(0) << std::endl;
}

int main(){
    std::vector<int> nums;
    std::cout << "Here we go: " << std::endl;
    add_list(nums);

    if(nums.size() == 0)
        std::cout << "nop."<< std::endl;
    else
        std::cout << "yep." << std::endl;
    return 0; 
}