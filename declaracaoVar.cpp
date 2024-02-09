/*
	demonstração de como se faz entrada e saída de dados
	declação de variaveis
	atribuições
	Feito por Matheus Henrique Lourenço Bernardo
*/


#include <iostream>

using namespace std;

int main()
{
	
	//declaração de variaveis
	int numero;
	float salario;
	char sexo;
	char nome[20];
	
	//Entrada de dados
	cout<<"Informe seu nome:";
	cin>>nome;
	
	cout<<"Informe um numero: ";
	cin>>numero;
	
	cout<< "informe seu salario: ";
	cin>>salario;
	
	cout<<"Informe seu sexo, M para masculino e F para feminino:";
	cin>>sexo;
		
	//Saída de dados
	cout<<"Nome:"<<nome<<endl;
	cout<<"O numero informado foi: "<< numero<<endl;
	cout<<"O seu salario é de: "<< salario<<endl;
	cout<<"Seu genero eh: "<< sexo<<endl;
	
	

	return 0;
}