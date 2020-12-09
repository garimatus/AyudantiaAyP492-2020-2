#include <stdio.h>
#include <stdlib.h>



struct numero{
    int x;
    struct numero* sig;
};

typedef struct numero* lista;

void newNodo(lista* L, int n)
{
    lista l = *L, q;
    
    lista p = (lista)malloc(sizeof(struct numero));

    if (*L == NULL)
    {
        p -> x = n;

        p -> sig = *L;

        *L = p;
    }
        
    else
    {
        while (*L != NULL)
        {
            q = l;

            l = l -> sig;
        }
    
        p -> sig = NULL;

        p -> x = n;

        q -> sig = p;
    }

    //return L;
}

int main(int argc, char** argv)
{  
    lista L = NULL, l, p;

    //lista p = (lista)malloc(sizeof(struct Nodo));

    //L = p;

    int n = atoi(argv[1]);
    
    for (int i = 0; i < n; ++i)
        newNodo(&L, i);
    
    l = L;
    //p = L;
    
    if (p -> sig != NULL)
        printf("L = [");

    while(l != NULL)
    {
        if (l -> sig != NULL)
            printf("%d, ", l -> x);
        else
            printf("%d]\n", l -> x);

        l = l -> sig;
    }
    

    return 0;
}