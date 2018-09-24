#ifndef MARINI_H_INCLUDED
#define MARINI_H_INCLUDED


/**
 * \brief Solicita un número al usuario y lo valida
 * \param input Se carga el numero ingresado
 * \param message Es el mensaje a ser mostrado
 * \param eMessage Es el mensaje a ser mostrado en caso de error
 * \param reintentos,la cantidad de veces que permitimos reintentar ingreso de datos
 * \param lowLimit Limite inferior a validar
 * \param hiLimit Limite superior a validar
 * \return Si obtuvo el numero [0] si no [-1]
 */
int getIntReintentos(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);

/** \brief Solicita un numero al usuario y devuelve el resultado
 * \param  mensaje Es el mensaje a ser mostrado
 * \return El numero ingresado por el usuario
 */
float getFloat(char mensaje[]);

/** \brief Solicita un numero al usuario y devuelve el resultado
 * \param  mensaje Es el mensaje a ser mostrado
 * \return El numero ingresado por el usuario
 */
int getInt(char mensaje[]);

/** \brief Solicita un numero al usuario y devuelve el resultado
 * \param  mensaje Es el mensaje a ser mostrado
 * \return El caracte ingresado por el usuario
 */
char getChar(char mensaje[]);
#endif // MARINI_H_INCLUDED
