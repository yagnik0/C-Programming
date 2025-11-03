// Since scanf cannot read th efull name with a space fgets was introduced in palce of gets(deprecated in latest version of c)

// char name[100] = 99 characters including \0 at the end of it.

#include<stdio.h>
int main(){
  char name[100];
  printf("Enter your anme:-");
  fgets(name, 100, stdin);
  printf("Hi, %s\n", name);

  return 0;
}