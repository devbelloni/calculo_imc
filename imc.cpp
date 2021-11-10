
/*Este programa calcula o imc com a ntrada de peso e altura.*/
#include <stdio.h> //biblioteca de netrada e saída
#include <stdlib.h> //biblioteca para comando system("pause")
//programa princial
int main() {
	float peso, altura; //variáveis de entrada
	float imc; //variáveis de saída
	
	printf("Informe seu peso em (kg): ");
	// comando scanf("%f,&peso") é para receber um dado digitado por usuário e armazena na variável peso
	scanf("%f" ,&peso); //%f é a formatação de dados para double e float para int é %d.
	printf("Informe sua altura em (m): ");
	scanf("%f" ,&altura); //%f é a formatação de dados para double e float para int é %d.
	
	imc=peso/(altura * altura);//calcula imc
	
	
	if (imc<18.5)
		printf("Situacao de magreza !\n");
	if (imc>=18.5 && imc<=24.9)
		printf("Situacao normal !\n");
	if (imc>24.9 && imc<=29.9)
		printf("Situacao de sobrepeso !\n");
	if (imc>29.9 && imc<=34.9)
		printf("Situacao de obesidade I !\n");
	if (imc>34.9)
		printf("Situacao de obesidade II ou maior !\n");
	
	printf("Seu imc = %.2f \n",imc);//para duas casas decimais %.2f

	system("pause");
	
	return 0;
}
