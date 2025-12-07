#include <funcoes.hpp>
#include <array>
using std::array;

bool verificar_dados(const string &nome){
    const array<string, 4> nomes_autorizados = {"gabriel", "joel", "vanessa", "maria"};

    if(nome.empty()) return false;

    for(const auto& c : nomes_autorizados){
        if(nome == c){
            cout << "usuário não encontrado!" << '\n';
        }
        return false;
    }

    return false;
}