#include "AlbumCollection.h"

// Inserts an album
void AlbumCollection::InsertAlbum(string artist, string title, int year) {
  setAlbums.insert(Album(artist, title, year));
}

// Print Albums
void AlbumCollection::Print() {
  for (const auto& setAlbum : setAlbums) {
    cout << setAlbum << endl;
  }
}

// Prints Albums By Title Substring
void AlbumCollection::PrintByTitleSubstring(string titleSubstring) {
  for (const auto& setAlbum : setAlbums) {
    if (setAlbum.GetTitle() == titleSubstring) {
      cout << setAlbum << endl;
    }
  }
}

// Prints Albums By Artist
void AlbumCollection::PrintByArtist(string artist) {
  for (const auto& setAlbum : setAlbums) {
    if (setAlbum.GetArtist() == artist) {
      cout << setAlbum << endl;
    } 
  }
}

// Prints Albums By Year
void AlbumCollection::PrintByYear(int year) {
  for (const auto& setAlbum : setAlbums) {
    if (setAlbum.GetYear() == year) {
      cout << setAlbum << endl;
    }
  }
}

// Check If Collection Has A Title Containing A String
bool AlbumCollection::ContainsTitle(string title) {
  auto iteratorTitleFound = find_if(setAlbums.begin(), setAlbums.end(), [&title](Album a) {return a.GetTitle() == title;} );
  if (iteratorTitleFound != setAlbums.end()) {
    return true;
  } else {
    return false;
  }
}

// Checks If Collection Contains An Artist
bool AlbumCollection::ContainsArtist(string artist) {
  auto iteratorArtistFound = find_if(setAlbums.begin(), setAlbums.end(), [&artist](Album a) {return a.GetArtist() == artist;} );
  if (iteratorArtistFound != setAlbums.end()) {
    return true;
  } else {
    return false;
  }
}

// Checks If Collection Contains A Year
bool AlbumCollection::ContainsYear(int year) {
  auto iteratorYearFound = find_if(setAlbums.begin(), setAlbums.end(), [&year](Album a) {return a.GetYear() == year;} );
  if (iteratorYearFound != setAlbums.end()) {
    return true;
  } else {
    return false;
  }
}

// Removes The First Album Containing A String
void AlbumCollection::DeleteAlbumByTitle(string titleToSearch) {
  auto iteratorAlbumFound = find_if(setAlbums.begin(), setAlbums.end(), [&titleToSearch](Album a) {return a.GetTitle() == titleToSearch;} );
  if (iteratorAlbumFound != setAlbums.end()) {
    setAlbums.erase(iteratorAlbumFound);
  } else {
    cout << "No album found!" << endl;
  }
}

// Removes All Albums Containing An Artist
void AlbumCollection::DeleteAlbumsByArtist(string artistToSearch) {
  bool albumFound = false;
  bool anyAlbum = false;
  do {
    auto iteratorAlbumsFound = find_if(setAlbums.begin(), setAlbums.end(), [&artistToSearch](Album a) {return a.GetArtist() == artistToSearch;} );
    if (iteratorAlbumsFound != setAlbums.end()) {
      setAlbums.erase(iteratorAlbumsFound);
      albumFound = true;
      anyAlbum = true;
    } else {
      albumFound = false;
    }
  } 
  while (albumFound);
  if (!anyAlbum) {
    cout << "No album found!" << endl;
  }
}

// Returns Number Of Albums In Collection
int AlbumCollection::GetNumberAlbums() {
  return setAlbums.size();
}