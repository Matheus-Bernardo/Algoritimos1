/*
	demonstra��o de como se faz entrada e sa�da de dados
	decla��o de variaveis
	atribui��es
	Feito por Matheus Henrique Louren�o Bernardo
*/


#include <iostream>

using namespace std;

int main()
{
	
	//declara��o de variaveis
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
		
	//Sa�da de dados
	cout<<"Nome:"<<nome<<endl;
	cout<<"O numero informado foi: "<< numero<<endl;
	cout<<"O seu salario � de: "<< salario<<endl;
	cout<<"Seu genero eh: "<< sexo<<endl;
	
	

	return 0;
}