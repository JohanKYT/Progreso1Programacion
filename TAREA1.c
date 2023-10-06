# include <stdio.h>


int main(void){

    int numingresado;
    printf ("Hola Bienvenido\n") ;
    
    do
    {
        printf ("Ingrese un número entero\n");
        scanf ("%d", &numingresado);

        if (numingresado<1)
        {
            printf ("Numero ingresado no valido\n");
        }
        
    } while (numingresado<1);
    
    
    return 0;

}