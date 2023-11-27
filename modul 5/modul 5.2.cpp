#include <stdio.h>
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std; 
main ()
{
	int kb,hrg;
	int ha;
	char jb;
	string disk;
	
	printf("\nKode Barang: ");
	scanf("%d", &kb);
	cout<<"\nJenis Barang (A/B/C) : ";
	scanf("%c", &jb);
	jb=getchar();
	printf("\nHarga Barang : ");
	scanf("%i", &hrg);
	
	switch(jb)
	{
	case 'A' :
		disk="10%";
		ha=hrg-(0.10*hrg);
		
		cout<<"\nJenis Barang: "<<jb;
		cout<<"\nMendapat diskon = "<<disk;
		cout<<"\nHarga Setelah Diskon = "<<ha; break;
	case 'B' :
		disk="15%";
		ha=hrg-(0.15*hrg);
		
		cout<<"\nJenis Barang: "<<jb;
		cout<<"\nMendapat diskon = "<<disk;
		cout<<"\nHarga Setelah Diskon = "<<ha; break;
	case 'C' :
		disk="20%";
		ha=hrg-(0.20*hrg);
		
		cout<<"\nJenis Barang: "<<jb;
		cout<<"\nMendapat diskon = "<<disk;
		cout<<"\nHarga Setelah Diskon = "<<ha; break;
	default: cout<<"\nJenis Barang Salah!"; break;
	}
	return 0;
}
