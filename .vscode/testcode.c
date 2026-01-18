#include<stdio.h>
int main() {
int x = 727; // Declare variable x
int *ptr = &x; // Declare a pointer to an int variable and assign to it the address of variable x

printf("%p\n", &x); // Print the address of x
printf("%p\n", ptr); // Print the address pointed to by ptr 
}
