#include <iostream>
#include <stdio.h> 
#include <stdlib.h>     
#include <time.h>     
	using namespace std;

int main ()
{
  	int secret,a;
	srand (time(NULL));
	secret = rand() % 10 + 1; 	
	
	do {
    cin >> a;
	} 
	while (secret != a);
	
	cout << "U WON"<<endl;
  	return 0;
	}
