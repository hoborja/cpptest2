#include <iostream>

  using namespace std;

float halfValue(float x){
    float z = 0;
    z = x / 2.0;
    return z;
}

int doubleValue(int x){
    int y = 0;
    y = 2 * x;
    return y;
}

int main(){
    
    for (int counter = 1; counter < 20; ++counter){
        cout << "x = " << counter <<"\t y = " << doubleValue(counter) <<"\t z = " << halfValue(static_cast<float>(counter));
        cout << endl;
    }

system("PAUSE");
return 0;
}
