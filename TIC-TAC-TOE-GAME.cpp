#include<bits/stdc++.h>
using namespace std;

int matrix[3][3] = {{1,2,3}, {4,5,6},{7,8,9}};
int row;
int comumn;


void function1(){

    string n1;
    string n2;

    cout<<"Enter the name of first player: "<<endl;
    getline(cin, n1);
    cout<<"Enter the name of second player: "<<endl;
    getline(cin, n2);

    cout<<n1<<" is the player1 so he/she play first"<<endl;
    cout<<n2<<" is the player1 so he/she play second"<<endl;

    cout<<"     |     |   "<<endl;
    cout<<"  "<<matrix[0][0]<<"  |  "<<matrix[0][1]<<"  |  "<<matrix[0][2]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |   "<<endl;
    cout<<"  "<<matrix[1][0]<<"  |  "<<matrix[1][1]<<"  |  "<<matrix[1][2]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |   "<<endl;
    cout<<"  "<<matrix[2][0]<<"  |  "<<matrix[2][1]<<"  |  "<<matrix[2][2]<<"  "<<endl;
    cout<<"     |     |   "<<endl;
}

