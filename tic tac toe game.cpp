#include <iostream> 
using namespace std; 

char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}}; 
int row; 
int column; 
bool tie; 
char token = 'x'; 
string p1; 
string p2;

void functionOne() { 
  
 
 cout<<  "    |   |  \n"; 
 cout<< "  "<<space[0][0]<<" | "<< space[0][1]<<" | "<< space[0][2]<<"  \n";
 cout<<" ___|___|____ \n";   
 cout<<  "    |   |  \n";
 cout<< " "<<space[1][0]<<"  | "<< space[1][1]<<" | "<< space[1][2]<<"  \n";
 cout<<" ___|___|____ \n"; 
 cout<<  "    |   |  \n"; 
  cout<< " "<<space[2][0]<<"  | "<< space[2][1]<<" | "<< space[2][2]<<"  \n";
 cout<<  "    |   |  \n";
}

void functionTwo() { 

int digit; 
if(token=='x') 
{ 
cout<<p1<< " please enter"<<endl; 
cin>> digit; 
}
if(token=='O') 
{ 
cout<< p2<< " please enter"<<endl;
cin>> digit; 

} 

if (digit==1) 
{ 
row=0; 
column=0;
} 
if (digit==2) 
{ 
row=0; 
column=1;
}
if (digit==3) 
{ 
row=0; 
column=2;
}
if (digit==4) 
{ 
row=1; 
column=0;
} 
if (digit==5) 
{ 
row=1; 
column=1;
} 
if (digit==6) 
{ 
row=1; 
column=2;
} 
if (digit==7) 
{ 
row=2; 
column=0;
} 
if (digit==8) 
{ 
row=2; 
column=1;
} 
if (digit==9) 
{ 
row=2; 
column=2;
} 
else if (digit<1 && digit>9) { 
cout<< "invalid input! /n";  
}  

if(token=='x' && space[row][column] !='x' && space[row][column] !='O') 
{
space[row][column]='x'; 
token='O'; 
} 
else if(token=='O' && space[row][column] !='x' && space[row][column] !='O') 
{ 
space[row][column]='O'; 
token='x';
} 
else{ 
cout<<"There is no empty space \n"; 
functionTwo();
} 
}

bool functionThree(){ 
for(int i=0;i<3;i++) 
{ 
if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i]) 
return true; 
} 
 if(space[0][0]==space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[1][1]==space[2][0] ) 
 { 
 return true;
 } 
 tie = true; 
 
 for(int i=0;i<3;i++) 
 { 
 for(int j=0;j<3;j++) 
 { 
 if(space[i][j]!='x' && space[i][j] !='O') 
{  
tie = false;
return false;
 }
  }   
  } 
  tie = true; 
  return false; 
} 

int main(){


cout<<"Enter the name of the first player: \n";
 cin>>p1; 
 cout<<"Enter the name of the second player: \n";
 cin>>p2; 
 cout<<p1<< " is player 1 so they will play first \n";
 cout<<p2<< " is player 2 so they will play second \n"; 


{ 
while(!functionThree())  
{ 
functionOne(); 
functionTwo(); 

}  
if(tie) { 
cout<<"Its a draw"<<endl;
}

else if(token=='x' && tie == false)  
{ 
cout<<p2<<" Wins!"<<endl; 
} 
else if(token=='O' && tie == false) 
{ 
cout<<p1<<" Wins!"<<endl; 
} 

cout<<"Would you like to play again?"<<endl;
}
}

