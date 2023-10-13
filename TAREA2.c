#include <stdio.h>

int main (){
   
    int numeroingresado;
    int SumaG;
    int contador;

    for (contador=1;contador<=numeroingresado;contador++)

    if (numeroingresado==1)
    {
        printf ("La suma del numero: 1 es\n");
    }

    else if (numeroingresado>=2)
    {
        SumaG=(numeroingresado*(numeroingresado+1));
    }
 
        printf ("La suma del numero %d es: %d",numeroingresado,SumaG);
    

    return 0;
}