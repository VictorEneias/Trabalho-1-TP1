#ifndef DOMINIO_H_INCLUDED
#define DOMINIO_H_INCLUDED

#include <stdexcept>
#include <algorithm>

using namespace std;

class AVALIACAO
{
private:
    int avaliacao;
    void verifica(int);

public:
    int GetAvaliacao();

    void SetAvaliacao(int);
};

class CODIGO
{
private:
    string codigo;
    void verifica(string);

public:
    string GetCodigo();

    void SetCodigo(string);
};

class DATA
{
private:
    string data;
    void verifica(string);

public:
    string GetData();

    void SetData(string);
};

class DINHEIRO
{
private:
    float dinheiro;
    void verifica(float);
public:
    float GetDinheiro();
    void SetDinheiro(float);
};

class DURACAO
{
private:
    int duracao;
    void verifica(int);

public:
    int GetDuracao();

    void SetDuracao(int);
};

class HORARIO
{
private:
    string horario;
    void verifica(string);
public:
    string GetHorario();
    void SetHorario(string);
};

class NOME
{
private:
    string nome;
    void verifica(string);

public:
    string GetNome();

    void SetNome(string);
};

class SENHA
{
private:
    int senha;
    void verifica(int);

public:
    int GetSenha();

    void SetSenha(int);
};

//--------------------------------------------------------------------------------------------------------------

inline void AVALIACAO::SetAvaliacao(int avaliacao)
{
    verifica(avaliacao);
    this->avaliacao = avaliacao;
}

inline int AVALIACAO::GetAvaliacao()
{
    return avaliacao;
}

inline void CODIGO::SetCodigo(string codigo)
{
    verifica(codigo);
    this->codigo = codigo;
}

inline string CODIGO::GetCodigo()
{
    return codigo;
}

inline void DATA::SetData(string data)
{
    verifica(data);
    this->data = data;
}

inline string DATA::GetData()
{
    return data;
}

inline void DINHEIRO::SetDinheiro(float dinheiro)
{
    verifica(dinheiro);
    this->dinheiro = dinheiro;
}

inline float DINHEIRO::GetDinheiro()
{
    return dinheiro;
}

inline void DURACAO::SetDuracao(int duracao)
{
    verifica(duracao);
    this->duracao = duracao;
}

inline int DURACAO::GetDuracao()
{
    return duracao;
}

inline void HORARIO::SetHorario(string horario)
{
    verifica(horario);
    this->horario = horario;
}

inline string HORARIO::GetHorario()
{
    return horario;
}

inline void NOME::SetNome(string nome)
{
    verifica(nome);
    this->nome = nome;
}

inline string NOME::GetNome()
{
    return nome;
}

inline void SENHA::SetSenha(int senha)
{
    verifica(senha);
    this->senha = senha;
}

inline int SENHA::GetSenha()
{
    return senha;
}

#endif