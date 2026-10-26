#include<iostream>
using namespace std;
int main(){
    int arr[3][4];

    cout<<"Enter the elements of array:-";
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
    }

    //Waveform

    cout<<"The elements of array in waveform:- "<<endl;
    for(int j=0;j<4;j++){
        if(j%2==0){
            for(int i=0;i<3;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=3-1;i>0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}