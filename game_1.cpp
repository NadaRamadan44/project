                      //Game Rock,Paper,Scissors
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
   int playerChoice,compChoice;
   cout<<"***** Let us play : Rock , Paper , Scissors *****"<<endl;
   cout<<"1-Rock,2-paper,3-scissors "<<endl;

   cout<<"Enter Your Choice : ";
   cin>>playerChoice;
         srand(time(0));
        //start + rand()%(end - start +1)
      compChoice=1+rand()%(3-1+1);

     cout<<"Your Choice : "<<playerChoice<<endl;
     cout<<"Computer Choice : "<<compChoice<<endl;
     if(playerChoice==compChoice)
     {
         cout<<"It is tie!"<<endl;
     }
     else if((playerChoice==1&&compChoice==3)||(playerChoice==3&&compChoice==2)||(playerChoice==2&&compChoice==1))
     {
         cout<<"Congratulations :Your Win!"<<endl;
     }
     else
     {
         cout<<"UnFortunately : your Lost!"<<endl;
     }
    return 0;
}
