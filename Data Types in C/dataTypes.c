#include<stdbool.h>
#include<stdio.h>
int main(){
  // integer
  int age = 26;
  // strings :- is a sequence of a characters
  char name[] = "Yagnik";
  // float(decimal)
  float weight = 62.8;
  // boolen is later introduced so we use stdbool.h to use it
  bool isMarried = false;
  // character
  char gender = 'M';

  // To print all this in the screen

  printf("%d\n", age);
  printf("%s\n", name);
  printf("%f\n", weight);
  printf("%d\n", isMarried);
  printf("%c\n", gender);

  return 0;
}