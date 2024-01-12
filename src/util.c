#include <stdio.h>
#include <string.h>
#include <time.h>

/**
 * @brief convierte una fecha formato dd/mm/aaaa a epoch
 *
 * @param date
 * @return int
 */
int date_to_epoch(const char *fecha)
{
    struct tm tm;
    time_t epoch;

    memset(&tm, 0, sizeof(struct tm));

    sscanf(fecha, "%d/%d/%d", &tm.tm_mday, &tm.tm_mon, &tm.tm_year);

    tm.tm_year -= 1900;

    if ((epoch = mktime(&tm)) == -1)
    {
        printf("Error al convertir la fecha a epoch.\n");
        return -1;
    }

    return (int)epoch;
}