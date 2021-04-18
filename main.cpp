#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cstdlib>
#include <clocale>
#include <stdio.h>
#include <stdlib.h>
#define MAX 8

using namespace std;

short resul;

void decimalbinario () {

    int vet_bin[MAX] = {00000000}, vet_bin1[MAX] = {00000000};
    int i = 0, j;
    int aux_resul = resul;

    while(resul > 0){
        vet_bin[i] = resul % 2;
        i++;
        resul = resul / 2;
		}

        printf("Saída ", aux_resul);
        printf("\n");
        for(j = 7; j >= 0; j--)
        printf("%d", vet_bin[j]);
        printf("\n\n\n");
      
}


void soma () {

    int const mask = CHAR_BIT >> sizeof(int) * CHAR_BIT - 1;
    int argc;
    string bin1, bin2;
    bool inputOk;
    short n, n1;

      cout << "Digite um numero : " << endl;
      do {
        cin >> bin1;
        inputOk = true;
        for (size_t i = 0; (i < bin1.size()) && (inputOk == true); i++) {
          if ((bin1[i] != '0') && (bin1[i] != '1')) {
            inputOk = false;
            cout << "ERRO" << endl;
            }
            }
            if ((inputOk == true) && (bin1.size() > CHAR_BIT)) {
              inputOk = false;
              cout << "ERRO " << CHAR_BIT << endl;
            }
        } while (inputOk == false);
        n = 0;
        for (int i = bin1.size()-1, j = 0; i >= 0; --i,j++) {
          n |= (bin1[i] - '0') << j;
        }

        cout << "Digite o segundo numero : " << endl;
      do {
        cin >> bin2;
        inputOk = true;
        for (size_t i = 0; (i < bin2.size()) && (inputOk == true); i++) {
          if ((bin2[i] != '0') && (bin2[i] != '1')) {
            inputOk = false;
            cout << "ERRO" << endl;
            }
            }
            if ((inputOk == true) && (bin2.size() > CHAR_BIT)) {
              inputOk = false;
              cout << "ERRO " << CHAR_BIT << endl;
            }
        } while (inputOk == false);
        n1 = 0;
        for (int i = bin2.size()-1, j = 0; i >= 0; --i,j++) {
          n1 |= (bin2[i] - '0') << j;
        }

        resul = n + n1;

        cout << "\n\nEntrada" << endl;
        cout << "+" << endl;
        cout << bin1 << endl;
        cout << bin2 << endl << endl;

        decimalbinario ();
}


void subtracao () {

    int const mask = CHAR_BIT >> sizeof(int) * CHAR_BIT - 1;
    int argc;
    string bin1, bin2;
    bool inputOk;
    short n, n1;

      cout << "Digite um numero : " << endl;
      do {
        cin >> bin1;
        inputOk = true;
        for (size_t i = 0; (i < bin1.size()) && (inputOk == true); i++) {
          if ((bin1[i] != '0') && (bin1[i] != '1')) {
            inputOk = false;
            cout << "ERRO" << endl;
            }
            }
            if ((inputOk == true) && (bin1.size() > CHAR_BIT)) {
              inputOk = false;
              cout << "ERRO " << CHAR_BIT << endl;
            }
        } while (inputOk == false);
        n = 0;
        for (int i = bin1.size()-1, j = 0; i >= 0; --i,j++) {
          n |= (bin1[i] - '0') << j;
        }

        cout << "Digite o segundo numero : " << endl;
      do {
        cin >> bin2;
        inputOk = true;
        for (size_t i = 0; (i < bin2.size()) && (inputOk == true); i++) {
          if ((bin2[i] != '0') && (bin2[i] != '1')) {
            inputOk = false;
            cout << "ERRO" << endl;
            }
            }
            if ((inputOk == true) && (bin2.size() > CHAR_BIT)) {
              inputOk = false;
              cout << "ERRO " << CHAR_BIT << endl;
            }
        } while (inputOk == false);
        n1 = 0;
        for (int i = bin2.size()-1, j = 0; i >= 0; --i,j++) {
          n1 |= (bin2[i] - '0') << j;
        }

        resul = n - n1;

        cout << "\n\nEntrada" << endl;
        cout << "-" << endl;
        cout << bin1 << endl;
        cout << bin2 << endl << endl;

        decimalbinario ();
}


void multiplicacao () {

    int const mask = CHAR_BIT >> sizeof(int) * CHAR_BIT - 1;
    int argc;
    string bin1, bin2;
    bool inputOk;
    short n, n1;

      cout << "Digite um numero : " << endl;
      do {
        cin >> bin1;
        inputOk = true;
        for (size_t i = 0; (i < bin1.size()) && (inputOk == true); i++) {
          if ((bin1[i] != '0') && (bin1[i] != '1')) {
            inputOk = false;
            cout << "ERRO" << endl;
            }
            }
            if ((inputOk == true) && (bin1.size() > CHAR_BIT)) {
              inputOk = false;
              cout << "ERRO " << CHAR_BIT << endl;
            }
        } while (inputOk == false);
        n = 0;
        for (int i = bin1.size()-1, j = 0; i >= 0; --i,j++) {
          n |= (bin1[i] - '0') << j;
        }

        cout << "Digite o segundo numero : " << endl;
      do {
        cin >> bin2;
        inputOk = true;
        for (size_t i = 0; (i < bin2.size()) && (inputOk == true); i++) {
          if ((bin2[i] != '0') && (bin2[i] != '1')) {
            inputOk = false;
            cout << "ERRO" << endl;
            }
            }
            if ((inputOk == true) && (bin2.size() > CHAR_BIT)) {
              inputOk = false;
              cout << "ERRO " << CHAR_BIT << endl;
            }
        } while (inputOk == false);
        n1 = 0;
        for (int i = bin2.size()-1, j = 0; i >= 0; --i,j++) {
          n1 |= (bin2[i] - '0') << j;
        }

        resul = n * n1;

        cout << "\n\nEntrada" << endl;
        cout << "*" << endl;
        cout << bin1 << endl;
        cout << bin2 << endl << endl;

        decimalbinario ();
}


void divisao () {

    int const mask = CHAR_BIT >> sizeof(int) * CHAR_BIT - 1;
    int argc;
    string bin1, bin2;
    bool inputOk;
    short n, n1;

      cout << "Digite um numero : " << endl;
      do {
        cin >> bin1;
        inputOk = true;
        for (size_t i = 0; (i < bin1.size()) && (inputOk == true); i++) {
          if ((bin1[i] != '0') && (bin1[i] != '1')) {
            inputOk = false;
            cout << "ERRO" << endl;
            }
            }
            if ((inputOk == true) && (bin1.size() > CHAR_BIT)) {
              inputOk = false;
              cout << "ERRO " << CHAR_BIT << endl;
            }
        } while (inputOk == false);
        n = 0;
        for (int i = bin1.size()-1, j = 0; i >= 0; --i,j++) {
          n |= (bin1[i] - '0') << j;
        }

        cout << "Digite o segundo numero : " << endl;
      do {
        cin >> bin2;
        inputOk = true;
        for (size_t i = 0; (i < bin2.size()) && (inputOk == true); i++) {
          if ((bin2[i] != '0') && (bin2[i] != '1')) {
            inputOk = false;
            cout << "ERRO" << endl;
            }
            }
            if ((inputOk == true) && (bin2.size() > CHAR_BIT)) {
              inputOk = false;
              cout << "ERRO " << CHAR_BIT << endl;
            }
        } while (inputOk == false);
        n1 = 0;
        for (int i = bin2.size()-1, j = 0; i >= 0; --i,j++) {
          n1 |= (bin2[i] - '0') << j;
        }

        resul = n / n1;

        cout << "\n\nEntrada" << endl;
        cout << "/" << endl;
        cout << bin1 << endl;
        cout << bin2 << endl << endl;

        decimalbinario ();
}


void modulo () {

    int const mask = CHAR_BIT >> sizeof(int) * CHAR_BIT - 1;
    int argc;
    string bin1, bin2;
    bool inputOk;
    short n, n1;

      cout << "Digite um numero : " << endl;
      do {
        cin >> bin1;
        inputOk = true;
        for (size_t i = 0; (i < bin1.size()) && (inputOk == true); i++) {
          if ((bin1[i] != '0') && (bin1[i] != '1')) {
            inputOk = false;
            cout << "ERRO" << endl;
            }
            }
            if ((inputOk == true) && (bin1.size() > CHAR_BIT)) {
              inputOk = false;
              cout << "ERRO " << CHAR_BIT << endl;
            }
        } while (inputOk == false);
        n = 0;
        for (int i = bin1.size()-1, j = 0; i >= 0; --i,j++) {
          n |= (bin1[i] - '0') << j;
        }

        cout << "Digite o segundo numero : " << endl;
      do {
        cin >> bin2;
        inputOk = true;
        for (size_t i = 0; (i < bin2.size()) && (inputOk == true); i++) {
          if ((bin2[i] != '0') && (bin2[i] != '1')) {
            inputOk = false;
            cout << "ERRO" << endl;
            }
            }
            if ((inputOk == true) && (bin2.size() > CHAR_BIT)) {
              inputOk = false;
              cout << "ERRO " << CHAR_BIT << endl;
            }
        } while (inputOk == false);
        n1 = 0;
        for (int i = bin2.size()-1, j = 0; i >= 0; --i,j++) {
          n1 |= (bin2[i] - '0') << j;
        }

        resul = n % n1;

        cout << "\n\nEntrada" << endl;
        cout << "%" << endl;
        cout << bin1 << endl;
        cout << bin2 << endl << endl;

        decimalbinario ();
}


int main () {
    setlocale (LC_ALL, "");
    bool op=true;
    char opcao;
    inicio:

    while (op){
    printf("\nEscolha a opção desejada para operações com números binarios.\n\n");
    printf("1 - Soma \n2 - Subtração \n3 - Multiplicação \n4 - Divisão \n5 - Modulo \n6 - SAIR\n\n");
    cin >> opcao;

    switch (opcao) {
        case '1':
            printf("\n\nSoma\n\n");
            soma();
            break;
        case '2':
            printf("\n\nSubtração\n\n");
            subtracao();
            break;
        case '3':
            printf("\n\nMultiplicação\n\n");
            multiplicacao();
            break;
        case '4':
            printf("\n\nDivisão\n\n");
            divisao();
            break;
        case '5':
            printf("\n\nModulo\n\n");
            modulo();
            break;
        case '6':
            printf("\nvoce pediu para sair, prencione qualquer tecla para continuar\n\n");
            op=false;
            break;
        default:
            printf("\nvoce deve escolher uma opcao valida\n\n");
            printf("\nPrecione qualquer tecla para voltar ao menu\n\n");
            goto inicio;
    }
}

    cout << endl;
    return 0;
}
