#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
string Package;
double Price;
double Time;
cout << ("Enter Package: "); cin >> Package;
	if (Package == "A")
	{
	 cout << "Used Hours: "; cin >> Time;
	   {
		   if (Package == "A")
		   {
			   if (Time<=10)
			   {
				   Price=995;
			   }
			   else (Time>10);
			   {
				   Price=995+(Time-10)*20;
			   }
		   }
	   }
	}
	if (Package == "B")
	{
	   cout << ("Used Hours: "); cin >> Time;
	   {
		   if (Package == "B");
		   {
			   if (Time<=20)
			   {
				   Price=1495;
			   }
			   else (Time>20);
			   {
				   Price=1495+(Time-20)*10;
			   }
		   }
	   }
	}
	if (Package == "C")
	{
	   cout << ("Used Hours: Unlimited""\n");
	   {
		   Price=1995;
	   }
	}
cout << ("Amount Due: P") << Price;
getch();
return 0;
}

