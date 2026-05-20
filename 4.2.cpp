#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int const n=1000;

bool czy_znak(char z, string a){
	for(int i=0; i<a.size(); i++){
		if(a[i]==z){
			return true;	
		}
	}
	return false;
}

string czysc(string a){
	int i=0, j=0;
	string w="";
	
	w=a[0];
	for(i=1; i<a.size(); i++){
		if(!czy_znak(a[i], w)) w+=a[i];
	}
	return w;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/sygnaly.txt");
	string A[n], wyczyszczone[n];
	int i=0, najdl=0, obecna=0;
	string a="", najdl_c="";
	
	for(i=0; i<n; i++){
		we>>A[i];
		wyczyszczone[i]=czysc(A[i]);
	}
	
	for(i=0; i<n; i++){
		a=wyczyszczone[i];
		obecna=a.size();
		if(obecna>najdl){
			najdl=obecna;
			najdl_c=A[i];
		}
	}
	
	cout<<najdl<<" "<<najdl_c;
	
	return 0;
}
