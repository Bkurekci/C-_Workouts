#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

int main(){
    std::string cmd;
    std::vector<int> dices (2, 0);

    do{
        std::cout << "Type 'roll' for roll the dice" << std::endl;
        std::cin >> cmd;
    }while(cmd != "roll");

    srand(time(NULL));

    for(int i = 0; i < dices.size(); i++)
        dices.at(i) = rand()% 6 + 1;
    
    for(int i = 0; i < dices.size(); i++)
        std::cout << i+1 << ". dice = " << dices.at(i) << std::endl;

    return 0;
}