#include <iostream>
#include <stdlib.h>
using namespace std;

class Account {
    int id, password, login_id, login_password, balance = 0, deposit, withdrawal;
    char choice;

public:
    void printIntroMenu() {
        cout << "Please select an option from the menu below:" << endl;
        cout << "l:Login"<<endl<<"c:Create New Account"<<endl<<"q:Quit" << endl;
        cin >> choice;
    }

    void printMainMenu() {
        cout << "d:Deposit Money"<<endl<<"w:Withdraw Money"<<endl<<"r:Request Balance"<<endl<<"q:Quit" << endl;
        cin >> choice;
    }

    void login() {
        cout << "Please enter your user id: ";
        cin >> login_id;
        cout << "Please enter your password: ";
        cin >> login_password;
    }

    void createAccount() {
        cout << "Please enter your user id: ";
        cin >> id;
        cout << "Please enter your password: ";
        cin >> password;
        cout << "Welcome aboard! Your account setup is complete!" << endl;
    }

    void start() {
        printIntroMenu();
        while (true) {
            switch (choice) {
                case 'l':
                    login();
                    if (id == login_id && password == login_password) {
                        cout << "\t\t**Access Granted!**"<<endl<<"Please select desired option:"<< endl;
                        while (true) {
                            printMainMenu();
                            switch (choice) {
                                case 'd':
                                    cout << "Amount of deposit: ";
                                    cin >> deposit;
                                    balance += deposit;
                                    break;
                                case 'w':
                                    cout << "Amount of withdrawal: ";
                                    cin >> withdrawal;
                                    if (withdrawal <= balance) {
                                        balance -= withdrawal;
                                    } else {
                                        cout << "Insufficient balance!" << endl;
                                    }
                                    break;
                                case 'r':
                                    cout << "Your current balance is " << balance << endl;
                                    break;
                                case 'q':
                                    cout << "Thanks for accessing Tanishaa's ATM!" << endl;
                                    exit(0);
                                    break;
                                default:
                                    cout << "Invalid option. Please enter a valid choice." << endl;
                                    break;
                            }
                        }
                    } else {
                        cout << "*** LOGIN FAILED! ***" << endl;
                        printIntroMenu();
                    }
                    break;
                case 'c':
                    createAccount();
                    printIntroMenu();
                    break;
                case 'q':
                    cout << "Thanks for accessing Tanishaa's ATM!" << endl;
                    exit(0);
                    break;
                default:
                    cout << "Invalid option. Please enter a valid option." << endl;
                    printIntroMenu();
                    break;
            }
        }
    }
};

int main() {
    Account obj;
    cout << "Welcome to Tanishaa's ATM Machine" << endl;
    obj.start();
    return 0;
}
