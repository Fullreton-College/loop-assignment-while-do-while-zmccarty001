#include <iostream>
#include <climits>
using namespace std;
int main() {

    int input;
    int sentinel = -99;
    int min = INT_MAX;
    int max = INT_MIN;


    cout<<"Enter integer (enter -99 to end list): ";
    cin>>input;

    while (input != sentinel) {
        if (input > max) {
            max = input;
        }
        if (input < min) {
            min = input;
        }
        cin >> input;

    }
    if (input == sentinel) {
        cout<<"Your largest integer is: "<<max<<endl;
        cout<<"Your smallest integer is: "<<min<<endl;
    }


    return 0;
}