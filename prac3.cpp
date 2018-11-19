#include <iostream>
#include <ctime>
#include <cstdlib>

  using namespace std;

int main(){

    srand(time(0));

    int number = (rand() % 100 + 1);
    int guess;

    cout << "Hello. I am thinking of a number between 1 and 100" << endl;
    cout << "Can you guess the number?" << endl;

    while( guess != number || guess != -1){

        cout << "Enter a guess or -1 to quit" << endl;
        cin >> guess;

        if(guess == number){
            cout << "NICE, you got it!" << endl;
            break;
        }
        else if(guess == -1){
            cout << "Thanks for playing!" << endl;
            break;
        }
        else if(guess < number){
            cout << "Too low, try again" << endl;
        }
        else if(guess > number){
            cout << "Too high, try again" << endl;
        }
        else{
            cout << "You have to enter a number between  1 and 100" << endl;
        }
    }
system("PAUSE");
return 0;    
}