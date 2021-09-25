/*
 * tp_laborario_1.h
 *
 *  Created on: 24 sep. 2021
 *      Author: jimes
 */

#ifndef TP_LABORARIO_1_H_
#define TP_LABORARIO_1_H_



#endif /* TP_LABORARIO_1_H_ */


/**
 * @fn int sumar(int, int)
 * @brief sumar dos numeros enteros
 *
 * @pre
 * @post
 * @param a numero entero
 * @param b numero entero
 * @return me devuelve la suma de a+b
 */int sumar (int a, int b);


/**
 * @fn int restar(int, int)
 * @brief diferencia entre dos numeros enteros
 *
 * @pre
 * @post
 * @param a numero entero
 * @param b numero entero
 * @return me devuelve la resta de a-b
 */int restar (int a, int b);


/**
 * @fn int multiplicar(int, int)
 * @brief multiplicacion entre dos numeros enteros
 *
 * @pre
 * @post
 * @param a numero entero
 * @param b numero entero
 * @return me devuelve la multiplicacion entre dos numeros enteros
 */int multiplicar (int a, int b);


/**
 * @fn int dividir(int, int, float*)
 * @brief division entre dos numeros enteros
 *
 * @pre
 * @post
 * @param a numero entero
 * @param b numero entero
 * @param pDivision puntero flotante
 * @return numero entero: 0 Hubo Error, 1 funciono.
 */int dividir (int a, int b, float* pDivision);


/**
 * @fn int factorial(int)
 * @brief factorizacion de un numero entero
 *
 * @pre
 * @post
 * @param a numero entero entre 2 y 13
 * @return 0 si es negativo o mayor a 13, cualquier otro numero positivo si hubo ingreso correcto
 */int factorial (int a);

/**
 * @fn int menu(void)
 * @brief ofrece el menu de opciones
 *
 * @pre
 * @post
 * @return la opcion elegida por el usuario
 */int menu (void);


