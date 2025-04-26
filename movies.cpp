#include "movies.h"
#include "movie.h"

#include <iostream>
#include <ostream>
#include <string>
#include <vector>

void Movies::add_movie(std::string name_val, std::string rating_val,
                       int watched_val) {

  Movie new_movie(name_val, rating_val, watched_val);

  movies.push_back(new_movie);
}

std::vector<Movie> &Movies::get_movies() { return movies; }

void Movies::display_movies(Movies &movie_list) {

  std::vector<Movie> movies = movie_list.get_movies();

  for (auto movie : movies) {
    std::cout << "---------" << std::endl;
    std::cout << "Name: " << movie.get_name() << std::endl;
    std::cout << "Rating: " << movie.get_rating() << std::endl;
    std::cout << "Watched: " << movie.get_watched() << std::endl;
  }
}

void Movies::increment_watched(std::string name_val) {

  for (auto &movie : get_movies()) {
    if (movie.get_name() == name_val) {
      movie.inc_watched();
    }
  }
}