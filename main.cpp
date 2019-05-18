#include <iostream>
#include <fstream>
#include "LinkedStack.cpp"

using namespace std;

int main() {
    // Demo code
    /*
  LinkedStack<int> myStack;
   cout << myStack.isEmpty() << endl;
  */
    // end of demo code

    // For each expression in "input.txt":
        // 1. Read expression into string variable
        // 2. Validate expression
        // 3. cout 'valid' or 'invalid' to the console
        string token;
        symbolTracker l;
ifstream read("input.txt");
      while(!read.eof()){
        read >> token;
        //cout << token;
      }

      read.close();
      l.push(token);
  
    return 0;
}
