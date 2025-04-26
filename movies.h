#ifndef _MOVIES_H
#define _MOVIES_H

#include "movie.h"
#include <string>
#include <vector>

class Movies {
private:
  std::vector<Movie> movies;

public:
  void add_movie(std::string name_val, std::string rating_val, int watched_val);
  static void display_movies(Movies &movie_list);

  std::vector<Movie> &get_movies();
  void increment_watched(std::string name_val);
};

#endif