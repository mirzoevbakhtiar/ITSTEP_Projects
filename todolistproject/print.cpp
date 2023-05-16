#include <iostream>
#include "print.h"

using namespace std;

void print(char* name , char* priority , char* description, char* year , char* month , char* day , char* clock , char* clock2){

    cout << "name: " << name << '\n';
    cout << "priority: " << priority << '\n';
    cout << "description: " << description << '\n';
    cout << "date: " << day << '.' << month << '.' << year << '\t' << "time: " << clock << ':' << clock2 << '\n';
}
