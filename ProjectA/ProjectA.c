#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

 int i, length, x, y, w;
  char seq[7000];

  scanf("%s", seq);
  length = strlen(seq);
  w = 0;
  i = 0;

  while (i < length)
  {
    if (seq[i] == 'a' && seq[i+1] == 't' && seq[i+2] == 'g' ||
        seq[i] == 'A' && seq[i+1] == 'T' && seq[i+2] == 'G')
    {
      x = i;
      w = 1;
      i+=3;
      while (i < length)
      {
        if (seq[i] == 't' && seq[i+1] == 'g' && seq[i+2] == 'a' ||
            seq[i] == 'T' && seq[i+1] == 'G' && seq[i+2] == 'A' ||
            seq[i] == 't' && seq[i+1] == 'a' && seq[i+2] == 'a' ||
            seq[i] == 'T' && seq[i+1] == 'A' && seq[i+2] == 'A' ||
            seq[i] == 't' && seq[i+1] == 'a' && seq[i+2] == 'g' ||
            seq[i] == 'T' && seq[i+1] == 'A' && seq[i+2] == 'G')
        {
          y = i;
          printf("Coding Region found at position %d - %d\n", x+1, y+3);
          break;
        }
        else if (i+3 >= length)
        {
          printf("Start codon at position %d but no stop codon found.\n", x+1);
          break;
        }
        i+=3;
      }
    }
    else
    {
      i++;
    }
  }
  if (!w)
  {
    printf("No coding region found.\n");
  }
}
