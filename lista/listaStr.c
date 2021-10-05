#include <stddef.h>
#include <stdlib.h>
struct lista
{
    int info; // armazena a informa��o
    struct lista* prox; // ponteiro para o pr�ximo elemento da lista

};

typedef struct lista Lista;

// fun��o que cria uma lista vazia

Lista* lst_cria(void)
{
    return NULL;
}

Lista* lst_insere(Lista** l, int i)
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo -> info = i;
    novo -> prox = *l;
    *l = novo;
}

//* fun��o que percorre os elementos da lista *//
void lst_imprime(Lista* l)
{
    Lista* p; // vari�vel de itera��o
    for(p = l; p!= NULL; p = p->prox)
        {
            printf("info = %d\n", p -> info);
        }
}

int lst_comprimento(Lista* l)
{
    int counter = 0;
    Lista* p;
    for (p = l; p!= NULL; p = p->prox)
    {
        counter++;

    }
    printf("elementos na lista: %d", counter);
}

int main(void)
{

    Lista* l;
	int val;
	int flag = 1;
	l = lst_cria();
	//INSERE
	while(flag != 0)
	{
		printf("Digite val\n");
		scanf("%d", &val);
		//INSERE
		lst_insere(&l,&val);


		printf("Digite flag\n");
		scanf("%d", &flag);
	}

    lst_comprimento(l);

    return 0;
}




