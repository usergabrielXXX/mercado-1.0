#include "funcoes.hpp"
#include "menus.hpp"
#include "banners.hpp"
#include "cores.hpp"

int main(void)
{

    string opcao;

    while (1)
    {
        menu_principal();
        cout << "> ";
        std::getline(cin, opcao);
        inserir_numeros(opcao);
        if (converterINT(opcao) == 0)
        {
            menu_hortifruti();
        }

        if (converterINT(opcao) == 1)
        {
            menu_acougue();
        }

        if(converterINT(opcao) == 00){
            cout << "Encerrando o programa!\n";
            sleep();
            break;
        }
    }

    return 0;
}