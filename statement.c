# include <stdio.h>
int main(){

int age = 18;
printf("Enter your age\n :");

if (age >= 18){
  printf("You are an adult.\n");
  if(age>=65){
    printf("You are an elder.\n");
  }
}
else{
  printf("You are a minor.");
}
return 0;
}
