#include <iostream>
#include <string>

#include "validate.h"

using namespace std;

int main()
{
    ///Examples
    string str_num;
    do{
    cout<<"Enter a integer: ";
    cin>>str_num;
    }while(!(isInt(str_num)));

    cout<<"Integer : "<<str_num<<endl;

    do{
        cout<<"Enter a floating number: ";
        cin>>str_num;
    }while( !( isReal(str_num) ) );

    cout<<"Real : "<<str_num<<endl;


    return 0;
}
