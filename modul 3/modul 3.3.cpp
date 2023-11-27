#include <stdio.h>

int main ()
{
	int Alas, Tinggi ;
	float Sm ;
	
	printf("Masukan Alas : ") ;
	scanf("%d", &Alas ) ;
	printf("Masukan Tinggi : ") ;
	scanf( "%d", &Tinggi ) ;
	
	Sm = ( Alas*Alas + Tinggi*Tinggi ) ;
	
	printf("Sisi miring : %.0f",  Sm ) ;
	
	
	return 0 ;
}
