#ifndef _MOVIE_H
#define _MOVIE_H

#include <string>

class Movie {
private:
  std::string name;
  std::string rating;
  int watched;

public:
  Movie(std::string name_val, std::string rating_val, int watched_val);

  std::string get_name() { return name; }
  std::string get_rating() { return rating; }
  int get_watched() { return watched; }

  void inc_watched();
};

#endif