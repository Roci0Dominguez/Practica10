# Funcion para la suma de digitos de forma iterativa
def suma_iterativa(n):
    suma = 0

    while n > 9:
        suma += n % 10
        n //= 10

    return suma + n

# Funcion para la suma de digitos de forma recursiva
def suma_recursiva(n):
    if n <= 9:
        return n
    else:
        return suma_recursiva(n // 10) + n % 10

def main():
    numero = int(input("Ingresa un numero entero: "))

    resultado_iterativo = suma_iterativa(numero)
    resultado_recursivo = suma_recursiva(numero)

    print("Suma de los digitos de manera iterativa:", resultado_iterativo)
    print("Suma de los digitos de manera recursiva:", resultado_recursivo)

if _name_ == "_main_":
    main()