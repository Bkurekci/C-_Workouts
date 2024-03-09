#include "Movie.hpp"

Movie::Movie(std::string _name, std::string rating, int watch){
    this->movieName = _name;
    this->movieRatin = rating;
    this->watched = watch;
}

Movie::~Movie(){
    std::cout << "Destructor called for MOVIE object." << std::endl;
}

void Movie::incrementWatch(){
    this->watched++;
}

std::string Movie::get_name(){
    return this->movieName;
}

std::string Movie::get_rating(){
    return this->movieRatin;
}

int Movie::get_watched(){
    return this->watched;
}