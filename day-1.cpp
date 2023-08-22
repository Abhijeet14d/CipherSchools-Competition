#include<iostream>
using namespace std;

int main(){
    int n,max_area=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n],area;
    cout<<"Enter the height: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                area=arr[i];
            }
            else{
                area=arr[j]*(j-i);
            }
            max_area= (max_area>area)?max_area:area;
        }
    }
    cout<<"max water area: "<<max_area;
    return 0;
}