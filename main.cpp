#include <iostream>
#include "SysConverter.h"
using namespace std;
int main() {
    SysConverter s;
    int choice;
    cout << "Welcome, select the base from which you want to convert: \n";
    while(choice != 4){
        cout << "1. Binary \n" << "2. Decimal \n" << "3. Hexadecimal\n" << "4. Exit \n";
        cin >> choice;
        
        int newBase = -1;
        string value = "";

        switch (choice) {
        case 1 :
            //binary
            
            cout << "To which base do you want to convert? \n";
            cout << "1. Decimal \n" << "2. Hexadecimal \n" << "3. Go Back\n";
            cin >> newBase;
            switch(newBase) {
                        case 1 :
                        //decimal
                        cout << "Insert your number: \n";
                        cin >> value;
                        cout << s.convert(value, 2, 10)<<endl;
                        break;
                        case 2 :
                        //hexadecimal
                        cout << "Insert your number: \n";
                        cin >> value;
                        cout << s.convert(value, 2, 16)<<endl;
                        break;
                        case 3 :
                        //go back
                        break;
                        default :
                        cout << "Wrong number. Choose a correct one  \n"<<endl;
            }
            break;
        case 2 :
            //decimal
            cout << "To which base do you want to convert? \n";
            cout << "1. Binary \n" << "2. Hexadecimal \n" << "3. Go Back\n";
            cin >> newBase;
            switch(newBase) {
                        case 1 :
                        //binary
                        cout << "Insert your number: \n";
                        cin >> value;
                        cout << s.convert(value, 10, 2)<<endl;
                        break;
                        case 2 :
                        //hexadecimal
                        cout << "Insert your number: \n";
                        cin >> value;
                        cout << s.convert(value, 10, 16)<<endl;
                        break;
                        case 3 :
                        //go back
                        break;
                        
                        default :
                        cout << "Wrong number. Choose a correct one  \n";
            }
        case 3 :
            //hexadecimal
            cout << "To which base do you want to convert? \n";
            cout << "1. Binary \n" << "2. Decimal \n" << "3. Go Back\n";
            cin >> newBase;
            switch(newBase) {
                        case 1 :
                        //binary
                        cout << "Insert your number: \n";
                        cin >> value;
                        cout << s.convert(value, 16, 2)<<endl;
                        break;
                        case 2 :
                        //decimal
                        cout << "Insert your number: \n";
                        cin >> value;
                        cout << s.convert(value, 16, 10)<<endl;
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