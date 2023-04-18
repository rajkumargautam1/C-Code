#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character"<<endl;
    cin>>ch;

    if(ch>='A' and ch<='Z'){
        cout<<ch<<"is an upper case letter"<<endl;
    }
    if(ch>='a' and ch<='z'){
        cout<<ch<<"is an lower case letter"<<endl;
    }
    else if (ch>=0 and ch>=9){
        cout<<ch<<"is a digit"<<endl;
    } else {
        cout<<ch<<"is a special symbol"<<endl;
    }
}
