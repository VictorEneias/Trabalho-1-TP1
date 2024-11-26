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
inline void   CONTA::SetCodigo(const CODIGO& _codigo) { codigo = _codigo; }
inline void   CONTA::SetSenha(const SENHA& _senha) { senha = _senha; }
inline CODIGO CONTA::GetCodigo() const { return codigo; }
inline SENHA  CONTA::GetSenha() const { return senha;}

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
inline void      VIAGEM::SetCodigo(const CODIGO& _codigo) { codigo = _codigo; }
inline void      VIAGEM::SetNome(const NOME& _nome) { nome = _nome; }
inline void      VIAGEM::SetAvaliacao(const AVALIACAO& _avaliacao) { avaliacao = _avaliacao; }
inline CODIGO    VIAGEM::GetCodigo() const { return codigo; }
inline NOME      VIAGEM::GetNome() const { return nome; }
inline AVALIACAO VIAGEM::GetAvaliacao() const { return avaliacao; }

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
inline void      ATIVIDADE::SetCodigo(const CODIGO& _codigo) { codigo = _codigo; }
inline void      ATIVIDADE::SetNome(const NOME& _nome) { nome = _nome; }
inline void      ATIVIDADE::SetData(const DATA& _data) { data = _data; }
inline void      ATIVIDADE::SetHorario(const HORARIO& _horario) { horario = _horario; }
inline void      ATIVIDADE::SetDuracao(const DURACAO& _duracao) { duracao = _duracao; }
inline void      ATIVIDADE::SetPreco(const DINHEIRO& _preco) { preco = _preco; }
inline void      ATIVIDADE::SetAvaliacao(const AVALIACAO& _avaliacao) { avaliacao = _avaliacao; }
inline CODIGO    ATIVIDADE::GetCodigo() const { return codigo; }
inline NOME      ATIVIDADE::GetNome() const { return nome; }
inline DATA      ATIVIDADE::GetData() const { return data; }
inline HORARIO   ATIVIDADE::GetHorario() const { return horario; }
inline DURACAO   ATIVIDADE::GetDuracao() const { return duracao; }
inline DINHEIRO  ATIVIDADE::GetPreco() const { return preco; }
inline AVALIACAO ATIVIDADE::GetAvaliacao() const { return avaliacao; }


class DESTINO{
    private:
        CODIGO codigo;
        NOME nome;
        DATA data_fim;
        DATA data_inicio;
        AVALIACAO avaliacao;
    public:
        void SetCodigo(const CODIGO&);
        void SetNome(const NOME&);
        void SetDataFim(const DATA&);
        void SetDataInicio(const DATA&);
        void SetAvaliacao(const AVALIACAO&);
        CODIGO GetCodigo() const;
        NOME GetNome() const;
        DATA GetDataInicio() const;
        DATA GetDataFim() const;
        AVALIACAO GetAvaliacao() const;
};
inline void      DESTINO::SetCodigo(const CODIGO& _codigo) { codigo = _codigo; }
inline void      DESTINO::SetNome(const NOME& _nome) { nome = _nome; }
inline void      DESTINO::SetAvaliacao(const AVALIACAO& _avaliacao) { avaliacao = _avaliacao; }
inline void      DESTINO::SetDataInicio(const DATA& _data_inicio){data_inicio=_data_inicio;}
inline void      DESTINO::SetDataFim(const DATA& _data_fim){data_fim=_data_fim;}
inline CODIGO    DESTINO::GetCodigo() const { return codigo; }
inline NOME      DESTINO::GetNome() const { return nome; }
inline AVALIACAO DESTINO::GetAvaliacao() const { return avaliacao; }
inline DATA      DESTINO::GetDataFim()const{return data_fim;}
inline DATA      DESTINO::GetDataInicio()const{return data_inicio;}

class HOSPEDAGEM{
    private:
        CODIGO codigo;
        NOME nome;
        AVALIACAO avaliacao;
        DINHEIRO diaria;
    public:
        void SetCodigo(const CODIGO&);
        void SetNome(const NOME&);
        void SetAvaliacao(const AVALIACAO&);
        void SetDiaria(const DINHEIRO&);
        CODIGO GetCodigo() const; 
        NOME GetNome() const;
        AVALIACAO GetAvaliacao() const;
        DINHEIRO GetDiaria()const;
};
inline void      HOSPEDAGEM::SetCodigo(const CODIGO& _codigo) { codigo = _codigo; }
inline void      HOSPEDAGEM::SetNome(const NOME& _nome) { nome = _nome; }
inline void      HOSPEDAGEM::SetAvaliacao(const AVALIACAO& _avaliacao) { avaliacao = _avaliacao; }
inline void      HOSPEDAGEM::SetDiaria(const DINHEIRO& _diaria){diaria=_diaria;}
inline CODIGO    HOSPEDAGEM::GetCodigo() const { return codigo; }
inline NOME      HOSPEDAGEM::GetNome() const { return nome; }
inline AVALIACAO HOSPEDAGEM::GetAvaliacao() const { return avaliacao; }
inline DINHEIRO  HOSPEDAGEM::GetDiaria()const{return diaria;}
#endif
//joao pedro de souza lopes silva