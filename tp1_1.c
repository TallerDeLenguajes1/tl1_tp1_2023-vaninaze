#include<stdio.h>
int main(){
    int num=6, * punt;
    punt = &num;
    printf("\n Contenido del puntero: %i", *punt);
    printf("\n Direcc de memoria que contiene el puntero: %p", punt);
    printf("\n Direcc de memoria de la variable: %p", &num);
    printf("\n Direcc de memoria del puntero: %p", &punt);
    printf("\n Tamanio de memoria utilizado por num: %i", sizeof(num));
   // printf("Hola mundo");
    return 0;
}