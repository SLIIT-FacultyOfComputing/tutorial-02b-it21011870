/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/
/*
#include <stdio.h>
int main()
{
    int no;
    long fac;

    printf("Enter a Number : ");
    scanf("%d", &no);

    fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }

    printf("Factorial of %d is %ld\n", no, fac);  
    return 0;
}
*/
#include<iostream>
#include<iomanip>

using namespace std;  

int main(void){
  int no,r;     //define variable
  long fac;

  cout<<"Enter a number : ";  //display promopt
  cin>>no;  //read value
  r=no; //store value
  fac=1;

  for(;r>=1;r--){ //repetition condition
    fac=fac*r;  //calculation
  }
  
  cout<<"Factorial of "<<no<<setiosflags(ios::fixed)<<" is "<<fac;   //display final output
}