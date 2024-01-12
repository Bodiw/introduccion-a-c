#include <stdio.h>

#include "util.c"
#include "gestor_empleados.h"

int numero_empleados;
int numero_proyectos;

int funcion_ejemplo(char *identificador)
{
    printf("%p\n", identificador);
    return 0;
}

int existe_empleado(char *identificador)
{
    printf("%p\n", identificador);
    return 0;
}

int existe_proyecto(char *identificador)
{
    printf("%p\n", identificador);
    return 0;
}

int anadir_empleado(empleado_t empleado)
{
    return empleado.sueldo;
}

int anadir_proyecto(proyecto_t proyecto)
{
    return proyecto.recaudacion;
}

int eliminar_empleado(char *identificador)
{
    printf("%p\n", identificador);
    return 0;
}

int eliminar_proyecto(char *identificador)
{
    printf("%p\n", identificador);
    return 0;
}

int asignar_proyecto(char *dni, char *identificador_proyecto)
{
    printf("%p\n", dni);
    printf("%p\n", identificador_proyecto);
    return 0;
}

int recaudado_proyectos(int inicio, int fin)
{
    return inicio + fin;
}

int recaudado_empleado(char *dni, int inicio, int fin)
{
    printf("%p\n", dni);
    return inicio + fin;
}

int guardar_datos(char *nombre_fichero)
{
    printf("%p\n", nombre_fichero);
    return 0;
}

int cargar_datos(char *nombre_fichero)
{
    printf("%p\n", nombre_fichero);
    return 0;
}
