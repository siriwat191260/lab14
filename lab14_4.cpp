#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int money[] = {50,100,500,1000};
	for(int i = 0; i < 4 ; i++){
		int rd = rand()%4;
		int moneypre = money[i];
		money[i] = money[rd];
		money[rd] = moneypre;
	}
	a = money[0];
	b = money[1];
	c = money[2];
	d = money[3];
}
