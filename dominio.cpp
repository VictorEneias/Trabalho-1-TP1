#include "dominio.h"

using namespace std;

void AVALIACAO::verifica(int avaliacao)
{
    if (avaliacao > 6 & avaliacao < 0)
    {
    }
    else
    {
        throw invalid_argument("Argumento invalido");
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
            // sugestao de adicionar codigo de erro exemplo
            //  Argumento invalido cod:500 invalid char ou Argumento invalido: invalid char
            throw invalid_argument("Argumento invalido");
        }
    }
}
void DATA::verifica(string data)
{
    if (data.length() == 10) // 00/00/00
    {
        if (isdigit(data[0]) && isdigit(data[1]) && isdigit(data[3]) && isdigit(data[4]) && isdigit(data[6]) && isdigit(data[7]))
        {

            int day = (int(data[0] * 10)) + (int(data[1]));
            int month = (int(data[3] * 10)) + (int(data[4]));
            int ano = (int(data[6] * 10)) + (int(data[7]));
            if (ano < 0)
            {
                throw invalid_argument("Argumento invalido");
            }
            else if (month < 1 || month > 12)
            {
                throw invalid_argument("Argumento invalido");
            }
            else if (day < 1 ||
                     /*dias de mes 30*/ (day > 30 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)) ||
                     /*dias de mes 31*/ (day > 31 && (month == 4 || month == 6 || month == 9 || month == 11)) ||
                     /*mes 29 e ano bissextos*/ (day > 29 && month == 2 && (ano % 4 == 0)) ||
                     /*mes 28 e ano  nao bissextos*/ (day > 28 && month == 2) && (ano % 4 != 0))
            {

                throw invalid_argument("Argumento invalido");
            }
        }
        else
        {
            throw invalid_argument("Argumento invalido");
        }
    }
    else
    {
        throw invalid_argument("Argumento invalido");
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
        throw invalid_argument("Argumento invalido");
    }
    else if (isdigit(horario[0]) != true || isdigit(horario[1]) != true ||
             isdigit(horario[3]) != true || isdigit(horario[4]) != true)
    {
        throw invalid_argument("Argumento invalido");
    }
    else
    {
        int hora = 10 * int(horario[0]) + int(horario[1]);
        int min = 10 * int(horario[3]) + int(horario[4]);
        if (hora <= 0 || hora > 23 || min <= 0 || min > 59)
        {
            throw invalid_argument("Argumento invalido");
        }
    }
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
bool senhatest(string senha)
{
    if (senha.length() != 5){ // Check if senha has at least 5 characters
        return true;
    }
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        if (isdigit(senha[i]))
        {
            array[i] = senha[i] - '0'; // Convert char to int
        }
        else
        {
            return true; // Return false if a non-digit is found
        }
    }

    // Check if the digits form an increasing or decreasing sequence
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