/*
	Name: 
    Copyright:QIAU 
	Author: MOHAMMADREZA
	Date: 06/04/23 12:04
	Description: 
*/
#include<iostream>
using namespace std;
int main()
{

	float number1 , number2 , s , d , p ,q ;
	cout << "enter number1 : "<< endl;
	cin >> number1;
	cout << "enter number2 : "<< endl;
	cin >> number2; 
	s=number1+number2;
	d=number1-number2;
	p=number1*number2;
	q=number1/number2;
	cout << "\n result of sum: " << s << "\n result defference: " << d << "\n result product: " << p << "\n quotinent: " << q <<endl;
	
	return 0;
}