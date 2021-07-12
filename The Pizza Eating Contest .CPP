#include<iostream>
using namespace std;
int main(){
    long a[100];
    int temp,sum=0,n;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }
        }
    }
    for(int i=1;i<n;i=i+4)
    {
       sum=sum+a[i];
    }
    cout<<sum;
}
