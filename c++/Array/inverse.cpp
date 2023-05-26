#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n; 
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int brr[100];
    for(int i=0; i<n; i++) {
		// int x = arr[i];
		// brr[x] = i;

		brr[arr[i]] = i;
	}

	for(int i=0; i<n; i++) {
		cout << brr[i] << " ";
	}

	cout << endl;

	return 0;
}