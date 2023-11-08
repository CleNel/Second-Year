#include "Single.h"

#include <string>

Single::Single() {
    artist = "anonymous";
    title = "untitled";
}

Single::Single(string artist, string title){
  this->artist = artist;
  this->title = title;
}

string Single::GetArtist() const {
  return artist;
}

string Single::GetTitle() const {
  return title;
}

bool Single::operator==(const Single &itemToCompare) const {
  return (itemToCompare.artist == this->artist) && (itemToCompare.title == this->title);
}


