#include <stdio.h>
int main(void)
{
  int score1 = 10;
  int score2 = 20;
  int score3 = 30;
  printf("Score 1: ");
  for (int i = 0; i < score1; i++)
  {
    printf("#");
  }
  printf("\n");
  printf("Score 2: ");
  for (int i = 0; i < score2; i++)
  {
    printf("#");
  }
  printf("\n");
  printf("Score 3: ");
  for (int i = 0; i < score3; i++)
  /* i++ is shorthand from this:
  // Increment the value of counter by 1
  counter = counter + 1;
  // Shorthand for the above line
  counter += 1;
  // Another shorthand
  counter++;*/
  {
    printf("#");
  }
  printf("\n");
}
