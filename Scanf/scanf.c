// Scanf is the counterpart of the printf

// printf is used to print something on the screen it's a general purpose

// scanf is used to read something from the user it's also a general purpose

// Note:- scanf stops reading when it sees a space it's sees as a separator. 🚀

// Example 1 with integer :-

// #include<stdio.h>
// int main(){
//   int x, y;
//   printf("Enter your first number:-\n");
//   scanf("%d", &x);
//   printf("Enter your second number:-\n");
//   scanf("%d", &y);

//   printf("Sum of two number is %d", (x+y));

//   return 0;
// }

// Example 2 with character :-

// #include<stdio.h>
// int main(){
//   char name[100];
//   printf("Enter your name:-\n");
//   scanf("%s", name);
//   printf("Hi, %s", name);

//   return 0;
// }

// Ecample 3:-

#include<stdio.h>
int main(){
  int x,y;
  printf("Enter two numbers :-");
  scanf("%d%d", &x, &y);
  printf("Multiplication of two numbers is %d", x*y);

  return 0;
}