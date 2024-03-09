#include "Movies.hpp"
#include "Movie.hpp"

void incrementWatched(Movies &movies, std::string name){
    movies.watched(name);
}

void addMovie(Movies &movies, std::string name, std::string rating, int watched){
    if(movies.addMovie(name, rating, watched))
        std::cout << name << " added" << std::endl;
    else
        std::cout << name << " is already exists." << std::endl;
}

int main(){
    Movies mymovies;
    mymovies.display();

    addMovie(mymovies, "Cinderella", "PG", 2);
    addMovie(mymovies, "Big", "PG-13", 5);
    addMovie(mymovies, "Star Wars", "PG", 7);

    mymovies.display();

    //addMovie(mymovies, "Cinderella", "PG", 12); //already exists error
    addMovie(mymovies, "Ice Age", "PG", 3);
    incrementWatched(mymovies, "Cinderella");
    incrementWatched(mymovies, "Big");
    incrementWatched(mymovies, "Star Wars");
    incrementWatched(mymovies, "Ice Age");
    //incrementWatched(mymovies, "Ice age"); //not on your list error

    mymovies.display();

    return 0;
}