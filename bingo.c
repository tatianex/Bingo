#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    int quantidade_cartelas;
    int cartelas[10];
    int numero;
    
    // Crie uma opção para digitar a quantidade de cartelas a serem criadas
    printf("Informe o número de cartelas: ");
    scanf("%d", &quantidade_cartelas);
    
    for (int y = 0; y < quantidade_cartelas; y++)
    {
        // Comando utilizado para criação de números aleatório  
        srand( time(NULL) );
        
        // Os números da cartela devem ser de 0 a 99
        // A cartela não pode ter números repetidos, deve ser feita uma conferencia
        
        for (int i = 0; i <= 10; i++)
        {
            // sorteia um número aleatório de 1 a 99
            numero = rand() % 99;
            
            // Verifica se o número já existe no vetor
            int x = 0;
            int encontrado = 0; // falso
            while ((x < 10) && (!encontrado))
            {
                if (cartelas[x] == numero)
                {
                    encontrado = 1; // verdadeiro
                    i--;
                    break;
                }
                else
                {
                    x++;
                }
            }
            
            // Imprime cada número da cartela
            if (!encontrado)
            {
                cartelas[i] = numero;
                printf("%d ", numero);
            }
        }
        // Nova linha para separar as cartelas
        printf("\n");
    }
    
    return 0;
}