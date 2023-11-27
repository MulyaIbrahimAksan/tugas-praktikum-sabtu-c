#include <stdio.h>

int main ()
{
	 double celcius, fahreinhet, reamur ;
	
	printf (" Masukan suhu dalam celcius : ") ;
	scanf ("%lf", &celcius ) ;
	
	fahreinhet = ( celcius * 9 / 5 ) + 32 ;
	reamur = ( celcius * 4 / 5 ) ;
	
	printf (" suhu dalam fahreinhet : %.2lf derajat fahreinhet \n", fahreinhet ) ;
	printf (" suhu dalam reamur : %.2lf derajat reamur \n", reamur ) ;
	
	return 0 ;
	
}
