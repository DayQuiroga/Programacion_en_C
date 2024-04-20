#include <stdio.h>

int main (void) {

    printf ("En este programa usted podrá ingresar dos números positivos y compararlos entre sí,\n para saber si son <, > o =");

    float numero_1, numero_2;
    printf ("\nPor favor, ingrese un número: \n");
    scanf ("%f", &numero_1);
    printf ("Por favor, ingrese otro número: \n");
    scanf ("%f", &numero_2);

if (numero_1 < numero_2) {

    printf ("El número %.2f es menor que el número %.2f", numero_1,numero_2);
}
else if (numero_1 > numero_2) {

    printf ("El número %.2f es mayor que el número %.2f", numero_1,numero_2);
}
else {

    printf ("Los números ingresados son iguales.");
}

    return 0;

}