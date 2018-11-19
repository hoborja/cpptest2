#include <iostream>
#include <ctime>
#include <cstdlib>
 
  using namespace std;

int main(){

    int health = 100;

    srand(time(0));

    do{
        cout << "Health is now: " << health << endl;
        health -= rand() % 10;
    }
    while (health > 0);

    system("PAUSE");
    return 0;
}