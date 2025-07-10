// Guess a Number
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
    int ran, num;
    int tries = 1;
    srand(time(0));
    // start + rand() % (end - start + 1)
    ran = 0 + rand() % (100 - 0 + 1);
    cout<<"***Let us enjoy this fun guessing game ! "<<endl;
    cout << "Guess a number From 0 to 100  :  ";
    cin >> num;
    while (num != ran)
    {

        if (num > ran)
        {
            cout << "Sorry! Guess a smaller number" << endl;
        }
        else if (num < ran)
        {
            cout << "Sorry! Guess a bigger number " << endl;
        }
        cin >> num;
        tries++;
    }
    cout << "Congratulations ! You are Correct ." << endl;

    cout << "You found the Number after " << tries << " from tries " << endl;
    return 0;
}
