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
        if (opcao == "0")
        {
            menu_hortifruti();
            // string s;
            // cout << "insira a opção desejada: ";
            // std::getline(cin, s);
        }

        // if (opcao == "1")
        // {
        //     menu_carnes();
        //     string s;
        //     cout << "insira a opção desejada: ";
        //     std::getline(cin, s);
        // }

        // if (opcao == "2")
        // {
        //     menu_frios();
        //     string s;
        //     cout << "insira a opção desejada: ";
        //     std::getline(cin, s);
        // }
    }

    return 0;
}