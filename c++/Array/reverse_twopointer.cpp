#include <iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;

    for(int i=0; i<n; i++){

        cin>>arr[i]>>endl;
    }

    int i=0;
    int j=n-1;

    while (i<j){
        swap(arr[i] , arr[j] )
        i++;
        j--;
    }

    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }


}