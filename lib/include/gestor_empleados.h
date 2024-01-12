/**
 * @file gestor_empleados.c
 * @author Bodiw (bodiw.github.io)
 * @brief Cabecera de ejemplo de un gestor de empleados
 * @version 0.1
 * @date 2024-01-12
 *
 * @copyright Copyright (c) 2024
 *
 */

extern int numero_empleados;
extern int numero_proyectos;

typedef struct proyecto
{
    char *identificador;
    char *nombre;
    int fecha_inicio;
    int fecha_fin;
    int recaudacion;
    char *dni_responsable;
} proyecto_t;

typedef proyecto_t *proyectos_arr;

/**
 * @brief struct que contiene la informacion de un empleado
 * @param dni char* que apunta al DNI
 * @param nombre char* apunta al nombre
 * @param apellidos char** apunta a los apellidos
 * @param fecha_contratacion tiempo en milisegundos desde la fecha de contratacion (Google Unix TimeStamp)
 */
typedef struct empleado
{
    char *dni, *nombre, **apellidos;
    int fecha_contratacion;
    int sueldo;
    int numero_proyectos;
    proyectos_arr proyectos;
} empleado_t;


extern proyectos_arr proyectos;
extern empleado_t *empleados;


/**
 * Comentarios sobre una funcion hacen que al pone el
 * raton por encima, te enseñe el comentario, que suele
 * tener informacion sobre la funcion
 */
int funcion_ejemplo(char *identificador);

/**
 * @brief Comprueba si un empleado se encuentra en el gestor
 *
 * @param identificador DNI del empleado
 * @return 0 si no existe, 1 si existe
 */
int existe_empleado(char *identificador);

/**
 * @brief Comprueba si un proyecto se encuentra en el gestor
 *
 * @param identificador Idenificador unico del proyecto
 * @return 0 si no existe, 1 si existe
 */
int existe_proyecto(char *identificador);

/**
 * @brief Añade un empleado al gestor
 *
 * @param empleado empleado a añadir
 * @return 0 si se ha añadido, 1 si no
 */
int anadir_empleado(empleado_t empleado);

/**
 * @brief Añade un proyecto al gestor
 *
 * @param proyecto proyecto a añadir
 * @return 0 si se ha añadido, 1 si no
 */
int anadir_proyecto(proyecto_t proyecto);

/**
 * @brief Elimina un empleado del gestor
 *
 * @param identificador DNI del empleado
 * @return 0 si se ha eliminado, 1 si no
 */
int eliminar_empleado(char *identificador);

/**
 * @brief Elimina un proyecto del gestor
 *
 * @param identificador Nombre del proyecto
 * @return 0 si se ha eliminado, 1 si no
 */
int eliminar_proyecto(char *identificador);

/**
 * @brief asigna un proyecto a un empleado
 * @param dni DNI del empleado
 * @param identificador_proyecto identificador del proyecto
 * @return 0 si se ha asignado, 1 si no
 */
int asignar_proyecto(char *dni, char *identificador_proyecto);

/**
 * @brief Devuelve el dinero recaudado por todos los proyectos finalizados entre inicio y fin
 *
 * @param inicio fecha de inicio
 * @param fin fecha de fin
 * @return int dinero recaudado
 */
int recaudado_proyectos(int inicio, int fin);

/**
 * @brief Devuelve el dinero recaudado por un empleado entre inicio y fin
 *
 * @param dni DNI del empleado
 * @param inicio fecha de inicio
 * @param fin fecha de fin
 * @return int dinero recaudado
 */
int recaudado_empleado(char *dni, int inicio, int fin);

/**
 * @brief Guarda los datos en un fichero con formato csv
 *
 * @param nombre_fichero nombre del fichero
 * @return 0 si se ha guardado, 1 si no
 */
int guardar_datos(char *nombre_fichero);

/**
 * @brief Carga los datos de un fichero con formato csv
 *
 * @param nombre_fichero nombre del fichero
 * @return 0 si se ha cargado, 1 si no
 */
int cargar_datos(char *nombre_fichero);

/**
 * @brief Libera los empleados y proyectos de memoria
 *
 */
void liberar_datos(void);