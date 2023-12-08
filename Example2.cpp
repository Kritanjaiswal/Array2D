#include<iostream>
#include<climits>
using namespace std;
int main(){
   int m;
   cout<<"Enter no of rows";
   cin>>m;
   int max=INT_MIN;
   int n;
   cout<<"Enter no of columns";
   cin>>n;
   int arr[m][n];
   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin>>arr[i][j];
    }
   }
   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        if(arr[i][j]>max) max=arr[i][j];
    }
   }
   cout<<max;
}