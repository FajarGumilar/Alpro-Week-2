#include <iostream>

#define PHI 3.14 // konstanta

using namespace std;
int main () {
	float jari_jari, luas;

	// konstanta
	jari_jari = 25;

	luas = 0.5 * PHI * jari_jari * jari_jari;
	cout<<"Data Lingkaran";
	cout<<"nJari-jari : "<<jari_jari;
	cout<<"nLuas : "<<luas;
	return 0;
}