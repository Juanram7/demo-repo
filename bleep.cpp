#include <iostream>
#include <string>
#include "functions.hpp"

using std::cout;
using std::endl;

int main(){
    std::string word = "badword";
    std::string text = "large piece of text to filter badword, it will not let badword be printed, it will block the badword.";

    bleep(word, text);

    for(int i = 0; i < text.size(); i++){
        cout << text[i];
    }
    cout << endl;
}