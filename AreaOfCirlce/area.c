// To find out the area of circle by taking the input from the user

// My way 

// #include<stdio.h>
// const double PI = 3.14;
// int main(){
// int r;
// printf("Enter the radius :-");
// scanf("%d", &r);

// printf("Area of the circle is:- %f", PI*r*r);

// return 0;
// }

// Optimize way 

#include<stdio.h>
const double PI = 3.14;

int main(){
  double r;  // ✅ Changed from int to double
  
  printf("Enter the radius :- ");
  scanf("%lf", &r);  // ✅ Changed %d to %lf for double
  
  printf("Area of the circle is:- %f", PI*r*r);
  
  return 0;
}