#include <stdio.h>


typedef struct {
    char pais[30];
    int Codigo_da_carta;
} Carta;

int main() {
    
    Carta cartas[20] = {
        {"Brasil", 1}, {"Argentina", 2}, {"Estados Unidos", 3}, {"Canadá", 4},
        {"México", 5}, {"Alemanha", 6}, {"França", 7}, {"Itália", 8},
        {"Espanha", 9}, {"Portugal", 10}, {"Japão", 11}, {"China", 12},
        {"Índia", 13}, {"Rússia", 14}, {"Austrália", 15}, {"Nova Zelândia", 16},
        {"África do Sul", 17}, {"Egito", 18}, {"Nigéria", 19}, {"Quênia", 20}
    };

    // Exibindo as cartas
    for(int i = 0; i < 20; i++) {
        printf("Carta %d: %s, Código: %d\n", i+1, cartas[i].pais, cartas[i].Codigo_da_carta);
    }

    return 0;
}
