#include <iostream>
#include "SysConverter.h"
using namespace std;

int main() {
    int choice;
    cout << "Welcome, select the base from which you want to convert: \n";
    while(choice != 4){
        cout << "1. Binary \n" << "2. Decimal \n" << "3. Hexadecimal\n" << "4. Exit \n";
        cin >> choice;
        switch (choice) {
        case 1 :
            //binary
            int newBase;
            cout << "To which base do you want to convert? \n";
            cout << "1. Decimal \n" << "2. Hexadecimal \n" << "3. Go Back\n";
            cin >> newBase;
            switch(newBase) {
                        case 1 :
                        //decimal
                        break;
                        case 2 :
                        //hexadecimal
                        break;
                        case 3 :
                        break;
                        //go back
                        default :
                        cout << "Wrong number. Choose a correct one  \n";
            }
            break;
        case 2 :
            //decimal
            newBase = -1;
            cout << "To which base do you want to convert? \n";
            cout << "1. Binary \n" << "2. Hexadecimal \n" << "3. Go Back\n";
            cin >> newBase;
            switch(newBase) {
                        case 1 :
                        //Binary
                        break;
                        case 2 :
                        //hexadecimal
                        break;
                        case 3 :
                        //go back
                        break;
                        
                        default :
                        cout << "Wrong number. Choose a correct one  \n";
            }
        case 3 :
            //hexadecimal
            newBase = -1;
            cout << "To which base do you want to convert? \n";
            cout << "1. Binary \n" << "2. Decimal \n" << "3. Go Back\n";
            cin >> newBase;
            switch(newBase) {
                        case 1 :
                        //binary
                        break;
                        case 2 :
                        //decimal
                        break;
                        case 3 :
                        //go back
                        break;
                        default :
                        cout << "Wrong number. Choose a correct one  \n";
            }
        case 4 :
            //exit
            cout << "See you next time.";
            break;
        default:
            cout << "Wrong number. Choose a correct one  \n";
            break;
        }
    }
    return 0;
}