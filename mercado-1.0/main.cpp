#include "cabecalhos.hpp"
#include "funcoes.hpp"
#include "menus.hpp"
#include "banners.hpp"

int main(void){

    string opcao;

    while(1){
        banner_menu();
        for(int i=0; i < 10; i++){
            cout << i << '.' << ' ' << VERDE_CLARO << NEGRITO << ITALICO << mercado->MENU.menu[i] << RESET << '\n';
        }
        cout << NEGRITO << VERMELHO_CLARO << '[' << "MENU" << ']' << RESET << " Digite a opção desejada: ";
        cin >> opcao;
        validacao_entrada_menu(opcao);
    }
    return 0;
}