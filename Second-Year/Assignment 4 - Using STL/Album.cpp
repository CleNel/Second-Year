#include "Album.h"
#include <string>
#include <iostream>

// Constructor
Album::Album(string newArtist, string newTitle, int newYear) {
  artist = newArtist;
  title = newTitle;
  year = newYear;
  displayAs = (artist + ", " + title + " (" + std::to_string(year) + ")");
}

// Getters
string Album::GetArtist() const {
  return artist;
}
string Album::GetTitle() const {
  return title;
}
int Album::GetYear() const {
  return year;
}

// Comparing

//Album Equivalence
bool Album::operator==(const Album& itemToCompare) const {
  return (itemToCompare.artist == this->artist) && (itemToCompare.title == this->title) && (itemToCompare.year == this->year);
}

// Album Size
bool Album::operator<(const Album& itemToCompare) const {
  if (artist == itemToCompare.artist) {
    if (title == itemToCompare.title) {
      return year < itemToCompare.year;
    } else {
      return title < itemToCompare.title;
    }
  } else { // If artist isn't equal
    return artist < itemToCompare.artist;
  }
}

// Album Output
Album::operator const char* () const {
  return displayAs.c_str();
}