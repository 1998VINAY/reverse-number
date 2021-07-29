#include<stdio.h>      
#include<conio.h>      
main()      
{      
int n, reverse=0, rem;    //declaration of variables.  
clrscr(); // It clears the screen.     
printf("Enter a number: ");      
scanf("%d", &n);      
while(n!=0)      
{      
     rem=n%10;      
     reverse=reverse*10+rem;      
     n/=10;      
}      
printf("Reversed Number: %d",reverse);      
getch();  // It reads a character from the keyword.    
}      