#include <iostream>
#include "edit.h"

using namespace std;
void edit(char*& name, char*& priority, char*& description, char*& year, char*& month, char*& day, char*& hour, char*& minutes)
{
    char* new_name = new char[100]{};
    char* new_priority  = new char[100]{};
    char* new_description = new char[100]{};
    char* new_year  = new char[100]{};
    char* new_month  = new char[100]{};
    char* new_day  = new char[100]{};
    char* new_clock = new char[100]{};
    char* new_clock2  = new char[100]{};
    int choose{};
    cout<<"If you need to change;"<<'\n'<<"name(1)"<<"priority(2)"<<'\n'<<"description(3)"<<'\n'<<"year(4)"<<'\n'<<
        "month(5)"<<'\n'<<"day(6)"<<'\n'<<"hour(7)"<<'\n'<<"minutes(8)"<<'\n';
    cin>>choose;
    switch (choose) {
        case 1:
        {
            cout<<"Enter  new name of deal: ";
            cin>>new_name;
            name = new_name;

            break;
        }case 2:
        {
            cout<<"Enter  new priority of deal: ";
            cin>>new_priority;
            priority = new_priority;

            break;
        }case 3:{
            cout<<"Enter the new description: ";
            cin>>new_description;
            description = new_description;

            break;
        }case 4:
        {
            cout<<"Enter the new year: ";
            cin>>new_year;
            year = new_year;

            break;
        }case 5: {
            cout<<"Enter the new month: ";
            cin>>new_month;
            month = new_month;

            break;
        }case 6: {
            cout<<"Enter the new day: ";
            cin>>new_day;
            day = new_day;

            break;
        }case 7:{
            cout<<"Enter the new hours: ";
            cin>>new_clock;
            hour = new_clock;

            break;
        }case 8:{
            cout<<"Enter the new minutes: ";
            cin>>new_clock2;
            minutes = new_clock2;
            break;

        }


    }

}