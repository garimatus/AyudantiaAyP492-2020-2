#include <stdio.h>
#include <stdlib.h>



int corrida(int n)
{
    int C, corrida = 0;

    for (int i = 1, j = 0; i <= n ; C = j , i+=C, j++)
    {
        corrida = j;
    }

    return corrida;
}

int main(int argc, char** argv)
{
    int n = atoi(argv[1]);
    
    int c = corrida(n);

    printf("La corrida de %d es : %d\n", n, c);
}