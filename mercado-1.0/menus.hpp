#include "cabecalhos.hpp"
#include "estruturasProdutos.hpp"

void menu_principal(void){
    size_t tamanho = min({mercado->MENU.menu.size()});

    for(size_t i=0; i < tamanho; i++){
        cout << mercado->MENU.menu[i] << '\n';
    }
}

void menu_hortifruti(void){
    
}

void menu_carnes(void){
}

void menu_frios(void){
}

void menu_mercearia(void){
}

void menu_padaria(void){
}

void menu_bebidas(void){
}

void menu_higiene(void){
}

void menu_utensilios(void){
}

void menu_papelaria(void){
}

void menu_petshop(void){
}
