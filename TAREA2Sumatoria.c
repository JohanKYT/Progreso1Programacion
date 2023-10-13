#include <stdio.h>

int main (){
   
    int numeroingresado;
    int SumaG;
    int contador;
    printf("Ingrese el numero\n");
    scanf ("%d",&numeroingresado);

    if (numeroingresado<=0)
    {
        printf("Este numero ingresado no es valido\n");
    }
    
    if (numeroingresado==1)
    {
        printf ("La suma del numero: 1 es\n");
    }
    else if (numeroingresado>1)
    {
        for (contador=1; contador<=numeroingresado;contador++)
        {
         SumaG=(numeroingresado*(numeroingresado+1))/2;
        }
        printf ("La suma del numero %d es: %d",numeroingresado,SumaG);
        }  
          
    return 0;
}