//Any letter, a through z

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

        if(tmp >= 'a'&& tmp <= 'z')  {
        flag=true;
        } 
        else {
        flag=false;
        break;
        }
    }

    if(flag==true){
        cout<<" Accepted ";
    }
    else cout<<"Rejected ";


    return 0;
}




