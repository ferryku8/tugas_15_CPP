#include <iostream>

using namespace std; 

void nilai(int *s){
	cin>>*s;
}

int main(){
	int x,y;
	cout<<"Inputkan X : ";
	nilai(&x);
	cout<<"Inputkan Y : ";
	nilai(&y);
	cout<<"Hasil : "<<x*y;
}
