#include <iostream>
#include <string>
using namespace std;

void add_to_story(string story){
    string userInput;
    cout << "Enter three words separated by spaces: " << endl;
    cin >> userInput;
    story.push_back(userInput);
}
