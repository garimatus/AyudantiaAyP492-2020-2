#include <stdio.h>
#include <stdlib.h>



struct unidimensionales
{
    int* a;
    int n;
}covid1,covid2,covid3;

typedef struct unidimensionales covid;

void crearArregVal(int* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Ingrese un valor de tipo entero en a[%d] : ", i);
        scanf("%d", &a[i]);
    }
}

void crearArregInd(int* d, int n)
{
    for(int i = 0; i < n; i++)
    {
        d[i] = i;
    }
}

void bubbleSort(int a[],/* int d[],*/ int n)
{
    int temp;
    
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(a[j] < a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void invertirArreg(int a[], int n)
{
    int aux, temp;

    aux = n;

    aux/=2; // <- azúcar sintáctica
    
    bubbleSort(a,n);

    for(int i = 0; i < aux; i++)
    {
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
}

int main(void)
{
    int /*n, * a,*/ * d;

    covid COVID;

    printf("Por favor, ingrese la longitud del arreglo : ");
    scanf("%d", &COVID.n);

    COVID.a = (int*)malloc(sizeof(COVID.n)*COVID.n); // malloc(# de Bytes)
    d = (int*)malloc(sizeof(COVID.n)*COVID.n);

    crearArregVal(COVID.a,COVID.n);
    crearArregInd(d,COVID.n);

    //bubbleSort(COVID.a,d,COVID.n);

    invertirArreg(COVID.a,COVID.n);

    for(int i = 0; i < COVID.n; i++)
    {
        printf("a[%d] = %d \n", i, COVID.a[i]);
    }

    return 0;
}