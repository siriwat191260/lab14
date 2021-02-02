#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int m[] = {50,100,500,1000};
	for(int i = 0; i < 4 ; i++){
		int rd = rand()%4;
		int mpre = m[i];
		m[i] = m[rd];
		m[rd] = mpre;
	}
	*a = m[0];
	*b = m[1];
	*c = m[2];
	*d = m[3];
}
