/* to sum the number till n*/

#include<iostream>
using namespace std;

main()
{
   int n;
   cin>>n;

   int i = 1;
   int sum = 0;

   while(i<=n)
   {
    sum = sum+i;
    i = i+1;

   }
   cout<< "value of sum is "<<sum<<endl;



}