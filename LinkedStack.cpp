// Adapted from version by Frank Carrano and Timothy Henry
#include "LinkedStack.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
vector <symbolTracker> vec;
vector <symbolTracker>::iterator it;
symbolTracker::symbolTracker() {
symbols = " ";

} // end default constructor

/*
symbolTracker::symbolTracker(string track) {
symbols = track;
}
*/


symbolTracker::~symbolTracker() {
    // TODO: pop until empty

} // end destructor

bool symbolTracker::isEmpty() {
    // TODO: stub function provided for demo, implement logic

    if(vec.size()== 0){
      return true;
    }

    return false;
} // end isEmpty


bool symbolTracker::push(string &token) {
    // TODO: implement function
    //vector <symbolTracker> vec;
    symbolTracker s;
    string n;
for(int i =0; i < token.size();i++){
if(token.at(i) == '(' || token.at(i) == '{' || token.at(i) == '['){
//symbols.push_back(token.at(i));

n.push_back(token.at(i));
s.symbols = n;
  vec.push_back(s);
  n.pop_back();
}
if(token.at(i) == ')' || token.at(i) == '}' || token.at(i) == ']'){
if(isEmpty() == true){
  cout << "invalid";
  return false;
}
  pop();

}


}



return true;
} // end push


bool symbolTracker::pop() {
    // TODO: implement function

    if(isEmpty() == true){
        return false;
    }


vec.pop_back();
cout << vec.size() << " ";
  return true;
} // end pop
string symbolTracker::peek() {
    // TODO: implement function - handle empty case first

return symbols;
} // end peek
