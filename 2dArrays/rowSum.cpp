#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    cout<<"Enter the elements of array: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=arr[i][j]+sum;
            cout<<arr[i][j]<<" ";
        }
        cout<<"=> "<<sum<<"\n";
    }

    return 0;
}