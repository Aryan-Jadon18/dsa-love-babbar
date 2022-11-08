#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //print spaces
        int space=n-row;
        while(space){
            cout<<" ";
            space--;
        }
        //stars print
        int col=1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
}