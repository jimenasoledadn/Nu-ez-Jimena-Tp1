/*
 * tp_laboratorio_1.c
 *
 *  Created on: 24 sep. 2021
 *      Author: jimes
 */
#include <stdio.h>
#include <stdlib.h>
#include "tp_laborario_1.h"

int sumar (int a, int b)
{
	int respSumar;
	respSumar = a + b;
	return respSumar;
}

int restar (int a, int b)
{
	int respRestar;
	respRestar = a-b;
	return respRestar;
}

int multiplicar (int a, int b)
{
	int respMult;
	respMult = a * b;
	return respMult;
}

int dividir (int a, int b, float* pDivision)
{
	int todoOk = 0;
	if(pDivision!=NULL && b!=0)
	{
		*pDivision = (float) a/b;
		todoOk = 1;
	}
	return todoOk;
}

int factorial (int a)
{
	int fact = 0;
	if(a>=0 && a<=13)
	{
		fact = 1;
		for (int i=2; i <= a ; i++ )
		{
			fact*=i;
		}
	}
	return fact;
}











