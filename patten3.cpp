#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        //print 1st triangle of spaces
        int space=n-row;
        while (space){
            cout<<" ";
            space--;
        }
        //print 2nd triangle
        int j=1;
        while (j<=row)
        {
            cout<<j;
            j++;
        }
        //print 3rd triangle(spaces)
        int start=row-1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        row++;
        
    }
}