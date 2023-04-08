/*
	Name: convenert fahrenheit to celsius
	Copyright: QIA
	Author: MOHAMMADREZA
	Date: 06/04/23 01:45
	Description: 
*/
#include <iostream>
using namespace std;
int main()
{  
   float y=0.555555556;
   float f, c ;
   
   cout << "enter the fahrenheit value: "<<endl;
   cin >> f ;
   c=y*(f-32);

	cout << "\n"<< f << " fahrenheit= " <<(  c )<<" celsius."<<endl;
	return 0;
}