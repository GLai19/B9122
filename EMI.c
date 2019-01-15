/*
 * EMI.c
 *
 *  Created on: Nov 8, 2018
 *      Author: guan-hunglai
 */

#include <math.h>
#include <stdio.h>

double EMI_function(double rate, int N, int PV, int FV)
{
	float emi;
	double R = pow(1+rate, N);
	emi = (PV + (FV/R))*((rate * R))/(R -1);

	return (emi);
}

int main()
{
	float rate, N, PV, FV, emi;
	PV = 10000;
	FV = 2000;
	rate = 0.05;
	N = 30;
	emi = EMI_function(rate, N, PV, FV);

	printf("\n EMI is= %f\n", emi);

	return 0;
}
// Output for EMI is -> Monthly EMI is= 680.617249
