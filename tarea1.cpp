
#include<iostream>
#include<math.h>

using namespace std;


//Tipos de variables con su tamaño de memoria

int main(){

string a;
char b;
int c;
long d;
float e;
double f;
long double g;
bool h;


cout << "Variable de tipo string tiene una memoria de: " << pow(2,sizeof(a)) << endl;
cout << "Variable de tipo char tiene una memoria de: " << pow(2,sizeof(b)) << endl;
cout << "Variable de tipo int tiene una memoria de: " << pow(2,sizeof(c)) << endl;
cout << "Variable de tipo long tiene una memoria de: " << pow(2,sizeof(d)) << endl;
cout << "Variable de tipo float tiene una memoria de: " << pow(2,sizeof(e)) << endl;
cout << "Variable de tipo double tiene una memoria de: " << pow(2,sizeof(f)) << endl;
cout << "Variable de tipo long double tiene una memoria de: " << pow(2,sizeof(g)) << endl;
cout << "Variable de tipo bool tiene una memoria de: " << pow(2,sizeof(h)) << endl;

return 0;

}



















