/*Este programa calcula o imc com a ntrada de peso e altura.*/

#include <stdio.h> //biblioteca de entrada e sa�da
#include <stdlib.h> //biblioteca para comando system("pause")

float calcularImc (float peso, float altura); //prot�tipo do subprograma

//programa princial
int main() {
	float peso, altura;
	float imc; //vari�veis de sa�da
	
	printf("Informe seu peso em (kg): ");// comando scanf("%f,&peso") � para receber um dado digitado por usu�rio e armazena na vari�vel peso
	scanf("%f" ,&peso); //%f � a formata��o de dados para double e float para int � %d.
	printf("Informe sua altura em (m): ");
	scanf("%f" ,&altura); //%f � a formata��o de dados para double e float para int � %d.
	
	imc=calcularImc(peso, altura);// calcula imc
	
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


//subprograma
float calcularImc (float peso, float altura){
	float imc; //vari�vel local
	imc=peso/(altura * altura);//calcula imc
	return imc;
}

