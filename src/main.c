#include<stdlib.h>
#include<stdio.h>

int fibo(int i) {
  if (i == 0) return 0;
  if (i == 1) return 1;
  if (i == 2) return 2;
  return fibo(i-1) + fibo(i-2);
}


int main(int argc, char** argv) {
  int i = 5;
  printf("Hello world !!!\n");
  printf("compute fibonacci(%i): %i\n", fibo(i), i); 
  exit(0);
}
