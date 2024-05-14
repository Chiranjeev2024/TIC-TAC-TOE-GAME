#include<bits/stdc++.h>
using namespace std;

int matrix[3][3] = {{1,2,3}, {4,5,6},{7,8,9}};
int row;
int column;
char token;
string n1;
string n2;

void function1(){

    

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

void function2(){

    int digit;
    
    if(token == 'x'){
        cout<<n1<<" please enter";
        cin>>digit;
    }

    if(token == '0'){
        cout<<n2<<" please enter";
        cin>>digit;
    }


    if(digit == 1){
        row = 0;
        column = 0;

    }
    if(digit == 2){
        row = 0;
        column = 1;
        
    }
    if(digit == 3){
        row = 0;
        column = 2;
        
    }
    if(digit == 4){
        row = 1;
        column = 0;
        
    }
    if(digit == 5){
        row = 1;
        column = 1;
        
    }
    if(digit == 6){
        row = 1;
        column = 2;
        
    }
    if(digit == 7){
        row = 2;
        column = 0;
        
    }
    if(digit == 8){
        row = 2;
        column = 1;
        
    }
    if(digit == 9){
        row = 2;
        column = 2;
        
    }
    else{
        cout<<"Invalid !!!"<<endl;
    }

    

    if(token == 'x' && matrix[row][column] != 'x' && matrix[row][column] != '0'){

        matrix[row][column] = 'x';
        token = '0';
    }
    else if(token == '0' && matrix[row][column] != 'x' && matrix[row][column] != '0'){

        matrix[row][column] = '0';
        token = 'x';
    }
    else
    {
        cout<<"There is no empty space !"<<endl;
        function2();
    }
    
    function1();
}

bool function3(){

    
}