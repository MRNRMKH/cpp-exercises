#include <iostream>
using namespace std;

int main(){
int a[3][4],i,j;
  cout<<" enter array 3*4 \n";
       for(i=0;i<3;i++)
       for(j=0;j<4;j++)
        {
         cin>>a[i][j];
         if(a[i][j]<50)
         a[i][j]=0;
        }
       
         for(i=0;i<3;i++){
         cout<<"\n";
         for(j=0;j<4;j++){
         cout<<a[i][j]<<"\t";
         }
         }
}
