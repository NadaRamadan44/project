                                      //Digital clock
#include <iostream>
#include <windows.h>             // sleep المكتبة دي خاصة ب
using namespace std;
int main()
{
    // Variables
    int hours = 0;
    int min = 0;
    int sec = 0;
    // end of varables

    cout << "Hours : ";
    cin >> hours;

    cout << "Min : ";
    cin >> min;

    cout << "Sec : ";
    cin >> sec;

    //   hours : min : sec
    //      6 : 20 :  30
    while (true) // infinite loop
    {
        system("cls");             //     clear screen
        if (sec > 59)
        {
            min++;
            sec = 0;
        }
        if (min > 59)
        {
            hours++;
            min = 0;
        }
        if (hours > 23)
        {
            hours = 0;
        }
        cout << hours << ":" << min << ":" << sec;
        sec++;
        Sleep(900);          
    }
}