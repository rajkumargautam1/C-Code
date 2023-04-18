#include<iostream>
using namespace std;
int main (){
    int lcount=0;
    int ucount=0;
    int dcount=0;
    int scount=0;
    int wcount=0;

    char ch;
    while (true){
        ch=cin.get();
        if(ch=='$'){
            break;
        }
        if(ch>='A' and ch<='Z'){
        ucount++;
      
    }
        if(ch>='a' and ch<='z'){
        lcount++;
        
    }
        if (ch>='0' and ch>='9'){
        dcount++;
    }
        if (ch==' ' || ch=='\n'||ch=='\t'){
            wcount++;
    }        
        else{
            scount++;
        }
    }
    cout<<"lower case:"<<lcount<<endl;
    cout<<"upper case:"<<ucount<<endl;
    cout<<"digit case:"<<dcount<<endl;
    cout<<"space case:"<<wcount<<endl;
    cout<<"special case:"<<scount<<endl;
}
