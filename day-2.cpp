#include<iostream>
using namespace std;

int find_triplet(int arr[],int n){
    for(int i=0;i<n;i++){
        int right=i+1;
        int left=n-1;
        while(right<left){
            int sum=arr[i]+arr[right]+arr[left];
            if(sum==0){return 1;}
            else if(sum>0){left--;}
            else{right++;}
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<find_triplet(arr,n);
    return 0;
}