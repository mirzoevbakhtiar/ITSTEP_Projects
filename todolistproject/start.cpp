#include <iostream>
#include "start.h"
using namespace std;
void start(char* name , char* priority , char* description , char* year , char* month , char* day , char* clock , char *clock2 , char* choice){

    cout <<"Hi , this is my to do list"<<'\n';
    cout << "You can made a little to do list!" << '\n';
    cout << "Enter the name: ";
    cin>> name;
    cout << "Enter the priority: ";
    cin>>priority;
    cout << "Some description:";
    cin>>description;
    cout << "Enter year: ";
    cin>>year;
    cout << "Enter month: ";
    cin>>month;
    cout << "Enter day:";
    cin>>day;
    cout << "Enter hour:";
    cin>>clock;
    cout << "enter minutes:";
    cin>>clock2;
    cout << "GREAT!" << '\n';
    cout << "Would you need to do another list(yes or No):";
    cin>>choice;
}
