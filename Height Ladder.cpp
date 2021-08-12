#include<bits/stdc++.h>
using namespace std;

int chargingSmartPhone (int initCharge, int finalCharge) {
   // Write your code here
   int i = initCharge;
   int count = 0;
   while(i<finalCharge)
   {
       if(i>=0 && i<=10)
       {
           i += 10;
           ++count; 
       }
       else if(i>=11 && i<=230)
       {
           i += 5;
           ++count;
       }
       else if(i>=231 && i<=559)
       {
           i += 8;
           ++count;
       }
       else if(i>=560 && i<=1009)
       {
           i += 2;
           ++count;
       }
       else if(i>=1010 && i<=5000)
       {
           i += 7;
           ++count;
       }
       else if(i>=5001 && i<=10000)
       {
           i += 8;
           ++count;
       }
       else if(i>=10001 && i<=pow(10,9))
       {
           i += 3;
           ++count;
       }
       else 
       continue;
   }
   return count;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int initCharge;
        cin >> initCharge;
        int finalCharge;
        cin >> finalCharge;

        int out_;
        out_ = chargingSmartPhone(initCharge, finalCharge);
        cout << out_;
        cout << "\n";
    }
}
