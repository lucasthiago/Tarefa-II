#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int SolucaoPontoFixo(double *p, double pr)
{
	FILE *fp;
	int i=0;
	double x, dx, x0, aux;
	char arquivo[15]= "pontofixo.dat";
	
	x0=*p;
	
	fp=fopen(arquivo, "w");
	
	
	do
	{
		x=cos(x0);
		dx= fabs(x-x0);
		x0=x;
		fprintf(fp, "%g\n", x0);
		
		i++;
	}while(dx>pr);
	
	*p=x0;
	fclose(fp);
	return(i);
}

int main (int argc , char ** argv ) 
{
	double x , x0 , dx , prec ;

	x0 = atof( argv [1]);
	prec = atof( argv [2]);
	printf("\nRaiz: %.10g em %d interações\n", x0, SolucaoPontoFixo(&x0, prec));
	return 0;
}
