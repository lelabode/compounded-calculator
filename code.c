# include <stdio.h>
# include <stdbool.h>
 void hello(char name [], int age);
 int main(){
     hello("Spongebob", 20);
  //printf("Hello %s\n", name);
  //printf("You are %d years old.\n", age);
  return 0;
 }
 void hello( char name[], int age){
  //hello("Spongebob", 20);
  printf("Hello %s\n", name);
  printf("You are %d years old.\n", age);
 
}
