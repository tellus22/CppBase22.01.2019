#include <iostream>
#include <stdio.h>
using namespace std;
	
	int HashFunction(int a){
	return (a%4);
	}
	int main(){
	int b;
	cout<<"Key > ";
	cin>>b;
	cout<< "HashFunction (" << b << ") = " << HashFunction(b) <<endl;
	system ("pouse");
	}
