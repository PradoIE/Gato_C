#include <stdio.h>
#include <conio.h>

char matrix[10] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9'};

void tablero_juegos()
{
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", matrix[1], matrix[2], matrix[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", matrix[4], matrix[5], matrix[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", matrix[7], matrix[8], matrix[9]);

    printf("     |     |     \n\n");
}

int main() 
{
    int contador = 1, jugador, numero, game_status;
    char letra;
    do 
    {
        tablero_juegos();
        printf("Selecione un numero: ");
        scanf_s("%d", &numero);
        if (contador % 2)
            jugador = 2,
            letra = 'X';
        else
            jugador = 1,
            letra = 'O';


        if (numero == 1 && matrix[1] == '1')
            matrix[1] = letra;
        if (numero == 2 && matrix[2] == '2')
            matrix[2] = letra;
        if (numero == 3 && matrix[3] == '3')
            matrix[3] = letra;
        if (numero == 4 && matrix[4] == '4')
            matrix[4] = letra;
        if (numero == 5 && matrix[5] == '5')
            matrix[5] = letra;
        if (numero == 6 && matrix[6] == '6')
            matrix[6] = letra;
        if (numero == 7 && matrix[7] == '7')
            matrix[7] = letra;
        if (numero == 8 && matrix[8] == '8')
            matrix[8] = letra;
        if (numero == 9 && matrix[9] == '9')
            matrix[9] = letra;
        game_status = 0;

        contador++;
        return 0;
    }while (game_status == 0);
}

