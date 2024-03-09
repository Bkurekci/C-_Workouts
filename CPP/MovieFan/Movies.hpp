#ifndef _MOVIES_HPP_
#define _MOVIES_HPP_
#include "Movie.hpp"
#include <vector>

class Movies{
    private:
        std::vector<Movie> mymovies;
    public:
        Movies();
        ~Movies();
        void display();
        void watched(std::string&);
        int addMovie(std::string, std::string, int);
};


#endif