#include<iostream>

using namespace std;
int main()
{
	int a[5][4];
	int min=0,x,z,i,j;
	
	   cout<<"enter array 5*4 "<<endl;
	     for(i=0;i<5;i++){
	       for(j=0;j<4;j++){
	       	cin>>a[i][j];
		   }
	    }
	        min=a[0][0];
	        for(i=0;i<5;i++){
	          for(j=0;j<4;j++){
	          	if(min>a[i][j]){
	          		min=a[i][j];
	          		x=i+1;
	          		z=j+1;
				  }
			  }
		}
	
	cout<<"Row = "<<x<<" col = "<<z<<endl;
	cout<< "min is = "<<min<<endl;
	
}