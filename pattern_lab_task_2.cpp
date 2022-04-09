// abc+

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

if(input[0]=='a' && input[1]=='b'){
    for(int i=2; i<length;i++){

        tmp=input[i];

        if(tmp == 'c')  {
        flag=true;
        } 
        else {
        flag=false;
        break;
        }
    }
} else flag== false;   


if(flag==true){
    cout<<" Accepted ";
}
else cout<<"Rejected ";


    return 0;
}




