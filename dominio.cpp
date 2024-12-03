#include "dominio.h"
#include <iostream>

using namespace std;

void AVALIACAO::verifica(int avaliacao) {
    if (avaliacao < 0 || avaliacao > 5) {
        throw invalid_argument("Avaliação inválida: valor fora do intervalo permitido (0-5)");
    }
}

void CODIGO::verifica(string codigo)
{
    if (codigo.length() == 6)
    {
    }
    else
    {
        throw invalid_argument("Argumento invalido");
    }
    for (int i = 0; i < codigo.length(); i++)
    {
        if (isdigit(codigo[i]) || isalpha(codigo[i]))
        {
        }
        else
        {
            throw invalid_argument("Argumento invalido");
        }
    }
}
void DATA::verifica(string data) {
    if (data.length() != 8 || data[2] != '-' || data[5] != '-') {
        throw invalid_argument("Data inválida: formato incorreto");
    }

    int day = (data[0] - '0') * 10 + (data[1] - '0');
    int month = (data[3] - '0') * 10 + (data[4] - '0');
    int year = (data[6] - '0') * 10 + (data[7] - '0');

    if (month < 1 || month > 12) {
        throw invalid_argument("Data inválida: mês fora do intervalo permitido (1-12)");
    }

    bool is_leap_year = (year % 4 == 0);
    int max_days_in_month[] = {0, 31, (is_leap_year ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (day < 1 || day > max_days_in_month[month]) {
        throw invalid_argument("Data inválida: dia fora do intervalo permitido para o mês");
    }
}

void DINHEIRO::verifica(float dinheiro)
{
    if (dinheiro < 0 || dinheiro > 200000)
    {
        throw invalid_argument("Argumento invalido");
    }
}
void DURACAO::verifica(int duracao)
{
    if (duracao < 0 || duracao > 360)
    {
        throw invalid_argument("Argumento invalido");
    }
}
void NOME::verifica(string nome)
{
    if (nome.length() < 0 || nome.length() > 30)
    {
        throw invalid_argument("Argumento invalido");
    }
}
void HORARIO::verifica(string horario)
{
    if (horario.length() != 5)
    {
        throw invalid_argument("Argumento invalido1");
    }
    else if (isdigit(horario[0]) != true || isdigit(horario[1]) != true ||
             isdigit(horario[3]) != true || isdigit(horario[4]) != true)
    {
        throw invalid_argument("Argumento invalido2");
    }
    else
    {
        int hora = (10 * (horario[0] - '0')) + (horario[1] - '0');
        int min = (10 * (horario[3] - '0')) + (horario[4] - '0');
        if (hora < 0 || hora > 23 || min < 0 || min > 59)
        {
            throw invalid_argument("Argumento invalido3");
        }
    }
}

bool senhatest(string senha)
{
    if (senha.length() != 5){
        return true;
    }
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        if (isdigit(senha[i]))
        {
            array[i] = senha[i] - '0';
        }
        else
        {
            return true;
        }
    }

    if ((array[0] == array[1] - 1 &&
         array[1] == array[2] - 1 &&
         array[2] == array[3] - 1 &&
         array[3] == array[4] - 1) ||
        (array[0] == array[1] + 1 &&
         array[1] == array[2] + 1 &&
         array[2] == array[3] + 1 &&
         array[3] == array[4] + 1))
    {
        return true;
    }else
    {
        for (int i = 0; i < 5; i++)
        {
            int num=array[i];
            for (int j = 0; j < 5; j++)
            {
                if (j!=i)
                {
                   if (num==array[j]){
                    return true;
                    } 
                }
                
            }
            
        }
        
    }
    return false;
}

void SENHA::verifica(int _senha)
{
    string senha = to_string(_senha);
    if (senha.length() != 5)
    {
        throw invalid_argument("Argumento invalido");
    }
    else if (senhatest(senha))
    {
        throw invalid_argument("Argumento invalido");
    }

    {
    }
}
