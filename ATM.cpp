#include <iostream>
using namespace std;
//**********variable**********//
double balance = 1000;
int deposit = 0;
int withdDraw = 0;
int passWord = 0000;
int choice = 0;
//**********End of The variable**********//

// show is function to display the Menu of ATM
void show()
{

    cout << "***** Menu *****" << endl;
    cout << "1:balance" << endl;
    cout << "2:withdDraw" << endl;
    cout << "3:deposit" << endl;
    cout << "4:Exit" << endl;
    cout << "*********************" << endl;
}

void process()
{

    cout << "Enter Your PassWord" << endl;
    cin >> passWord;
    do {
        if (passWord == 0000)
        {
            cout << "Enter your choice : ";
            cin >> choice;

   switch (choice){
        case 1:
            cout << "Your balance is " << balance << endl;
             break;
        case 2:
            cout << "NOTe : Your balance is " << balance << endl;
            cout << "Enter your amount " << endl;
            cin >> withdDraw;
            
             if (withdDraw > balance)
                {
                    cout << "Sorry you cannot withdDraw this Amount " << endl;
                }
            else
                {
                    // balance=balance-withdDraw ;
                    balance -= withdDraw;
                    cout << "Now : Your balance is " << balance << endl;
                }
                break;
        case 3:
            cout << "Your current balance is " << balance << endl;
            cout << "Enter Your deposit money : ";
            cin >> deposit; // balance=1000 ,deposit=500
                // balance=balance+deposit;
                balance += deposit; // balance=1000+500=1500
                cout << "Your New balance is " << balance << endl;
                break;
        case 4:
                // Exit
                cout << "Thank you" << endl;
                break;
            }//end of switch
        }//end of if
        else
        {    char option='m';
            cout<<"PassWord is Incorrect ,Do you want To Try Again ? Enter [y] of yes or [N] for No"<<endl;
            cin>>option;
            
            if(option=='Y'||option=='y'){
                cout << "Enter Your PassWord" << endl;
                cin>>passWord;
            }
            else{
                choice=4;
            }
        
            
        }
        
    }while (choice < 4);
            
    
}//end of function process

int main()
{
    show();
    process();

    return 0;
}