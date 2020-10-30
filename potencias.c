#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
    if(argc == 3)
    {
        char* ruta = argv[0], * base, * cant = argv[2], * nom;
        int x, * y, * z, len, num;
        
        x = atoi(argv[1]);

        y = &x;
        
        len = sizeof(ruta)/sizeof(argv[0][0]);
        
        num = atoi(cant);
        
        z = (int*)malloc(num*sizeof(x));
        nom = (char*)malloc(len*sizeof(char));
        
        for(int i = 0; i < len; i++)
            
            nom[i] = argv[0][i+2];
        
        printf("Este archivo ejecutable se llama %s", nom);
        printf(" y en él veremos punteros.\n");

        for(int i = 0; i < num; i++)
        {
            if(i > 0)
                z[i] = *y*(z[i-1]);
            
            else
                z[i] = *y;
        }
        
        for(int i = 0; i < num; i++)
            
            printf("El valor de z[%d] (%s elevado a %d) usando punteros es : %d\n", i, argv[1], i+1, z[i]);
        
        return EXIT_SUCCESS;
    }
    
    else
    {
        printf("No hay o hay muchos argumentos para la ejecución.\n");
        
        return EXIT_FAILURE;
    }
}