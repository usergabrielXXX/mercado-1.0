#include "cabecalhos.hpp"
#include "estruturasProdutos.hpp"
#include "cores.hpp"
#include "emojis.hpp"

extern void banner_menu(void);
extern void banner_hortifruti(void);
extern void banner_acougue(void);
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
    cout << NEGRITO << ITALICO << VERDE_CLARO << "00 " << RESET << NEGRITO << ITALICO << "Sair" << RESET << '\n';
}

void menu_hortifruti(/*const string &e*/)
{
    string s, n, sair;

    while (1) // loop FLV
    {
        clear();
        banner_hortifruti();

        cout << NEGRITO << ITALICO << "0." << RESET << " [\xf0\x9f\x8d\x8e] Frutas" << '\n';
        cout << NEGRITO << ITALICO << "1." << RESET << " [\xf0\x9f\x8d\x85] Legumes" << '\n';
        cout << NEGRITO << ITALICO << "2." << RESET << " [\xf0\x9f\xa5\xac] Verduras" << '\n';
        cout << NEGRITO << ITALICO << "3." << RESET << " [\xe2\x9b\x94] Voltar ao menu anterior" << '\n';
        cout << NEGRITO << VERMELHO_CLARO << '[' << "HORTIFRUTI" << ']' << RESET  "Insira a opção desejada: " << RESET;
        std::getline(cin, s);
        validar_somente_numeros(s);

        if (converterINT(s) == 0) // Frutas
        {
            auto &f = mercado->HORTIFRUTI.setor_FRUTAS;
            auto &ec = emojis->emojis_hortifruti.setor_frutas;

            size_t tc = f.size();
            size_t tec = ec.size();
            size_t limite = min(tc, tec);

            for (size_t i = 0; i < limite; i++)
            {
                cout << NEGRITO << SUBLINHADO << ITALICO << i << RESET << '.' << ' ' << '[' << ec[i] << ']' << VERDE_CLARO << f[i] << RESET << '\n';
            }
            cout << NEGRITO << VERMELHO_CLARO << '[' << "FRUTAS" << ']' << RESET << "Insira a opção desejada: ";
            std::getline(cin, n);
            validar_somente_numeros(n);
        }

        if (converterINT(s) == 1) // legumes
        {
            auto &l = mercado->HORTIFRUTI.setor_LEGUMES;
            auto &ec = emojis->emojis_hortifruti.setor_legumes;

            size_t tc = l.size();
            size_t tec = ec.size();
            size_t limite = min(tc, tec);

            for (size_t i = 0; i < limite; i++)
            {
                cout << NEGRITO << SUBLINHADO << ITALICO << i << RESET << '.' << ' ' << '[' << ec[i] << ']' << VERDE_CLARO << l[i] << RESET << '\n';
            }
            cout << NEGRITO << VERMELHO_CLARO << '[' << "LEGUMES" << ']' << RESET << "Insira a opção desejada: ";
            std::getline(cin, n);
            validar_somente_numeros(n);
        }

        if (converterINT(s) == 2) // verduras
        {
            auto &v = mercado->HORTIFRUTI.setor_VERDURAS;
            auto &ec = emojis->emojis_hortifruti.setor_verduras;

            size_t tc = v.size();
            size_t tec = ec.size();
            size_t limite = min(tc, tec);

            for (size_t i = 0; i < limite; i++)
            {
                cout << NEGRITO << SUBLINHADO << ITALICO << i << RESET << '.' << ' ' << '[' << ec[i] << ']' << VERDE_CLARO << v[i] << RESET << '\n';
            }
            cout << NEGRITO << VERMELHO_CLARO << '[' << "VERDURAS" << ']' << RESET << "Insira a opção desejada: ";
            std::getline(cin, n);
            validar_somente_numeros(n);
        }

        if (converterINT(s) == 3) // sair do loop FLV
        {
            cout << "Saindo da sessão FLV!" << '\n';
            sleep();
            break;
        }

        {
            cout << VERMELHO_CLARO << "OPÇÃO INVÁLIDA!" << RESET << '\n';
            sleep();
        }
    } // fim do loop

    do
    {
        cout << "Deseja sair dessa sessão?" << '\n'
             << "1. sim" << '\n'
             << "2. não" << '\n';
        cout << "> ";
        std::getline(cin, sair);
        validar_somente_numeros(sair);

        if (converterINT(sair) == 1)
        {
            cout << "Saindo desta sessão!" << '\n';
            sleep();
            break;
        }
        {
            continue;
        }
    } while (1);
}

void menu_acougue(void)
{
    string s, n, sair;

    while (1) // loop AÇOUGUE
    {
        clear();
        banner_acougue();

        cout << NEGRITO << ITALICO << "0." << RESET << " [\xf0\x9f\xa5\xa9] Carne Bovina" << '\n';
        cout << NEGRITO << ITALICO << "1." << RESET << " [\xf0\x9f\x90\x96] Carne Suína" << '\n';
        cout << NEGRITO << ITALICO << "2." << RESET << " [\xf0\x9f\x90\x94] Aves" << '\n';
        cout << NEGRITO << ITALICO << "3." << RESET << " [\xf0\x9f\x90\x9f] Peixes" << '\n';
        cout << NEGRITO << ITALICO << "4." << RESET << " [\xf0\x9f\xa6\x90] Frutos do Mar" << '\n';
        cout << NEGRITO << ITALICO << "5." << RESET << " [\xe2\x9b\x94] Voltar ao menu anterior" << '\n';
        cout << "Insira a opção desejada: " << RESET;
        std::getline(cin, s);
        validar_somente_numeros(s);

        if (converterINT(s) == 0) // bovina
        {
            auto &boi = mercado->ACOUGUE.setor_ACOUGUE_BOVINA;
            auto &ecarnes = emojis->emojis_carnes.setor_carneBovina;

            size_t tc = boi.size();
            size_t tec = ecarnes.size();
            size_t limite = min(tc, tec);

            for (size_t i = 0; i < limite; i++)
            {
                cout << NEGRITO << SUBLINHADO << ITALICO << i << RESET << '.' << ' ' << '[' << ecarnes[i] << ']' << VERDE_CLARO << boi[i] << RESET << '\n';
            }
            cout << NEGRITO << VERMELHO_CLARO << '[' << "AÇOUGUE" << ']' << RESET << "Insira a opção desejada: ";
            std::getline(cin, n);
            validar_somente_numeros(n);
        }

        if (converterINT(s) == 1) // suina
        {
            auto &suina = mercado->ACOUGUE.setor_ACOUGUE_SUINAS;
            auto &es = emojis->emojis_carnes.setor_carneSuina;

            size_t ssuinos = suina.size();
            size_t ess = es.size();
            size_t limite = min(ssuinos, ess);

            for (size_t i = 0; i < limite; i++)
            {
                cout << NEGRITO << SUBLINHADO << ITALICO << i << RESET << '.' << ' ' << '[' << es[i] << ']' << VERDE_CLARO << suina[i] << RESET << '\n';
            }
            cout << NEGRITO << VERMELHO_CLARO << '[' << "SUINOS" << ']' << RESET << "Insira a opção desejada: ";
            std::getline(cin, n);
            validar_somente_numeros(n);
        }

        if (converterINT(s) == 2) // aves
        {
            auto &aves = mercado->ACOUGUE.setor_ACOUGUE_AVES;
            auto &ea = emojis->emojis_carnes.setor_carneAves;

            size_t ta = aves.size();
            size_t tea = ea.size();
            size_t limite = min(ta, tea);

            for (size_t i = 0; i < limite; i++)
            {
                cout << NEGRITO << SUBLINHADO << ITALICO << i << RESET << '.' << ' ' << '[' << ea[i] << ']' << VERDE_CLARO << aves[i] << RESET << '\n';
            }
            cout << NEGRITO << VERMELHO_CLARO << '[' << "AVES" << ']' << RESET << "Insira a opção desejada: ";
            std::getline(cin, n);
            validar_somente_numeros(n);
        }

        if (converterINT(s) == 3) // peixes
        {
            auto &peixes = mercado->ACOUGUE.setor_ACOUGUE_PEIXES;
            auto &epp = emojis->emojis_carnes.setor_carnePeixes;

            size_t p = peixes.size();
            size_t ep = epp.size();
            size_t limite = min(p, ep);

            for (size_t i = 0; i < limite; i++)
            {
                cout << NEGRITO << SUBLINHADO << ITALICO << i << RESET << '.' << ' ' << '[' << epp[i] << ']' << VERDE_CLARO << peixes[i] << RESET << '\n';
            }
            cout << NEGRITO << VERMELHO_CLARO << '[' << "PEIXES" << ']' << RESET << "Insira a opção desejada: ";
            std::getline(cin, n);
            validar_somente_numeros(n);
        }

        if (converterINT(s) == 4) // frutos do mar
        {
            auto &fmar = mercado->ACOUGUE.setor_ACOUGUE_FRUTOS_DO_MAR;
            auto &efmar = emojis->emojis_carnes.setor_carneFrutosMar;

            size_t f = fmar.size();
            size_t ef = efmar.size();
            size_t limite = min(f, ef);

            for (size_t i = 0; i < limite; i++)
            {
                cout << NEGRITO << SUBLINHADO << ITALICO << i << RESET << '.' << ' ' << '[' << efmar[i] << ']' << VERDE_CLARO << fmar[i] << RESET << '\n';
            }
            cout << NEGRITO << VERMELHO_CLARO << '[' << "FRUTOS DO MAR" << ']' << RESET << "Insira a opção desejada: ";
            std::getline(cin, n);
            validar_somente_numeros(n);
        }

        if (converterINT(s) == 5) // sair do loop AÇOUGUE
        {
            cout << "Saindo da sessão AÇOUGUE!" << '\n';
            sleep();
            break;
        }
    }

    do
    {
        cout << "Deseja sair dessa sessão?" << '\n'
             << "1. sim" << '\n'
             << "2. não" << '\n';
        cout << "> ";
        std::getline(cin, sair);
        validar_somente_numeros(sair);

        if (converterINT(sair) == 1)
        {
            cout << "Saindo desta sessão!" << '\n';
            sleep();
            break;
        }
        {
            continue;
        }
    } while (1);
}

// void menu_frios(void)
// {
// }

// void menu_mercearia(void)
// {
// }

// void menu_padaria(void)
// {
// }

// void menu_bebidas(void)
// {
// }

// void menu_higiene(void)
// {
// }

// void menu_utensilios(void)
// {
// }

// void menu_papelaria(void)
// {
// }

// void menu_petshop(void)
// {
// }
