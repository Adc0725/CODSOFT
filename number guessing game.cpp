#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std; 

int main() { 

 srand((unsigned int) time(NULL));

int number = (rand() % 50) + 1; 

int guess; 
 
 do{ 
 cout<< "Guess a number between (1-50)"<<endl;
 cin>> guess; 
 if (guess>50)
 cout<< "must be within range"<<endl;  
 else if(guess>number) 
 cout<< "guess lower"<<endl;  
 else if(guess<number) 
 cout << "guess higher"<<endl;
 else 
 cout<< "You guessed right!"<<endl; 
 
 
 } 
 while (guess!= number);
return 0;
}