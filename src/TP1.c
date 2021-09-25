/*
 ============================================================================
 Name        : TP1.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "tp_laborario_1.h"

int main(void)
{
	setbuf(stdout,NULL);
	int opcion;
	int a;
	int b;
	int respSumar;
	int respRestar;
	int respMult;
	int sePudoDividir;
	float respDivision;
	int flagA = 0;
	int flagB = 0;
	int flagCalculosRealizados = 0;
	int respFactA;
	int respFactB;

	char seguir = 's';

	do
	{
		system("cls");
		printf("1.Ingresar 1er Operando A:\n ");
		printf("2.Ingresar 2do Operando B:\n ");
		printf("3.Calcular todas las operaciones:\n ");
		printf("4.Informar resultados:\n ");
		printf("5.Salir:\n ");
		printf("\nElegir Opcion:\n ");
		scanf("%d", &opcion);
		fflush(stdin);

		switch(opcion)
		{
			case 1:
				printf("Ingrese el primer operador A\n");
				scanf("%d", &a);
				flagA = 1;
			break;
			case 2:
				printf("Ingrese el segundo operador B:\n");
				scanf("%d", &b);
				flagB = 1;
			break;
			case 3:
				if(flagA == 1 && flagB == 1)
				{
				respSumar = sumar(a,b);
				printf("La suma: %d + %d\n", a, b);

				respRestar = restar (a,b);
				printf("La resta: %d - %d\n", a, b);

				respMult = multiplicar (a,b);
				printf("La multiplicacion: %d * %d\n", a, b);

				sePudoDividir = dividir (a,b,&respDivision);
				printf("La división: %d / %d\n", a, b);

				respFactA = factorial(a);
				printf("El factorial de A!: %d\n", a);

				respFactB = factorial(b);
				printf("El factorial de B!: %d\n", b);

				flagCalculosRealizados = 1;
				}
				else
				{
					if(flagA == 0 && flagB == 0)
					{
						printf("No ingresó ningún operando\n");
					}
					else
					{
						if(flagA == 0)
						{
							printf("No ingreso el primer operando\n");
						}
						else
						{
							printf("No ingreso el segundo operando\n");
						}
					}
				}

			break;
			case 4:
				if(flagCalculosRealizados == 1)
				{
					printf("El resultado de la suma (%d + %d) es: %d\n", a, b, respSumar);
					printf("El resultado de la resta (%d - %d) es: %d\n", a, b, respRestar);
					printf("El resultado de la multiplicacion (%d * %d) es: %d\n", a, b, respMult);
					if(sePudoDividir == 1 )
					{
						printf("El resultado de la division %d / %d es: %.2f\n", a, b, respDivision);
					}
					else
					{
						printf("No se puede dividir por cero.\n");
					}

					if(respFactA == 0)
					{
						printf("No se pudo calcular el factorial de A\n");
					}
					else
					{
						printf("El resultado del factorial de %d es: %d\n", a, respFactA);
					}

					if(respFactB == 0)
					{
						printf("No se pudo calcular el factorial de B\n");
					}
					else
					{
						printf("El resultado del factorial de %d es: %d\n", b, respFactB);
					}
				}
				else
				{
					if(flagA == 0 && flagB == 0)
					{
						printf("No ingresó ningún operando\n");
					}
					else
					{
						if(flagA == 0)
						{
							printf("No ingreso el primer operando\n");
						}
						else
						{
							if (flagB == 0)
							{
								printf("No ingreso el segundo operando\n");
							}
							else
							{
								printf("Debe elegir antes la opcion 3.\n");
							}
						}
					}
				}
			break;
			case 5:
				seguir = 'n';
			break;
			default:
				printf("Ingrese una opcion correcta.\n");
			break;

		}


		fflush(stdin);
		system("pause");

		}while (seguir=='s');

	return EXIT_SUCCESS;
}

