//anything except a,b

#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char input[100] = {};
    int length = 0;
     char tmp;
    bool flag=true;
    cout<<"Enter input : ";
    cin>>input;

    length = strlen(input);

     for(int i=0; i<length;i++){

        tmp=input[i];
        cout<<tmp<<endl;

        if (tmp=='a' || tmp=='b' ){
            flag=false;
            break;

        }
        else   continue;

    }

    if(flag==true){
        cout<<" Accepted ";
    }
    else cout<<"Rejected ";





    return 0;
}


