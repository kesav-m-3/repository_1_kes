#include<stdio.h>
#include"myheader.h"

int main(){
  int a=10, b=20;
  printf("\n%d\n%d\n%d\n%d\n%d\n",sum(a,b), diff(a,b), prod(a,b), quo(a,b), rem(a,b));
}
