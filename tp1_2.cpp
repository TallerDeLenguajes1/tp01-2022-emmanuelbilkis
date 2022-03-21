#include <stdio.h>

int cuadrado(int a);
void cuadrado2(int a);
void invertir(int a,int b);
void orden(int *a,int *b);

int main()
{
    int a = 5 ;
    int b = 2;

    printf("El contenido de a es:%d y su direccion es %p \n",a,&a);
    int potencia2 = cuadrado(a);
    cuadrado2(a);

    invertir(a,b);
    orden(&a,&b);

    
    return 0;
}

int cuadrado(int a){

    return a*a;

}

void cuadrado2(int a){

    printf("El cuadrado del numero ingresado es : %d \n ",a*a);
}

void invertir(int a,int b){

    printf("a vale %d y b vale %d \n",a,b);

    int aux;
    aux = a ; 
    a = b; 
    b=aux; 

    printf("ahora a vale %d y b vale %d \n",a,b);
    fflush(stdin);
}

void orden(int *a,int *b){

    if (*a>*b)
    {
        int aux = *a;
        *a = *b;
        *b=aux; 

        printf("ordenados : %d, %d" , *a,*b);

    }else
    {
        printf("ya estan ordenados de menonr a mayor");
    }
    
}