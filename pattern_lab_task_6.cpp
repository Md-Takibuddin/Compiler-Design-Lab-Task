#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char input[100] = {};
    int length = 0;
    cout<<"Enter input : ";
    cin>>input;

    length = strlen(input);

    if (length<2)
    {
            if (input[0]=='a' || input[0]=='b' ){
                 cout<<" Accepted";
            }
             else cout<<" Rejected"; 
    }
    else cout<<"Rejected";

    return 0;
}

