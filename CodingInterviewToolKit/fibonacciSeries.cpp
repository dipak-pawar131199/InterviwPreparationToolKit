# include<iostream>
using namespace std;
/*
   f0=1,f1=1,f2=f0+f1,....
   1,1,2,3,5,8,...
*/
int main()
{
   int f0=1,f1=1,f2;
   int n;
   cout<<"How many terms? ";
   cin>>n;
   cout<<f0<<"\t"<<f1<<"\t";
   while(n-2>0)
   {
      f2=f0+f1;
      f0=f1;
      f1=f2;
      cout<<f2<<"\t";
      n=n-1;
   }//end while  
   
}//end main() 
