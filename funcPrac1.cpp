#include <iostream>

  using namespace std;

int doubleValue(int x){
    int y = 0;
    y = 2 * x;
    return y;
}

int main(){
    
    for (int counter = 1; counter < 20; ++counter){
        cout << "x = " << counter <<"\t y = " << doubleValue(counter);
        cout << endl;
    }

system("PAUSE");
return 0;
}
