#include <iostream> 
using namespace std; 

int main() { 
double num1, num2; 
char op; 

cout<< "Enter the operator (+ - / *)"<< endl; 
cin>> op; 
 
cout<< "enter the numbers to be calculated"; 
cin>> num1 >>num2; 

switch (op) 
{ 
case '+': 
cout<< num1<< op <<num2<< "="<< num1+num2<<endl; 
break; 
case '-': 
cout<< num1<< op <<num2<< "="<< num1-num2<<endl; 
break; 
case '*': 
cout<< num1<< op <<num2<< "="<< num1*num2<<endl;  
break; 
case '/': 
if (num2==0.0) { 
cout << "cannot divide by zero";
} else{

cout<< num1<< op <<num2<< "="<< num1/num2<<endl; 
}
break; 

default: 
cout<< "invalid operator"<<endl;


}

  
 
 return 0;
}