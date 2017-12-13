#include <iostream>
#include <stdio.h>
using namespace std;
long double factorial(int);
int main(){
	
	
	int a,b,r,x;
	
	cout<<"hola mundo";
	cout<<"ingresa tu primer numero";
	cin>>a;
	cout<<"ingresa tu segundo numero";
	cin>>b;
	r=a+b;
	cout<<"suma"<<r;
	
	cout<<"introduzca nuumero";
	cin>>x;
	cout<<"factorial:"<<factorial(x);

}
	long double factorial(int n)
 {
     long double fact;
     if (n==0)
         return 1;
     else
          return n*factorial(n-1);
  }
