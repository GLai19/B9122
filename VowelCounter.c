/*
 * VowelCounter.c
 *
 *  Created on: Nov 8, 2018
 *      Author: guan-hunglai
 */

#include <math.h>
#include <stdio.h>

int VowelCounter(char InputChar[20])
{
	int vowel[5] = {0,0,0,0,0};
	int a, b;

	for (a=0; a<20; a++)
	{
	if (InputChar[a] == 'a'){
		vowel[0]++;
	}
	if (InputChar[a] == 'e'){
		vowel[1]++;
	}
	if (InputChar[a] == 'i'){
		vowel[2]++;
	}
	if (InputChar[a] == 'o'){
		vowel[3]++;
	}
	if (InputChar[a] == 'u'){
		vowel[4]++;
	}
	}
	for(b=0; b<5; b++){
		printf("vowel[%d]=%d\n", b, vowel[b]);
	}
}


int main()
{
	char InputChar[20] = {"supercalifragilistic"};

	return VowelCounter(InputChar);
}
