
#include<iostream>
using namespace std;
int main()
{
      int n1=0, n2=1, n3,num;
      cout<<"Enter a number till fibonacci series print...:";
      cin>>num;
      cout<<"FIBONACCI SERIES..\n";
      cout<<n1<<" "<<n2<<" ";
      for(int i=0; i<=num;i++)
      {
      	n3=n1+n2;
      	n1=n2;
      	n2=n3;
      	cout<<" "<<n3;
	  } 
}
