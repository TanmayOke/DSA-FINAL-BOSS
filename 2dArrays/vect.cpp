#include <iostream>
using namespace std;
#include<vector>
#include <algorithm>
int main(){
    int n,m;
    cout<<"Enter the number of rows and cols:- ";
    cin>>n>>m;
    vector<vector<int> >matrix(n,vector<int>(m,5));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
 }
cout<<endl;
}

cout<<"The number of rows:- "<<matrix.size()<<endl;

cout<<"The number of cols:- "<<matrix[0].size()<<endl;

}