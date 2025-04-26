#include "movies.h"

using namespace std;

int main() {

  Movies movie_list;

  movie_list.add_movie("Attack on titan", "PG-13", 5);
  movie_list.add_movie("Kingdom of ruin", "G", 2);

  movie_list.increment_watched("Kingdom of ruin");

  Movies::display_movies(movie_list);

  return 0;
}