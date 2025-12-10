#include "cabecalhos.hpp"

// extern void menu_menu(void);
// extern void menu_hortifruti(void);
// extern void menu_carnes(void);
// extern void menu_frios(void);
// extern void menu_mercearia(void);
// extern void menu_padaria(void);
// extern void menu_bebidas(void);
// extern void menu_higiene(void);
// extern void menu_utensilios(void);
// extern void menu_pepelaria(void);
// extern void menu_petshop(void);

// função que define uma pausa (sleep)
void sleep(void)
{
    const int TEMPO = 600;
    sleep_for(milliseconds(TEMPO));
}

// permitir que a entrada só seja validada se for entrada numerica
bool validar_somente_numeros(const string &x)
{
    if (x.empty())
        return false;

    for (auto &c : x)
    {
        if (!isdigit(static_cast<unsigned char>(c)))
        {
            cout << NEGRITO << ITALICO << VERMELHO_CLARO << "[\xf0\x9f\x9a\xab] SOMENTE NÚMEROS! [\xf0\x9f\x9a\xab]" << RESET << '\n';
            sleep();
            return false;
        }
    }

    return true;
}

// vector<string> nomes_autorizados = {"gabriel", "maria", "fernando", "luiza"};

// bool login(const string &nome_digitado)
// {

//     for (const auto &nome : nomes_autorizados)
//     {
//         if (nome_digitado == nome)
//         {
//             return true; // achou
//         }
//     }

//     return false;
// }

void clear(void)
{
    system("clear");
}

int converterINT(const string &ss)
{

    try
    {
        int converter = stoi(ss);
    }
    catch (const std::exception &e)
    {
        cout << "Não insira caracteres!\n";
    }

    return 0;
}