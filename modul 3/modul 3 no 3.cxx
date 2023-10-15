#include  <stdio.h>

int main()
{
	int Alas, Tinggi;
	int Sm;
	
	printf("input Alas : ");
	scanf("%d", &Tinggi);
	
	printf("input Tinggi : ");
	scanf("%d", &Tinggi);
	
	//hitung sisi miring
	Sm = (Alas*Alas) + (Tinggi*Tinggi);
	
	printf("Sm");
	printf("\nAlas = %i", Alas);
	printf("\nTinggi = %i", Tinggi);
	printf("\nSm = %i", Sm);
	
	return 0;
}