#include <stdio.h>

int main()
{
    printf("Hola mundo \n");

    // punteros 

    int entero = 99 ;
    int *p_entero = &entero;

    printf("direccion de memoria que apunta p_entero : %p |direccion de memoria de p_entero : %p | direccion de entero : %p | contenido de entero : %d | tamaño de memoria de entero : %p ",p_entero,&p_entero,&entero,*p_entero,sizeof(int));  
    return 0;
}
