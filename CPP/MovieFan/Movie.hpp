#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <iostream>

class Movie{
    private:
        std::string movieName;
        std::string movieRatin;
        int watched;
    public:
        Movie(std::string  = "none", std::string = "", int = 0);
        ~Movie();
        void incrementWatch();
        std::string get_name();
        std::string get_rating();
        int get_watched();
        void set_rating(std::string&);
        void set_movieName(std::string&);
        void set_watch(int&);
};

#endif