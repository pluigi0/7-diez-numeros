#include <stdio.h>

int main() {
  int a[10];
  int i;
  int mayor;
  int c = 0;
    
    printf("\n\tPROGRAMA QUE MUESTRA DE 10 NUMEROS CUAL ES EL NUMERO MAYOR Y EL NUMERO DE VECES QUE APARECE EN PANTALLA");
    printf("\n\tIngrese 10 numeros:\t");
    
    //Guarda 10 numeros en un array
    for (i = 0; i < 10; i++) {
	    scanf("%d", &a[i]);
    }
    
    //Asume que a[0] es el numero mayor
    mayor = a[0];
    
    for (i = 0; i < 10; i++) 
	{
 	 	if (a[i] > mayor) {
		mayor = a[i];
    }
    }
    
    for (i = 0; i < 10; i++) 
	{
		if(a[i] == mayor)
		c++;
	}	
	
    printf("\n\t El numero mayor de los 10 numeros es: %d", mayor);
    
	if(c!=0)
	{
		printf("\n\t El numero de veces que %d aparece son: %d veces \n", mayor, c);
	}    
    
    return 0;
  }
