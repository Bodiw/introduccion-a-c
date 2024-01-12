import csv
from faker import Faker
import random
import time

fake = Faker('es_ES')

def generar_sueldo():
    return random.randint(20000, 60000)

def generar_fecha_contratacion():
    start_date = time.mktime(time.strptime('01/01/2010', '%d/%m/%Y'))
    end_date = time.mktime(time.strptime('01/01/2024', '%d/%m/%Y'))
    random_date = start_date + (random.random() * (end_date - start_date))
    return int(random_date)

with open('empleados.csv', 'w', newline='', encoding='utf-8') as file:
    writer = csv.writer(file)
    # writer.writerow(['NIF', 'Nombre', 'Apellido1', 'Apellido2', 'Fecha Contratacion', 'Sueldo'])

    for _ in range(300):
        nif = fake.doi()
        nombre = fake.first_name()[:20]
        apellido1 = fake.last_name()[:20]
        apellido2 = fake.last_name()[:20]
        fecha_contratacion = generar_fecha_contratacion()
        sueldo = generar_sueldo()
        writer.writerow([nif, nombre, apellido1, apellido2, fecha_contratacion, sueldo])

print("Archivo CSV generado exitosamente.")
