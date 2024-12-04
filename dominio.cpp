#include "dominio.h"
#include <iostream>

using namespace std;

/**
 * @brief Verifica a validade de uma avaliação.
 * @param avaliacao Valor da avaliação (deve estar entre 0 e 5).
 * @throw invalid_argument Se a avaliação estiver fora do intervalo permitido.
 */
void AVALIACAO::verifica(int avaliacao) {
    if (avaliacao < 0 || avaliacao > 5) {
        throw invalid_argument("Avaliação inválida: valor fora do intervalo permitido (0-5)");
    }
}

/**
 * @brief Verifica a validade de um código.
 * @param codigo Código a ser validado (deve conter 6 caracteres alfanuméricos).
 * @throw invalid_argument Se o código não atender aos critérios.
 */
void CODIGO::verifica(string codigo) {
    if (codigo.length() != 6) {
        throw invalid_argument("Argumento inválido");
    }
    for (char c : codigo) {
        if (!isdigit(c) && !isalpha(c)) {
            throw invalid_argument("Argumento inválido");
        }
    }
}

/**
 * @brief Verifica a validade de uma data.
 * @param data Data no formato "DD-MM-AA".
 * @throw invalid_argument Se a data estiver em formato incorreto ou inválida.
 */
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

/**
 * @brief Verifica a validade de um valor em dinheiro.
 * @param dinheiro Valor em dinheiro (deve estar entre 0 e 200000).
 * @throw invalid_argument Se o valor estiver fora do intervalo permitido.
 */
void DINHEIRO::verifica(float dinheiro) {
    if (dinheiro < 0 || dinheiro > 200000) {
        throw invalid_argument("Argumento inválido");
    }
}

/**
 * @brief Verifica a validade de uma duração.
 * @param duracao Duração em minutos (deve estar entre 0 e 360).
 * @throw invalid_argument Se a duração estiver fora do intervalo permitido.
 */
void DURACAO::verifica(int duracao) {
    if (duracao < 0 || duracao > 360) {
        throw invalid_argument("Argumento inválido");
    }
}

/**
 * @brief Verifica a validade de um nome.
 * @param nome Nome a ser validado (deve ter no máximo 30 caracteres).
 * @throw invalid_argument Se o nome exceder o limite permitido.
 */
void NOME::verifica(string nome) {
    if (nome.length() > 30) {
        throw invalid_argument("Argumento inválido");
    }
}

/**
 * @brief Verifica a validade de um horário.
 * @param horario Horário no formato "HH:MM".
 * @throw invalid_argument Se o horário estiver em formato incorreto ou inválido.
 */
void HORARIO::verifica(string horario) {
    if (horario.length() != 5 || horario[2] != ':' ||
        !isdigit(horario[0]) || !isdigit(horario[1]) ||
        !isdigit(horario[3]) || !isdigit(horario[4])) {
        throw invalid_argument("Argumento inválido");
    }
    int hora = (horario[0] - '0') * 10 + (horario[1] - '0');
    int min = (horario[3] - '0') * 10 + (horario[4] - '0');
    if (hora < 0 || hora > 23 || min < 0 || min > 59) {
        throw invalid_argument("Argumento inválido");
    }
}

/**
 * @brief Testa se uma senha atende aos critérios de segurança.
 * @param senha Senha a ser testada.
 * @return true Se a senha for inválida.
 * @return false Se a senha for válida.
 */
bool senhatest(string senha) {
    if (senha.length() != 5) return true;

    int array[5];
    for (int i = 0; i < 5; i++) {
        if (!isdigit(senha[i])) return true;
        array[i] = senha[i] - '0';
    }

    bool ascending = true, descending = true;
    for (int i = 1; i < 5; i++) {
        if (array[i] != array[i - 1] + 1) ascending = false;
        if (array[i] != array[i - 1] - 1) descending = false;
    }
    if (ascending || descending) return true;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (array[i] == array[j]) return true;
        }
    }

    return false;
}

/**
 * @brief Verifica a validade de uma senha.
 * @param _senha Senha numérica com 5 dígitos.
 * @throw invalid_argument Se a senha não atender aos critérios.
 */
void SENHA::verifica(int _senha) {
    string senha = to_string(_senha);
    if (senha.length() != 5 || senhatest(senha)) {
        throw invalid_argument("Argumento inválido");
    }
}
