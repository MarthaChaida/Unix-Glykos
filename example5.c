#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

char seq[1000];
int length;
int i;
int x;

	while(scanf ("%s", seq) ==1)
	{
		length = strlen(seq); 
		for(i=0; i<length && i<=40 && i>=15; i++)
		{
			if(seq[i] =='A' || seq[i] =='C' || seq[i] =='F' || seq[i] =='I' || seq[i] =='L' || seq[i] =='M' || seq[i] =='P' || seq[i] =='V' || seq[i] =='W' || seq[i] =='Y' || seq[i] =='G')

				{
					  x = i+1;
					  while(seq[x] =='A' || seq[x] == 'C' || seq[x] =='F' || seq[x] == 'I' || seq[x] =='L' || seq[x] == 'M' || seq[x] =='P' || seq[x] =='V' || seq[x] == 'W' || seq[x] =='Y'|| seq[x] == 'G')
					  	{ x++; }

					  printf("%.*s", x-i, seq + i);
					  i = x-1;


				}


		}

		

	}



}
