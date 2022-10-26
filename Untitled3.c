#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	//**Desvio de condiciao simples com "IF"**//
	//**Ex 1
	int x = 1;
	if( x > 0){
		printf("O valor de x eh maior do que zero! \n");
	}
	
	if(x != 0){
	 	int res = x + 5;
	 	printf("Resultado = %d", res);
	}
	
	//**Ex 2	
	int A, B, S;
	printf("\n Digite os valores de A e B:");
	scanf("%d%d", &A, &B);
	
	S = A + B;
	
	if(S >= 10){
		printf("\n Valor de S: %d \n", S);
		
	}
	
	//**Ex 3
	float salario, novo_salario;
	printf("\n Digite o salario: ");
	scanf("%f", &salario);
	
	if(salario <= 2000){
		novo_salario = salario * 1.3;
	}
	
	printf("\n Novo salario = %.2f \n", novo_salario);
	
	//**Desvio de condicao composta com "IF...ELSE"
	
	//**Ex 1 
	
	int nA, nB, nX, R;
      printf ("\n Digite os valores de A e B:");
      scanf ("%d%d", &nA, &nB);
      nX = nA + nB;
 
      if (nX > 10){
          R = nX + 5;
      }
      else {
          R = nX - 7;   
      }
 
      printf ("\n Valor de R:%d \n", R);
    
	//**Ex 2
	float nsalario, nnovo_salario;
      printf ("\n Digite o salario:");
      scanf ("%f", &nsalario);
 
      if (nsalario <= 2000) {
          nnovo_salario = nsalario * 1.30;
      }
      else {
         nnovo_salario = nsalario * 1.10;      
      }
 
      printf ("\n Novo salario:%.2f\n", nnovo_salario);
      
      //**Desvio de condicao encadeadaem "IF...ELSE...IF...ELSE"
      
      //**Ex 1
      
      float ssalario, snovo_salario;
      printf ("\n Digite o salario:");
      scanf ("%f", &ssalario);
 
      if (salario < 500) {
          snovo_salario = ssalario * 1.15;
      }
      else {
             if (ssalario <= 1000) {
                  snovo_salario = ssalario * 1.10; 
             }
             else {
                  snovo_salario = ssalario * 1.05; 
             }        
      }
 
      printf ("\n Novo salario:%.2f\n ", snovo_salario);
      
      //**Ex 2
      
      int ax;
      printf ("\n Digite o valor de x:");
      scanf ("%d", &ax);
 
      if (ax > 0) {
         ax = ax + 5;
      }
      else {
           if (ax < 0) { 
                ax = ax * 7;
           }
           else {
                ax = ax - 3;
           }
      }
      printf ("\n Novo Valor de x:%d\n ", ax);
      
    //** Desvio condicional multiplo escolha em C
    
    //**Ex 1
    
    int codigo;
    printf("\n Digite o codigo: ");
    scanf("%d", &codigo);
    
    switch(codigo){
    	
    	case 001:
    		printf("\n Caderno \n");
    		printf("\n(capa dura) \n");
    		break;
    	case 002:
    		printf("\n Lapis \n");
    		break;
    	case 003:
    		printf("\n Borracha \n");
    		break;
    	default:
    		printf("\n Codigo nao encontrado! \n");
		}
		
	//**Ex2
	
	int codigo2;
      float preco;
      printf ("\n Digite o codigo:");
      scanf ("%d", &codigo2);
      printf ("\n Digite o preco:");
      scanf ("%f", &preco);
 
      switch (codigo2) {
 
            case 1:
                  printf ("\n Procedencia Sul - Preco: %.2f \n", preco);
                  break;
            case 2:
                  printf ("\n Procedencia Norte - Preco: %.2f \n", preco);
                  break;
            case 3:
                  printf ("\n Procedencia Leste - Preco: %.2f \n", preco);
                  break;
            case 4:
                  printf ("\n Procedencia Oeste - Preco: %.2f \n", preco);
                  break;
            case 5:
            case 6:
                  printf ("\n Procedencia Nordeste - Preco: %.2f \n", preco);
                  break;
            case 7:
            case 8:
            case 9:
                  printf ("\n Procedencia Sudeste - Preco: %.2f \n", preco);
                  break;
            case 10:
                  printf ("\n Procedencia Centro-Oeste - Preco: %.2f \n", preco);
                  break;
            default:
                  printf ("\n Codigo nao encontrado! \n");
      }
    
	system("PAUSE");	
}
