#include <iostream>
using namespace std;
long long factorial(int n)
{
   long long result = 1; 
   for (int i = 1; i <= n; i++)
   {
       result = result * i;
   }
   return result;
}
int main()
{
   int x;
   cout << "Enter number: ";
   cin >> x;
   long long fact_result = factorial(x);
   cout << "Factorial: " << fact_result << '\n';
   return 0;
}
