#include <iostream>
using namespace std;

int main()
{
	int a = 2;
	int Th = 100;
	int j = 0;
	
	for(int waktu = 1; waktu<=Th; waktu++){
		
		j+=a;
	}
	cout<<"\nJarak Tempuh "<<Th<<"detik : "<<j<<"meter."<<endl;
	
	return 0;
}
