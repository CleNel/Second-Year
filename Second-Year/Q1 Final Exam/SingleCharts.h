#ifndef SINGLECHARTS_H
#define SINGLECHARTS_H

#include "Single.h"
#include <vector>
#include <set>

class SingleCharts {
    vector<Single> charts;
public:
    // Note that in all operations chart positions are counted from 1!

    void AppendSingle(string artist, string title);
    // Appends a Single with given attributes at the bottom of the charts. For instance, if the charts contains Singles
    // on positions 1-3, then AppendSingle inserts the new single on position #4.
    // If the charts are empty, then the Single is inserted at #1.

    void InsertSingle(string artist, string title, int position);
    // If the given position <position> falls within the bounds of the current charts:
    //    Inserts a single with given attributes at chart position <position>
    // Otherwise:
    //    Prints "Position out of bounds." (followed by newline)
    //
    // All existing entries with a position equal to or worse than <position> are shifted one down.

    void Print();
    // prints the current charts in the format (without the // )
    // 1. artist - title
    // 2. artist - title
    // 3. artist - title

    void PrintByArtist(string artist);
    // Prints all singles by artist <artist> in the current charts in the format
    // (without the // ) with their positions
    // 1. artist - title
    // 3. artist - title

    bool Contains(string artist, string title);
    // Returns true if the charts contain a single <artist, title>
    // Returns false otherwise

    bool Contains(string title);
    // Returns true if the charts contain any Single with title <title>
    // Returns false otherwise
};

#endif //SINGLECHARTS_H
