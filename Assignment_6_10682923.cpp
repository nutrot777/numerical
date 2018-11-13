#include<iostream>
using namespace std;

int main()
{
   int n, i, arr[20], search, first, last, ave_arr;
cout<<"Enter total number of elements:";
cin>>n;
cout<<"Enter "<<n<<"number :";
for (i=0; i<n; i++)
{     

     cin>>arr[i];
}
cout<<"Enter a number to find:";
cin>>search;
first=0;
last = n-1;
ave_arr=(first+last)/2;
         while(first<=last)
     {    
       if(arr[ave_arr]<search){
    first= ave_arr+1;}
else if(arr[ave_arr]==search){
        cout<<search<<" found at location "<<ave_arr+1<<endl;
       break; }
else {last = ave_arr-1;}
      ave_arr=(first+last)/2;   

}

if(first>last){
      cout<<"not found! "<<search<<" is not present in the list"<<endl;}
return 0;
}
