#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <cmath>
using namespace std;
int main()
{
   int x;
   cout <<"Counting...\n";

   for (x=1; x < 10;x++)
 {
   cout << x << ",";
 }

   for (x=10; x >= 10, x <= 30; x += 2)
 {
   cout << x << ",";
 }

cout << " ";
getch();
return 0;
}
