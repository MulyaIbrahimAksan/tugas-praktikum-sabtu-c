#include <stdio.h>
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std; 
main ()
{
	int jm;
	int jk;
	int lb;
	
	printf("Program Hitung Lama Bekerja : ");
	printf("\nInput Jam Masuk: ");
    cin>>jm;
    printf("\nInput Jam Keluar : ");
    cin>>jk;

    lb = jk-jm; 
	if(lb<12)
	cout<<"Lama Bekerja : " <<lb<<" jam";
	else
	cout<<"Jam kerja 12jam, salah input!";
	
	return 0;
}