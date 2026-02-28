#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int randomNum = rand() % 100;
    int input;
    int count =1;

    cout<<"Guess a number between 1-100: \n";
    cin>>input;

    while (input != randomNum) {
        if (input < randomNum) {
            cout<<"Too low. Try again:\n";
            count++;
            cin>>input;
        }
        if (input > randomNum) {
            cout<<"Too high. Try again:\n";
            count++;
            cin>>input;
        }
        }
        if (input == randomNum) {
            count++;
            cout<<"Congratulations! You got my number in "<<count-1<<" attempts.";
        }
    

    return 0;
    }
        