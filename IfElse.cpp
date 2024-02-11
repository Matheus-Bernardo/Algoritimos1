
/*
	Exemplo de if e else
	testar condicionais
*/

#include <iostream>

using namespace std;

int main()
{
	int numero1, numero2;

	cout << "Entre com dois numeros para a ordenacao: ";
	cin >> numero1 >> numero2;


	if(numero1 == numero2)
	{
		cout << "os numeros são iguais e ambos ocupam a mesma posicao em uma possivel ordem crescente";
	}
	else
	{
		cout << "os numeros sao diferentes";
		// numero 1 = 10 e numero2 = 20
		if(numero1 < numero2)
		{
			cout << "A ordem crescente dos numeros eh" << endl;
			cout << numero1 << "," << numero2 << endl;
		}
		else
		{
			cout << "A ordem crescente dos numeros eh" << endl;
			cout << numero2 << "," << numero1 << endl;
		}
	}


	return 0;
}
