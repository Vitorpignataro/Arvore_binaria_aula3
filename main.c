#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*José Vitor ALves Pignataro*/
/*0096150*/
/*Sexto Semestre*/


struct arvore {
 char pf;
 struct arvore* esquerda;
 struct arvore* direita;
};

typedef struct arvore Arvore;

int main(int argc, char *argv[]) {
	
	Arvore* inicializa(void)
	{
 		return NULL;
	}
	
		Arvore* cria(char ch, Arvore* esq, Arvore* dir){
 		Arvore* n=(Arvore*)malloc(sizeof(Arvore));
 		n->pf = ch;
 		n->esquerda = esq;
 		n->direita = dir;
 		return n;
	}
	return 0;
}
