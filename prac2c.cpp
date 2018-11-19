#include <iostream>
#include <ctime>
#include <cstdlib>
 
  using namespace std;

int main(){

    int health = 0;

    srand(time(0));

    while (health > 0){
        cout << "Health is now: " << health << endl;
        health -= rand() % 10;
    }
    

    system("PAUSE");
    return 0;
}