// Adapted from version by Frank Carrano and Timothy Henry

#include <string>
#include <iostream>
using namespace std;

class symbolTracker {

private:
    string symbols;
  

public:
    // Constructors and destructors
    symbolTracker();    // Default constructor
//symbolTracker(string track);
    ~symbolTracker();   // Destructor

    // Stack operations
    bool isEmpty();
    bool push(string & newElement);
    bool pop();
    string peek();
}; // end LinkedStack
