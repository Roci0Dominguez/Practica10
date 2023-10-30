//yareli del rocio perez dominguez
#include <iostream>

int sumaIterativa(int n) {//solucion iterativa
    int suma = 0;

    while (n > 9) {
        suma += n % 10;
        n /= 10;
    }
    return (suma + n);
}
//So lucionrEcursiva
int sumaRecursiva(int n) {

    if (n <= 9) {
        return n;
    }
    else {
        return sumaRecursiva(n / 10) + n % 10;
    }
}int main() {

    int n;
    std::cout << "Dame n: ";
    std::cin >> n;


    int resultadoIterativa = sumaIterativa(n);
    int resultadoRecursiva = sumaRecursiva(n);

    std::cout << "La sumaIterativa es: " << resultadoIterativa << std::endl;
    std::cout << "La sumaRecursiva es: " << resultadoRecursiva << std::endl;

    return 0;
}