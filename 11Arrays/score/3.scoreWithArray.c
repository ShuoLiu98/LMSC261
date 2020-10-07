// Generates a bar chart of three scores using an array
// With an array, we can collect our scores in a loop, and access them later in a loop.
#include <stdio.h>
void chart(int score);//function prototype
int main(void)
{
  // Create an array that hold three integer types
  int scores[3];
  for (int i = 0; i < 3; i++)
  {
    // Access each element in an array with []
    scores[i] = i * i + 1;
  }
  // Chart scores
  for (int i = 0; i < 3; i++)
  {
    printf("Score %i: ", i + 1);
    chart(scores[i]);
  }
}
// Generate bar
void chart(int score)
{
  // Output one hash per point
  for (int i = 0; i < score; i++)
  {
      printf("#");
  }
  printf("\n");
}
