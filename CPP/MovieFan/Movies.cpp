#include "Movies.hpp"

Movies::Movies()
{
    std::cout << "Constructor called." << std::endl;
}

Movies::~Movies(){
    std::cout << "Destructor called for MOVIES object" << std::endl;
}

void Movies::display(){
    if(this->mymovies.size() == 0)
        std::cout << "Nothing to display." << std::endl;
    else{
        for(int i = 0; i < mymovies.size(); i++){
            std::cout <<
            "===================================================="
            << std::endl;
            std::cout << "Name: " << this->mymovies.at(i).get_name()
            << "\nRating: " << this->mymovies.at(i).get_rating()
            << "\nWatched: " << this->mymovies.at(i).get_watched()
            << " times" << std::endl;
        }
    }
}

int Movies::addMovie(std::string _name, std::string _rating, int watch){
    Movie newmovie(_name, _rating, watch);
    for(int i = 0; i < mymovies.size(); i++)
        if(mymovies.at(i).get_name() == newmovie.get_name())
            return 0;
    this->mymovies.push_back(newmovie);
    return 1;
}

void Movies::watched(std::string& name){
    for(int i = 0; i < mymovies.size(); i++)
    {
        if(mymovies.at(i).get_name() == name){
            mymovies.at(i).incrementWatch();
            std::cout << "Increment succesfull" << std::endl;
            return;
        }
    }
    std::cout << "That film is not exists on your film list." << std::endl;
}