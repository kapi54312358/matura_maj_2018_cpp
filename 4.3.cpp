#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int const n=1000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/sygnaly.txt");
	string A[n];
	string a="";
	int i=0, j=0, k=0;
	char p_znak=0, d_znak=0;
	bool flaga=true;
	
	for(i=0; i<n; i++){
		we>>A[i];
	}
	
	for(i=0; i<n; i++){
		a=A[i];
		flaga=true;
		
		for(j=1; j<a.size(); j++){
			p_znak=a[j];
			for(k=0; k<a.size(); k++){
				d_znak=a[k];
				if(abs(p_znak-d_znak)>10) flaga=false; 
			}
		}
		
		if(flaga) cout<<a<<endl;
	}
	
	return 0;
}
