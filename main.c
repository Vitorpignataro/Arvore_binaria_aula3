#include <stdio.h>
#include <stdlib.h>
typedef int KEY;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*José Vitor ALves Pignataro*/
/*0096150*/
/*Sexto Semestre*/


//1) Declaro o struc que representa uma arvore
struct arvore {
 KEY key;
 struct arvore* esquerda;
 struct arvore* direita;
};
//2) declaro um typedef para o struct acima
typedef struct arvore* Arvore;

Arvore inicializa();
Arvore CriaNo(int novalue);
Arvore input(Arvore nc, Arvore no);
void ArvorePrint(Arvore nRaiz);


int main() {
	Arvore r = inicializa();
	int test = 1;
	int novalueinsert;
	int qtdIN = 0;
	//realiza o teste se é possitivo e pede a entrada do usuário para as inserções;
	while(test == 1){
		printf("Digite um valor para ser inserido na arvore: ");
		scanf("%d",&novalueinsert);
		if(novalueinsert < 0){
			printf("Valor inserido eh negativo, insira um valor valido!\n");
		}
		else{
			Arvore newno = CriaNo(novalueinsert);
			r = input(r, newno);
			qtdIN++;
		}
		printf("Deseja continuar a inserir valores ?[1 = sim | 0 = nao]: ");
		scanf("%d", &test);
	}
	
	//printa a quantidade de itens inseridos seguido pela arvore
	printf("A quantidade de itens inseridos foi: %d\n", qtdIN);
	ArvorePrint(r);
	
	
	return 0;
}

Arvore inicializa(){
	return(NULL);
}
	
Arvore CriaNo(int novalue){
	Arvore newno = (Arvore) malloc(sizeof(Arvore));
	newno->key = novalue;
	newno->esquerda = NULL;
	newno->direita = NULL;
}

//Insere valores dentro da arvore
Arvore input (Arvore nc, Arvore no){
	if(nc == NULL) return no;
	else{
		if(no->key < nc->key)
			nc->esquerda = input(nc->esquerda, no);
		else
			nc->direita = input(nc->direita, no);
	}
	
	return nc;
}

//printa a arvore
void ArvorePrint(Arvore nRaiz){
	if(nRaiz != NULL){
		printf("%i", nRaiz->key);
		printf("(");
		ArvorePrint(nRaiz->esquerda);
		ArvorePrint(nRaiz->direita);
		printf(")");
	}
}



