#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "gestor_empleados.h"

#define BUFFER_SIZE 200

char buffer[BUFFER_SIZE];

proyectos_arr proyectos;
empleado_t *empleados;

int main(void)
{
    char *filename;
    char *token;

    /*
        Dado que vamos a hacer una "Command Line Interface", vamos a repetidamente pedir informacion
        mediante entrada estandar
    */
    while (1)
    {
        fprintf(stdout, "Gestor > ");
        /*
            fgets lee hasta BUFFER_SIZE-1 caracteres de stdin o hasta un \n y lo guarda en buffer.
            pone un \0 en la ultima posicion o despues del \n si encuentra uno
        */
        if (fgets(buffer, BUFFER_SIZE, stdin) == NULL)
        {
            printf("Adios!");
            return 0;
        }


        token = strtok(buffer, " ");

        if (strcmp(token, "salir") == 0)
        {
            printf("Adios!");
            return 0;
        }
        else if (strcmp(token, "load-empleados") == 0) /* load-empleados <archivo> */
        {
            filename = strtok(buffer, " \n");
            cargar_datos(filename);
        }
        else if (strcmp(token, "load-proyectos") == 0) /* load-proyectos <archivo> */
        {
            filename = strtok(buffer, " \n");
            cargar_datos(filename);
        } /* imprime una lista de todos los dnis */
        else if (strcmp(token, "dni") == 0)
        {
        }                                        /* imprime la informacion de un empleado dado un dni */
        else if (strcmp(token, "empleado") == 0) /* empleado <dni>*/
        {
        }
        else
        {
            printf("Comando no reconocido\n");
        }
    }
}