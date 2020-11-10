/*
* por: Alejandro Gonzalez Colin
* Ingenieria en Desarrollo de Sofotware
*/
#include<stdio.h>
#include<stdlib.h>

//Prototipado de funciones
int promedio(int x[]);
int varianza(int y[], int p);

/*------------------- Funcion Principal ------------------------*/
void main(){
    int i=0, prom, vari, total=8409693, casos[10]={298, 271, 222, 207, 121, 120, 310, 239, 248, 213};
    puts("\n\t\t\t>> CASOS COVID-19 EN ARRAY <<\n\n");
    printf("\tEstado: Jalisco\n \tTotal de Poblacion: %d\n\n", total);
    
    while (i != 10){  
            printf(" Total de infectados el dia julio %d: %d\n", i+21, casos[i]);
            i++;
    }

    prom = promedio(casos);
    vari = varianza(casos, prom);

    printf("\n\n\tEl promedio de infectados: %d", prom);
    printf("\n\tVarianza (muestral) de infectados: %d\n\n", vari); 
    printf("\nSoftware hecho con <3 por Alejando Gonzalez Colin.\n\n");
    system("pause");
}

/*------------------- Funcion Promedio ------------------------*/
int promedio(int x[]){
	int i, sum=0;
	for (i = 0; i < 10; i++){
		sum += x[i];
	}
    return (sum/10);
}

/*------------------- Funcion Varianza ------------------------*/
//Suma de: cada dato - promedio al cuadrado / numero de datos -1 (-1 ya que es una muestra y no una poblacion).
int varianza(int y[], int p){
    int i=0, sum=0, v;
    while (i != 10){  
            sum += (y[i]-p)*(y[i]-p); //Suma de cada dato menos el promedio, elevado al cuadrado.
            i++;
    }
    v = sum/(10-1); //Suma de la varianza entre cantidad de datos menos 1.
    return (v);
}








