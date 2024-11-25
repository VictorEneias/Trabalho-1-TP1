#ifndef ENTIDADE_H_INCLUDED
#define ENTIDADE_H_INCLUDED

#include "dominio.h"

using namespace std;

class CONTA{
    private:
        CODIGO codigo;
        SENHA senha;
    public:
        void SetCodigo(const CODIGO&);
        void SetSenha(const SENHA&);
        CODIGO GetCodigo() const; 
        SENHA GetSenha() const;
};

class VIAGEM{
    private:
        CODIGO codigo;
        NOME nome;
        AVALIACAO avaliacao;
    public:
        void SetCodigo(const CODIGO&);
        void SetNome(const NOME&);
        void SetAvaliacao(const AVALIACAO&);
        CODIGO GetCodigo() const; 
        NOME GetNome() const;
        AVALIACAO GetAvaliacao() const;
};

class ATIVIDADE{
    private:
        CODIGO codigo;
        NOME nome;
        DATA data;
        HORARIO horario;
        DURACAO duracao;
        DINHEIRO preco;
        AVALIACAO avaliacao;
    public:
        void SetCodigo(const CODIGO&);
        void SetNome(const NOME&);
        void SetData(const DATA&);
        void SetHorario(const HORARIO&);
        void SetDuracao(const DURACAO&);
        void SetPreco(const DINHEIRO&);
        void SetAvaliacao(const AVALIACAO&);
        CODIGO GetCodigo() const;
        NOME GetNome() const;
        DATA GetData() const;
        HORARIO GetHorario() const;
        DURACAO GetDuracao() const;
        DINHEIRO GetPreco() const;
        AVALIACAO GetAvaliacao() const;
};



#endif
