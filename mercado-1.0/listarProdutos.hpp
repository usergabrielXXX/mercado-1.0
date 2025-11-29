#include "estruturasProdutos.hpp"
#include "emojis.hpp"

void listar_hortifruti(void){
    size_t tamanho = min({e_produtos->HORTIFRUTI.setor_FRUTAS.size()});
    for(size_t i=0; i < tamanho; i++){
        cout << i << '.' << '[' << emojis->emojis_hortifruti.setor_frutas[i] << ']' << e_produtos->HORTIFRUTI.setor_FRUTAS[i] << '\n';
    }
}