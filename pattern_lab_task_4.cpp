// Onn or More Alphanumeric char 

#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char input[100] = {};
    char tmp;
    bool flag=false;
    int length = 0;
    cout<<"Enter input : ";
    cin>>input;

    length = strlen(input);

    for(int i=0; i<length;i++){

        tmp=input[i];

        if ( iswalnum(tmp) ){
            flag=true;

        }
        else if (!iswalnum(tmp)) {
            flag = false; 
            break;
        }
    }

    if(flag==true){
        cout<<" Alphanumeric ";
    }
    else cout<<"Not Alphanumeric ";


    return 0;
}

