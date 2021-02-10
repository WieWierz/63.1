#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	
	ifstream plik1;
	plik1.open("ciagi.txt");
	int liczba;
	string s;
	
	while(!plik1.eof()){
	plik1>>liczba;
	s = to_string(liczba);
	string s1 = s.substr(0, s.length() / 2);
	string s2 = s.substr(s.length() / 2);
	if(w1==w2){
		cout<<liczba<<endl;
	}
	}
	return 0;
}
