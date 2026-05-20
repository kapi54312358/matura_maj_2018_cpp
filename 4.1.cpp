#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int const n=1000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/sygnaly.txt");
	string A[n];
	int i=0;
	string a="";

	for(i=0; i<n; i++){
		we>>A[i];
	}

	for(i=39; i<n; i+=40){
		a=A[i];
		cout<<a[9];
	}

	return 0;
}
