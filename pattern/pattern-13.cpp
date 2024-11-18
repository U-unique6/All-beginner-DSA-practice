#include <bits/stdc++.h>
using namespace std;


void pattern2(int n)
{ int num =0  ;


    for (int i = 1; i <= n; i++) {
   
      for(int j = 1 ; j <= i; j++){
          cout<<num;
          num++;
      }
     
      
      cout<<endl;
      
   
  }
}



int main()
{

    int n;
    cin >> n;
   
    pattern2(n);

    return 0;
}