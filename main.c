#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*José Vitor ALves Pignataro*/
/*0096150*/
/*Sexto Semestre*/


//1) Declaro o struc que representa um no arvore
struct arvore {
 char pf;
 struct arvore* esquerda;
 struct arvore* direita;
};
//2) declaro um typedef
typedef struct arvore Arvore;

int main(int argc, char *argv[]) {
	
	//3) inicializa o nó com valor null
	Arvore* inicializa(void)
	{
 		return NULL;
	}
	
	//Cria um novo nó
		Arvore* cria(char ch, Arvore* esq, Arvore* dir){
 		Arvore* n=(Arvore*)malloc(sizeof(Arvore));
 		n->pf = ch;
 		n->esquerda = esq;
 		n->direita = dir;
 		return n;
	}
	return 0;
}
