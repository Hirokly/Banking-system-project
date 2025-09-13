//******************************************************************************
//Author......: Juan Vasquez
//Assignment.: Banking System Project
//Description: This program simulates a simple banking system that allows users to deposit,
//             withdraw, and check their account balance. It includes input validation to ensure
//             that deposits and withdrawals are positive amounts and that withdrawals do not exceed the current balance.
//             The program runs in a loop until the user chooses to exit.
//             
//****************************************************************************** 
using namespace std;

#include <iostream>
#include <string>
#include <iomanip>

int main ()
{
    int action = 0;
    double deposit;
    double withdraw;
    double balance = 0.0;
    double newBalance;

cout << fixed << showpoint << setprecision(2);

while (action != 4)
    {

cout << "--------Action Menu--------"
     << "\nPlease selct an action."
     << "\n           1. Deposit"
     << "\n           2. Withdraw"
     << "\n           3. Check Balance"
     << "\n           4. Exit"
     << "\nAction: ";
cin >> action;

switch (action)
    {
        case 1 : // deposit
            cout << "Enter deposit amount: $";
            cin >> deposit;

            while (deposit <= 0)
                {

                    cout << "      Error: Deposit must be greater than $0.00" << endl;

                    cout << "Enter deposit amount: $";
                    cin >> deposit;

                }
       
        
            newBalance = balance + deposit;
            balance = newBalance;

            cout << "Deposit succsesful!. New balance: $" << newBalance << endl;
        
        break;

        case 2: // withdraw
            cout << "Enter withdraw amount: $";
            cin >> withdraw;

                while (withdraw <= 0)
                { 

                    cout << "      Error: Withdraw must be greater than $0.00" << endl;
                    cout << "Enter withdraw amount: $";
                    cin >> withdraw;

                }

                while (withdraw > balance)
                {

                    cout << "      Error: Withdraw must be less than or equal to your current balance of $" << balance << endl;
                    cout << "Enter withdraw amount: $";
                    cin >> withdraw;

                }

            newBalance = balance - withdraw;
            balance = newBalance;
            cout << "Withdraw complete.\n      Your new balance is: $" << newBalance << endl;
        
        break;

        case 3: // check balance
            cout << "Your current balance is: $" << balance << endl;
    
        break;


        case 4: // exit

            cout << "Thank you for banking with us.\nHave a nice day!" << endl;
            return 0;

        break;

        default: // invalid action
        {
        cout << "Error: Invalid action selected.\nPlease try again!" << endl;
        }

        }
    
    }
    return 0;
}
