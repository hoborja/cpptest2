#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

void attkSpeach(){
    cout << "Skeleton master Attacks you!" << endl;
}

float attack (float health, int power){
    health = health - rand() % power;
return health;   
}

int main(){

    const int SKELETON_ATTACK_POWER = 50;
    float health = 100;
    srand(time(0));
    
    attkSpeach();
    health = attack(health, SKELETON_ATTACK_POWER);
    cout << "You should maybe have dodged that one, your health is now: " << health << endl;

    attkSpeach();
    health = attack(health, SKELETON_ATTACK_POWER);
    cout << "Careful, he's hurting you here... you're now at: " << health << endl;

    attkSpeach();
    health = attack(health, SKELETON_ATTACK_POWER);
    cout << "Your final health is: " << health << endl;

    if (health > 0){
        cout << "Congrats you did it!" << endl;
    }
    else{
        cout << "GAME OVER!" << endl;
    }

system("PAUSE");
return 0;
}