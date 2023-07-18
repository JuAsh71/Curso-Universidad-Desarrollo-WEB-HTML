//Bibliotecas
#include <stdio.h>

int main(){
    int edad;
    printf("Hola, /n Captura tu edad");
    scanf("%d", &edad);
    edad=edad+1;
    printf("El proximo ano tendras %d anos", edad);
    return 0;
}