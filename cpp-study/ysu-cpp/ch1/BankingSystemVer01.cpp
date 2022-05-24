#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN=20;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);

enum {MAKE=1,DEPOSIT,WITHDRAW,INQUIRE,EXIT};

typedef struct
{
        int accID;
        int balance;
        char cusName[NAME_LEN];
}Account;

Account accArr[100];
int accNum = 0;
int main(void)
{
    int choice;

    while(1)
    {
            ShowMenu();
            cout<<"choice: ";
            cin>>choice;
            cout<<endl;

            switch(choice)
            {
                    case MAKE:
                            MakeAccount();
                            break;
                    case DEPOSIT:
                            DepositMoney();
                            break;
                    case WITHDRAWL
                            WithdrawMoney();
                            break;
                    case INQUIRE:
                            ShowAllAccInfo();
                            break;
                    case EXIT:
                            return 0;
                    default:
                            cout<<"Illegal selection.. "<< endl;
            }

    }
    return 0;
}

void ShowMenu(void)
{
        cout<<"---MENU -- "<<endl;
        cout << "1. make account  "<<endl;
        cout << "2. deoisit money" << endl;
        cout << "3. withdraw money" << endl;
        cout << "4. print" << endl; 
        cout << "5. exit" << endl
}

void MakeAccount(void){


}

void DepositMoney(void){


}


void w

