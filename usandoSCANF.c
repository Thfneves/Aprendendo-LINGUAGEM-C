#include <stdio.h>

    int main ()
    {
int idade;
double salario, altura;
char genero;
char nome [50];

printf("Digite o valor da idade");
scanf ("%d",&idade);
printf ("digite o valor do salario");
scanf ("%lf",& salario);
printf("digite o valor da altura");
scanf ("lf",&altura);

printf ("IDADE= &d\n", idade);
printf ("SALARIO=%.2lf\n", salario);
printf("ALTURA=%.2lf\n", altura);
printf ("GENERO=%c\n",genero);
printf("nome=%s\n",nome);
return 0;
    }
