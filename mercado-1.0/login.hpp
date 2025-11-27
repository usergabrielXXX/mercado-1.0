#include "cabecalhos.hpp"

/* uma função que verificar nomes autozidos para acessar o sistema */

std::vector<std::string> nomes_autorizados = {"gabriel", "maria", "fernando", "luiza"};

bool login(const std::vector<std::string>& log){

    for(size_t i=0; i < nomes_autorizados.size(); i++){
        if(log[i] != nomes_autorizados[i]){
            std::cout << "nome de usuário não encontrado!" << '\n';
            return false; // falha imediatamente caso o usuário não seja encontrado
        }
    }

    return true;
}