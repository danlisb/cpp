#include <iostream>
#include <stdlib.h>

using namespace std;

// cout - saída de fluxo, passamos o que queremos imprimir na tela
// cin - entrada de fluxo, capturamos o que é digitado no teclado do usuário
// endl - quebra de linha
// << - operador de captura
// >> - operador de inserção

int main() {
    int num1 = 0, num2 = 0;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    int soma = num1 + num2;

    cout << "Número da soma em decimal: " << soma << endl;
    cout << "Número da soma em hexadecimal: 0x" << hex << soma << endl;

    return 0;
}