#include <iostream>
#include <vector>

using namespace std;

void find_first_vowel(const vector<char>& vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int i = 0;
    char c;
    do{
        
        if(vec.at(i) == 'a'){
            c = vec.at(i);
            break;
        }
        else if(vec.at(i) == 'e'){
            c = vec.at(i);
            break;
        }
        else if(vec.at(i) == 'i'){
            c = vec.at(i);
            break;
        }
        else if(vec.at(i) == 'o'){
            c = vec.at(i);
            break;
        }
        else if(vec.at(i) == 'u'){
            c = vec.at(i);
            break;
        }
        else
            c = 0;
    }while(i++ < vec.size());
    
    if(c == 0)
        cout << "No vowel was found";
    else
        cout << "Vowel found: " << c;
    //---- WRITE YOUR CODE ABOVE THIS LINE----
}

int main(){
    vector<char> greetings {'H', 'e', 'l', 'l', 'o'};
    find_first_vowel(greetings);
}