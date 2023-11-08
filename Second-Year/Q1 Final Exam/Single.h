#ifndef SINGLE_H
#define SINGLE_H

#include <iostream>
using namespace std;

class Single {
    string artist;
    string title;

public:
    Single();
    // Default constructor, initialises
    // artist with 'anonymous'
    // title with 'untitled'

    Single(string artist, string title);
    // Constructor

    string GetArtist() const;
    // getter for <artist>

    string GetTitle() const;
    //getter for <title>

    bool operator==(const Single &itemToCompare) const;
    // Returns true if album is "equal" to itemToCompare
    // We consider <artist> and <title>.
};

#endif //SINGLE_H
