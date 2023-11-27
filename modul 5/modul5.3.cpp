#include <stdio.h>
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std; 
main ()
{
	int jm, jk, lp, biaya;
	
	printf("Program Hitung Lama Parkir : ");
	printf("\nInput Jam Masuk: ");
    cin>>jm;
    printf("\nInput Jam Keluar : ");
    cin>>jk;
    
    lp = jk-jm; 
	if(lp<=2)

       biaya=2000;
	else
       biaya=2000+((lp-2)*500);  
    
	cout<<"\nLama Parkir " <<lp<<" jam";
	cout<<"\nBiaya Parkir " <<biaya;  
	
	return 0;
}
