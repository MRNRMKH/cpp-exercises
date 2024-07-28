#include<iostream>

using namespace std;
int main()
{
	float a[3][6];
	float c=0,s;
	int i,j;
	
	        cout<<"Enter Selected Number = ";
	        cin>>s;
	        cout<<"Enter array 3*6 = "<<endl;
	            for(i=0;i<3;i++)
	              for(j=0;j<6;j++){
	       	      cin>>a[i][j];
                   if(a[i][j]==s){
                   	c++;
				   }
       		    }
       		      if(c==0)
       		        cout<<" NO ";
       		        else
       		        cout<<" YES ";

}