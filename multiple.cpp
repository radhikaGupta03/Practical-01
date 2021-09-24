#include <bits/stdc++.h>
   using namespace std;
   int main() {
       int n,num;
  
       cin>>n;
       for(int i=0 ; i < n ; i++) {
       cin >>num;
       int x= (num-1)/3;
       int y= (num-1)/5;
      int z= (num-1)/15;
 
      int sum_of_3= ((x)*(2*3 + (x-1)*3))/2;
      int sum_of_5= ((y)*(2*5 + (y-1)*5))/2;
      int sum_of_15= ((z)*(2*15 + (z-1)*15))/2;
 
     int ans= (sum_of_3 + sum_of_5) - sum_of_15;
      cout<<"Answer:>>"<<ans<<endl;
      }
      return 0;
}   
