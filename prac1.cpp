#include <iostream>

using namespace std;

int main(){
    const int ASCII_LETTER_START = 65;
    const int NUMBER_LETTERS = 26;

    int counter = 0;

    char currChar = static_cast<char>(ASCII_LETTER_START);

    while (counter < NUMBER_LETTERS){
        cout << "ASCII " << counter + ASCII_LETTER_START << " = " << currChar << endl;
        currChar = static_cast<char>(((int)currChar + 1));
        counter++;
    }
system("PAUSE");
return 0;

}