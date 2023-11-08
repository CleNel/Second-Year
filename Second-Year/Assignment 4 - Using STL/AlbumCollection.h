#ifndef ALBUMCOLLECTION_H
#define ALBUMCOLLECTION_H
#include "Album.h"
#include <set>
#include <algorithm>

class AlbumCollection {
  set<Album> setAlbums;

  public:
    void InsertAlbum(string artist, string title, int year);
    void Print();
    void PrintByTitleSubstring(string titleSubstring);
    void PrintByArtist(string artist);
    void PrintByYear(int year);
    bool ContainsTitle(string title);
    bool ContainsArtist(string artist);
    bool ContainsYear(int year);
    void DeleteAlbumByTitle(string titleToSearch);
    void DeleteAlbumsByArtist(string artistToSearch);
    int GetNumberAlbums();
};
#endif // ALBUMCOLLECTION_H