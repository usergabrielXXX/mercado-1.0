#include "cabecalhos.hpp"
#include "estruturasProdutos.hpp"
#include "emojis.hpp"

int main(void){


    size_t tamanho_frutas = min({e_produtos->HORTIFRUTI.setor_FRUTAS.size()});
    size_t tamanho_legumes = min({e_produtos->HORTIFRUTI.setor_LEGUMES.size()});
    size_t tamanho_verduras = min({e_produtos->HORTIFRUTI.setor_VERDURAS.size()});


    cout << "FRUTAS\n";
    for(size_t i=0; i < tamanho_frutas; i++)
        cout << i <<  '.' << "[" << emojis_frutas->e_frutas[i] << "]" << ' ' << e_produtos->HORTIFRUTI.setor_FRUTAS[i] << '\n';

    cout << "LEGUMES\n";
    for(size_t i=0; i < tamanho_legumes; i++)
        cout << i <<  '.' << "[" << emojis_frutas->e_legumes[i] << "]" << ' ' << e_produtos->HORTIFRUTI.setor_LEGUMES[i] << '\n';

    cout << "VERDURAS\n";
    for(size_t i=0; i < tamanho_verduras; i++)
        cout << i <<  '.' << "[" << emojis_frutas->e_verduras[i] << "]" << ' ' << e_produtos->HORTIFRUTI.setor_VERDURAS[i] << '\n';
    
    return 0;
}