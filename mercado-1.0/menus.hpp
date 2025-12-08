#include "cabecalhos.hpp"
#include "estruturasProdutos.hpp"
#include "cores.hpp"
#include "emojis.hpp"

extern void banner_menu(void);
extern void banner_hortifruti(void);
// extern void banner_carnes(void);
// extern void banner_frios(void);
// extern void banner_mercearia(void);
// extern void banner_padaria(void);
// extern void banner_bebidas(void);
// extern void banner_higiene(void);
// extern void banner_utensilios(void);
// extern void banner_pepelaria(void);
// extern void banner_petshop(void);

void menu_principal(void)
{
    clear();
    banner_menu();
    size_t tamanho = min({mercado->MENU.menu.size()});

    for (size_t i = 0; i < tamanho; i++)
    {
        cout << NEGRITO << ITALICO << VERDE_CLARO << i << RESET << ' ' << NEGRITO << ITALICO << mercado->MENU.menu[i] << RESET << '\n';
    }
}

void menu_hortifruti(/*const string &e*/)
{
    while (1)
    {
        clear();
        banner_hortifruti();
        string s;

        cout << "0. [\xf0\x9f\x8d\x8e] Frutas" << '\n';
        cout << "1. [\xf0\x9f\x8d\x85] Legumes" << '\n';
        cout << "2. [\xf0\x9f\xa5\xac] Verduras" << '\n';
        cout << "Insira a opção desejada: " << RESET;
        std::getline(cin, s);

        if (s == "0")
        {
            auto &frutas = mercado->HORTIFRUTI.setor_FRUTAS;
            auto &ef = emojis->emojis_hortifruti.setor_frutas;

            size_t tf = frutas.size();
            size_t tef = ef.size();
            size_t limite = min(tf, tef);

            for (size_t i = 0; i < limite; i++)
            {
                cout << NEGRITO << ITALICO << i << RESET << '.' << ' ' << '[' << ef[i] << ']' << VERDE_CLARO << frutas[i] << RESET << '\n';
            }
            string n;
            cout << "Insira a opção desejada: ";
            std::getline(cin, n);
        }
    }
}

// void menu_carnes(void)
// {
//     clear();
//     banner_carnes();
//     size_t tamanho = min({mercado->CARNES.setor_CARNES.size()});

//     for (size_t i = 0; i < tamanho; i++)
//     {
//         cout << i << '.' << ' ' << mercado->CARNES.setor_CARNES[i] << '\n';
//     }
// }

// void menu_frios(void)
// {
//     banner_frios();
//     size_t tamanho = min({mercado->FRIOS.setor_FRIOS.size()});

//     for (size_t i = 0; i < tamanho; i++)
//     {
//         cout << i << '.' << ' ' << mercado->FRIOS.setor_FRIOS[i] << '\n';
//     }
// }

// void menu_mercearia(void)
// {
//     banner_mercearia();
//     size_t tamanho = min({mercado->MERCEARIA.setor_MERCEARIA.size()});

//     for (size_t i = 0; i < tamanho; i++)
//     {
//         cout << i << '.' << ' ' << mercado->MERCEARIA.setor_MERCEARIA[i] << '\n';
//     }
// }

// void menu_padaria(void)
// {
//     banner_padaria();
//     size_t tamanho = min({mercado->PADARIA.setor_PADARIA.size()});

//     for (size_t i = 0; i < tamanho; i++)
//     {
//         cout << i << '.' << ' ' << mercado->PADARIA.setor_PADARIA[i] << '\n';
//     }
// }

// void menu_bebidas(void)
// {
//     banner_bebidas();
//     size_t tamanho = min({mercado->BEBIDAS.setor_BEBIDAS.size()});

//     for (size_t i = 0; i < tamanho; i++)
//     {
//         cout << i << '.' << ' ' << mercado->BEBIDAS.setor_BEBIDAS[i] << '\n';
//     }
// }

// void menu_higiene(void)
// {
//     banner_higiene();
//     size_t tamanho = min({mercado->HIGIENE.setor_HIGIENE.size()});

//     for (size_t i = 0; i < tamanho; i++)
//     {
//         cout << i << '.' << ' ' << mercado->HIGIENE.setor_HIGIENE[i] << '\n';
//     }
// }

// void menu_utensilios(void)
// {
//     banner_utensilios();
//     size_t tamanho = min({mercado->UTENSILIOS.setor_UTENSILIOS.size()});

//     for (size_t i = 0; i < tamanho; i++)
//     {
//         cout << i << '.' << ' ' << mercado->UTENSILIOS.setor_UTENSILIOS[i] << '\n';
//     }
// }

// void menu_papelaria(void)
// {
//     banner_pepelaria();
//     size_t tamanho = min({mercado->PAPELARIA.setor_PAPELARIA.size()});

//     for (size_t i = 0; i < tamanho; i++)
//     {
//         cout << i << '.' << ' ' << mercado->PAPELARIA.setor_PAPELARIA[i] << '\n';
//     }
// }

// void menu_petshop(void)
// {
//     banner_petshop();
//     size_t tamanho = min({mercado->PET_SHOP.setor_PET_SHOP.size()});

//     for (size_t i = 0; i < tamanho; i++)
//     {
//         cout << i << '.' << ' ' << mercado->PET_SHOP.setor_PET_SHOP[i] << '\n';
//     }
// }
