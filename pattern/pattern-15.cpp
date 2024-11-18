#include <bits/stdc++.h>
using namespace std;


void pattern2(int n)
{ 


    for (int i = n; i >=0; i--) {
   
      for(char j = 'A' ; j <= 'A'+i; j++){
          cout<<j<<" ";
         
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