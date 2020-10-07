#include <stdio.h>
void chart(int score);//function prototype
int main(void)
{
  int score1 = 10;
  int score2 = 20;
  int score3 = 30;
  printf("Score 1: ");
  chart(score1);//function declare
  printf("Score 2: ");
  chart(score2);//function declare
  printf("Score 3: ");
  chart(score3);//function declare
}
void chart(int score)//function call
{
  for (int i = 0; i < score; i++)
  {
    printf("#");
  }
  printf("\n");
}
