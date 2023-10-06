# include <stdio.h>


int main(void){

   int numingresado;
    printf ("Hola Bienvenido\n") ;
    
    do
    {

        printf ("Ingrese un número entero\n");
        scanf ("%d", &numingresado);
        

        if (numingresado==1)
        {
            printf("Este no es un numero primo\n");
        }

        
        else if  ((numingresado%numingresado==0)&&(numingresado%2!=0)&&(numingresado%3!=0)||(numingresado==2))
        {
            printf("Este numero es primo\n");
        }

       
        else if (numingresado>1)
        
        
        {
            printf("Este no es un numero primo\n");
        }
            

        if (numingresado<1)
        {
            printf ("Numero ingresado no valido\n");
        }
        
    } while (numingresado<1);
    
    
    return 0;

}