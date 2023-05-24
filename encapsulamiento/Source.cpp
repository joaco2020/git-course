#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class Enteros {
	int ent[5];
public:
	Enteros();
	void mayor();
	void menor();
void	imprival();
};
Enteros::Enteros() {
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		ent[i] = rand() % 11;
	}
}
void Enteros::mayor() {
	int may = ent[0];
	for (int i = 0; i < 5; i++) {
		if (ent[i] > may) {
			may = ent[i];
		}
	}
	cout << "el mayor es " << may;
	
}
void Enteros::menor() {
	int men = ent[0];
	for (int i = 0; i < 5; i++) {
		if (ent[i] < men) {
			men = ent[i];
		}
	}
	cout << "el menor es" << men;
	}
	void Enteros::imprival() {
		cout << "vector completo";
		for (int i = 0; i < 5; i++) {
			cout << ent[i];
		}
	}
int main() {

	Enteros Enteros;
	Enteros.mayor();
	Enteros.menor();
	Enteros.imprival();
	return 0;
}