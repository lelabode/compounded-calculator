# include<stdio.h>
int result;
int add(int x, int y){
  result = x+y;
  return result;
}
int subtract(int x, int y){
  result = x - y;
  return result;
}
int main(){

  int x = 9;
  int y = 10;
  result = add(x,y);
  result = subtract(x,y);
  printf("%d", result);
  return 0;
}
