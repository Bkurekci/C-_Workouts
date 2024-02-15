#include <iostream>
#include <vector>
#include <ctype.h>

void grting_andPick(char&);
char fix_selection(char);
void print_nums(const std::vector<int>);
void add_num(std::vector<int>&); //referansla almayinca adresle islem yapmadigi icin degeri localde kaliyor.
void mean_nums(const std::vector<int>);
void sm_num(const std::vector<int>);
void lg_num(const std::vector<int>);
void find_num(const std::vector<int>);
bool isit_exist(const std::vector<int>, int);

int main(){
    std::vector<int> numbers;
    char selection{};

    do{
        grting_andPick(selection);
        switch (selection)
        {
        case 'P':
            print_nums(numbers);
            break;
        case 'A':
            add_num(numbers);
            break;
        case 'M':
            mean_nums(numbers);
            break;
        case 'S':
            sm_num(numbers);
            break;
        case 'L':
            lg_num(numbers);
            break;
        case 'F':
            find_num(numbers);
            break;
        case 'Q':
            break;
        default:
            std::cout << "Please enter a suitable selection!"<< std::endl;
            break;
        }
    }while(selection != 'Q');
    return 0;
}

void grting_andPick(char &selection){
    std::cout << "P - Print numbers" << std::endl;
        std::cout << "A - Add a number" << std::endl;
        std::cout << "M - Display mean of the numbers" << std::endl;
        std::cout << "S - Display the smallest number" << std::endl;
        std::cout << "L - Display the largest number" << std::endl;
        std::cout << "F - Find a number" << std::endl;
        std::cout << "Q - Quit\n\nEnter your choice: ";
        std::cin >> selection;
        selection = fix_selection(selection);
}

char fix_selection(char choice){
    if(islower(choice))
        choice = toupper(choice);
    //std::cout << choice << std::endl;
    return choice;
}

void print_nums(const std::vector<int> nums){
    if(nums.size() == 0)
        std::cout << "[] - the list is empty" << std::endl;
    else{
        std::cout << "[";
        for(auto num: nums)
            std::cout << num << " ";
        std::cout << "]" << std::endl;
    }
}

void add_num(std::vector<int>& nums){
    int num;
    std::cout << "Enter a value you want to add to the list: ";
    std::cin >> num;
    nums.push_back(num);
    std::cout << "Addition operation successful." << std::endl;
}

void mean_nums(const std::vector<int> list){
    int mean {0};
    if(list.size() == 0)
        std::cout << "You can't take the mean of the empty number list dude." << std::endl;
    else{
        for(auto num: list)
            mean += num;
        mean /= list.size();
        std::cout << "The mean of the numbers is " << mean << std::endl;
    }
}

void sm_num(const std::vector<int> tab){
    if(tab.size() == 0)
        std::cout << "The list is empty!" << std::endl;
    else{
        int min = tab.at(0);
        for(auto num: tab)
            if(num < min)
                min = num;
        std::cout << "The smallest number of the list is: " << min << std::endl;
    }

}

void lg_num(const std::vector<int> list){
    if(list.size() == 0)
        std::cout << "The list is empty!" << std::endl;
    else{
        int max = list.at(0);
        for(auto num: list)
            if(num > max)
                max = num;
        std::cout << "The largest number of the list is: " << max << std::endl;
    }
}

void find_num(const std::vector<int> list){
    int which {}, here {1}, exist {0};
    std::cout << "Which number do you want to find? ";
    std::cin >> which;
    
    exist = isit_exist(list, which);
    if(!exist)
        std::cout << "That number is not on the list." << std::endl;
    else{
        for(auto num: list){
            if(num == which)
                break;
            here++;
        }
    }

    std::cout << which << " is " << here << ". element on the list."<< std::endl;
}

bool isit_exist(const std::vector<int> tab, int num)
{
    for(auto number: tab)
        if(number == num)
            return true;
    return false;
}