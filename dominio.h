#ifndef DOMINIO_H_INCLUDED
#define DOMINIO_H_INCLUDED

#include <stdexcept>
#include <algorithm>

using namespace std;

/**
 * @brief Classe responsável por representar uma avaliação.
 */
class AVALIACAO {
private:
    int avaliacao; /**< Valor da avaliação (0 a 5). */
    void verifica(int); /**< Verifica se a avaliação está no intervalo válido. */

public:
    /**
     * @brief Obtém o valor da avaliação.
     * @return Valor da avaliação.
     */
    int GetAvaliacao();

    /**
     * @brief Define o valor da avaliação.
     * @param avaliacao Valor a ser definido (0 a 5).
     */
    void SetAvaliacao(int);
};

/**
 * @brief Classe responsável por representar um código.
 */
class CODIGO {
private:
    string codigo; /**< Código alfanumérico de 6 caracteres. */
    void verifica(string); /**< Verifica se o código é válido. */

public:
    /**
     * @brief Obtém o código.
     * @return Código alfanumérico.
     */
    string GetCodigo();

    /**
     * @brief Define o código.
     * @param codigo Código alfanumérico de 6 caracteres.
     */
    void SetCodigo(string);
};

/**
 * @brief Classe responsável por representar uma data.
 */
class DATA {
private:
    string data; /**< Data no formato DD-MM-AA. */
    void verifica(string); /**< Verifica se a data é válida. */

public:
    /**
     * @brief Obtém a data.
     * @return Data no formato DD-MM-AA.
     */
    string GetData();

    /**
     * @brief Define a data.
     * @param data Data no formato DD-MM-AA.
     */
    void SetData(string);
};

/**
 * @brief Classe responsável por representar um valor monetário.
 */
class DINHEIRO {
private:
    float dinheiro; /**< Valor monetário (0 a 200000). */
    void verifica(float); /**< Verifica se o valor é válido. */

public:
    /**
     * @brief Obtém o valor monetário.
     * @return Valor monetário.
     */
    float GetDinheiro();

    /**
     * @brief Define o valor monetário.
     * @param dinheiro Valor monetário (0 a 200000).
     */
    void SetDinheiro(float);
};

/**
 * @brief Classe responsável por representar a duração em minutos.
 */
class DURACAO {
private:
    int duracao; /**< Duração em minutos (0 a 360). */
    void verifica(int); /**< Verifica se a duração é válida. */

public:
    /**
     * @brief Obtém a duração.
     * @return Duração em minutos.
     */
    int GetDuracao();

    /**
     * @brief Define a duração.
     * @param duracao Duração em minutos (0 a 360).
     */
    void SetDuracao(int);
};

/**
 * @brief Classe responsável por representar um horário.
 */
class HORARIO {
private:
    string horario; /**< Horário no formato HH:MM. */
    void verifica(string); /**< Verifica se o horário é válido. */

public:
    /**
     * @brief Obtém o horário.
     * @return Horário no formato HH:MM.
     */
    string GetHorario();

    /**
     * @brief Define o horário.
     * @param horario Horário no formato HH:MM.
     */
    void SetHorario(string);
};

/**
 * @brief Classe responsável por representar um nome.
 */
class NOME {
private:
    string nome; /**< Nome com até 30 caracteres. */
    void verifica(string); /**< Verifica se o nome é válido. */

public:
    /**
     * @brief Obtém o nome.
     * @return Nome com até 30 caracteres.
     */
    string GetNome();

    /**
     * @brief Define o nome.
     * @param nome Nome com até 30 caracteres.
     */
    void SetNome(string);
};

/**
 * @brief Classe responsável por representar uma senha.
 */
class SENHA {
private:
    int senha; /**< Senha numérica de 5 dígitos. */
    void verifica(int); /**< Verifica se a senha é válida. */

public:
    /**
     * @brief Obtém a senha.
     * @return Senha numérica de 5 dígitos.
     */
    int GetSenha();

    /**
     * @brief Define a senha.
     * @param senha Senha numérica de 5 dígitos.
     */
    void SetSenha(int);
};

//--------------------------------------------------------------------------------------------------------------

inline void AVALIACAO::SetAvaliacao(int avaliacao) {
    verifica(avaliacao);
    this->avaliacao = avaliacao;
}

inline int AVALIACAO::GetAvaliacao() {
    return avaliacao;
}

inline void CODIGO::SetCodigo(string codigo) {
    verifica(codigo);
    this->codigo = codigo;
}

inline string CODIGO::GetCodigo() {
    return codigo;
}

inline void DATA::SetData(string data) {
    verifica(data);
    this->data = data;
}

inline string DATA::GetData() {
    return data;
}

inline void DINHEIRO::SetDinheiro(float dinheiro) {
    verifica(dinheiro);
    this->dinheiro = dinheiro;
}

inline float DINHEIRO::GetDinheiro() {
    return dinheiro;
}

inline void DURACAO::SetDuracao(int duracao) {
    verifica(duracao);
    this->duracao = duracao;
}

inline int DURACAO::GetDuracao() {
    return duracao;
}

inline void HORARIO::SetHorario(string horario) {
    verifica(horario);
    this->horario = horario;
}

inline string HORARIO::GetHorario() {
    return horario;
}

inline void NOME::SetNome(string nome) {
    verifica(nome);
    this->nome = nome;
}

inline string NOME::GetNome() {
    return nome;
}

inline void SENHA::SetSenha(int senha) {
    verifica(senha);
    this->senha = senha;
}

inline int SENHA::GetSenha() {
    return senha;
}

#endif
