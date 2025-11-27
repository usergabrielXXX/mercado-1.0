#include "cabecalhos.hpp"

// função que define uma pausa (sleep)
void sleep(void){
#define TEMPO 600
    sleep_for(milliseconds(TEMPO));
}

// permitir que a entrada só seja validada se for entrada numerica
bool validacao_entrada_menu(const string &x){
    if(x.empty())
        return false;
    
    for(auto &c : x){
        if(!isdigit(static_cast<unsigned char>(c))){
            cout << "somente números!" << '\n';
            return false;
        }
    }

    return true;
}



