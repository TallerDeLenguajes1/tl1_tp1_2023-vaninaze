#include<stdio.h>
void cuadradoDeUnNum(int num);
void direccVar(int var);
void direccVar(int var);
void invertir(int a,int b);
void orden(int a,int b);
int main(){
    int num1, num2, num3;
    printf("\nIngresar numero: ");
    scanf("%i", &num1);
    
    cuadradoDeUnNum(num1);
    direccVar(num1);
    printf("\nIngresar 2 numeros: ");
    scanf("%i %i", &num2, &num3);
    invertir(num2, num3);
    printf("\n");
    orden(num2, num3);
    return 0;
}
//Funciones que calculan el cuadrado de un numero
int cuadrado(int num){
    return (num * num);
}
void cuadradoDeUnNum(int num){
    printf("\n El cuadrado de %i es: %i",num,(num*num));
}

//Funcion que al recibir una variable muestre por pantalla la dirección y el contenido de la variable
void direccVar(int var){
    printf("\n Direccion de la variable: %p", &var);
    printf("\n Contenido de la variable: %i", var);
}

//Dado dos parámetros de entrada, deberá invertir los valores entre ambos
void invertir(int a,int b){
    int aux;
    printf("\n Numeros: a= %i, b= %i", a,b);
    aux = a;
    a = b;
    b = aux;
    printf("\n Invertidos: a= %i, b= %i", a,b);
}

// Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor.
void orden(int a, int b){
    int aux;
    aux = a;
    printf("\n Numeros: a= %i, b= %i", a,b);
    if (b < a)
    {
        a = b;
        b = aux;
    }
    printf("\n Ordenados: a= %i, b= %i", a,b);
}