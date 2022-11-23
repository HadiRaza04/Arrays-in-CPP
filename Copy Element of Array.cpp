#include <iostream>
using namespace std;
int main(){
	int array[3];
	int n=sizeof(array)/sizeof(array[2]);
	
	for(int i=0; i<n; i++){
		cout<<"Enter value: ";
		cin>>array[i];
	}
	int array2[3];
	for(int i=0; i<n; i++){
		array2[i] = array[i];
		cout<<"Value at index "<<i<<" is "<<array2[i]<<endl;
	}
}
