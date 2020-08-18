#include <stdio.h>

int main(void) 
{ 
  float B,H,ANS;
  printf("Enter B : ");
  scanf("%f", &B);
  printf("Enter H :");
  scanf("%f", &H);
  ANS = 0.5*B*H;
  printf("ANSWER IS %0.2f",ANS);
  return 0;
}