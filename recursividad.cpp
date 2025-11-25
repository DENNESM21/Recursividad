#include<iostream>
using namespace std;

void abrirmuneca(int numero){
	if(numero == 1){
		cout<<"ABRA LA MUÑECA";
		return;
	}
	cout<<"abriendo muneca: "<<numero<<endl;
	abrirmuneca(numero-1);
	
}






int main(){
	abrirmuneca(8);
	return 0;
}
