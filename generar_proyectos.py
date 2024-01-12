import csv
import random
import time
from faker import Faker

fake = Faker('es_ES')

def leer_dniresponsables():
    dniresponsables = []
    with open('empleados.csv', 'r', encoding='utf-8') as file:
        reader = csv.reader(file)
        next(reader)
        for row in reader:
            dniresponsables.append(row[0])
    return dniresponsables

def generar_fecha_aleatoria(inicio, fin):
    return int(inicio + (random.random() * (fin - inicio)))

dnis_responsables = leer_dniresponsables()

with open('proyectos.csv', 'w', newline='', encoding='utf-8') as file:
    writer = csv.writer(file)
    # writer.writerow(['Identificador', 'Nombre', 'Fecha Inicio', 'Fecha Fin', 'Recaudacion', 'DNI Responsable'])

    for i in range(500):
        identificador = f'PRJ-{i+1:04d}'
        nombre = fake.catch_phrase()[:20]
        fecha_inicio = generar_fecha_aleatoria(time.mktime(time.strptime('01/01/2010', '%d/%m/%Y')), time.mktime(time.strptime('01/01/2024', '%d/%m/%Y')))
        fecha_fin = generar_fecha_aleatoria(fecha_inicio, time.mktime(time.strptime('01/01/2025', '%d/%m/%Y')))
        recaudacion = random.randint(10000, 500000)
        dni_responsable = random.choice(dnis_responsables)
        writer.writerow([identificador, nombre, fecha_inicio, fecha_fin, recaudacion, dni_responsable])

print("Archivo CSV de proyectos generado exitosamente.")
