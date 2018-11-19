#include <iostream>

  using namespace std;
int averageAccuracy(int acc, int totalshots){
    int avgAcc   = 0;
    avgAcc = acc/totalshots;
    return avgAcc;
}

int main(){
    int shotAcc  = 0;
    int totalAcc = 0;
    int numShots = 0;

    while(shotAcc != -1){
        cout << "Please enter an accuracy value between 0 and 100" << endl;
        cout << "             [enter -1 to terminate]            " << endl;
        cin >> shotAcc;
        if(shotAcc == -1){
            cout << "Total number of shots taken: " << numShots << endl;
            cout << "Accuracy of all shots taken: " <<averageAccuracy(totalAcc, numShots) << endl;
            break;
        }
        else if(shotAcc < 0 || shotAcc > 100){
            cout << "incorrect value entered of: " << shotAcc << " Rejected!" << endl;
        }
        else{
            totalAcc = totalAcc + shotAcc;
            ++numShots;
        }
    }
}

