#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	int i , j ;
	int n;
	
	cout<<"Enter n:"<<endl;
	cin>>n;
	
	for ( i = 1 ; i <= n ; i++ )
	{
	
	  for ( j = 1 ; j <= i ; j++ )
	     cout<<j<<'\t';
	  cout<<endl;
    }
}