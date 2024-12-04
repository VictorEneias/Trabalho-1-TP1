#ifndef ENTIDADE_H_INCLUDED
#define ENTIDADE_H_INCLUDED

#include "dominio.h"

using namespace std;
/**
 * @brief Representa uma conta de usuário.
 */
class CONTA
{
private:
    CODIGO codigo; /**< Código da conta. */
    SENHA senha;   /**< Senha da conta. */
public:
    /**
     * @brief Define o código da conta.
     * @param _codigo Objeto CODIGO representando o código.
     */
    void SetCodigo(const CODIGO &);
    /**
     * @brief Define a senha da conta.
     * @param _senha Objeto SENHA representando a senha.
     */
    void SetSenha(const SENHA &);
    /**
     * @brief Obtém o código da conta.
     * @return Objeto CODIGO representando o código da conta.
     */
    CODIGO GetCodigo() const;
    /**
     * @brief Obtém a senha da conta.
     * @return Objeto SENHA representando a senha da conta.
     */
    SENHA GetSenha() const;
};

inline void CONTA::SetCodigo(const CODIGO &_codigo) { codigo = _codigo; }
inline void CONTA::SetSenha(const SENHA &_senha) { senha = _senha; }
inline CODIGO CONTA::GetCodigo() const { return codigo; }
inline SENHA CONTA::GetSenha() const { return senha; }
/**
 * @brief Representa uma viagem.
 */
class VIAGEM
{
private:
    CODIGO codigo;       /**< Código da viagem. */
    NOME nome;           /**< Nome da viagem. */
    AVALIACAO avaliacao; /**< Avaliação da viagem. */
public:
    /**
     * @brief Define o código da viagem.
     * @param _codigo Objeto CODIGO representando o código.
     */
    void SetCodigo(const CODIGO& _codigo);

    /**
     * @brief Define o nome da viagem.
     * @param _nome Objeto NOME representando o nome.
     */
    void SetNome(const NOME& _nome);

    /**
     * @brief Define a avaliação da viagem.
     * @param _avaliacao Objeto AVALIACAO representando a avaliação.
     */
    void SetAvaliacao(const AVALIACAO& _avaliacao);

    /**
     * @brief Obtém o código da viagem.
     * @return Objeto CODIGO representando o código da viagem.
     */
    CODIGO GetCodigo() const;

    /**
     * @brief Obtém o nome da viagem.
     * @return Objeto NOME representando o nome da viagem.
     */
    NOME GetNome() const;

    /**
     * @brief Obtém a avaliação da viagem.
     * @return Objeto AVALIACAO representando a avaliação da viagem.
     */
    AVALIACAO GetAvaliacao() const;
};
inline void VIAGEM::SetCodigo(const CODIGO &_codigo) { codigo = _codigo; }
inline void VIAGEM::SetNome(const NOME &_nome) { nome = _nome; }
inline void VIAGEM::SetAvaliacao(const AVALIACAO &_avaliacao) { avaliacao = _avaliacao; }
inline CODIGO VIAGEM::GetCodigo() const { return codigo; }
inline NOME VIAGEM::GetNome() const { return nome; }
inline AVALIACAO VIAGEM::GetAvaliacao() const { return avaliacao; }

/**
 * @brief Representa uma atividade de viagem.
 */
class ATIVIDADE {
private:
    CODIGO codigo;      /**< Código da atividade. */
    NOME nome;          /**< Nome da atividade. */
    DATA data;          /**< Data da atividade. */
    HORARIO horario;    /**< Horário da atividade. */
    DURACAO duracao;    /**< Duração da atividade. */
    DINHEIRO preco;     /**< Preço da atividade. */
    AVALIACAO avaliacao; /**< Avaliação da atividade. */
public:
    /**
     * @brief Define o código da atividade.
     * @param _codigo Objeto CODIGO representando o código.
     */
    void SetCodigo(const CODIGO& _codigo);

    /**
     * @brief Define o nome da atividade.
     * @param _nome Objeto NOME representando o nome.
     */
    void SetNome(const NOME& _nome);

    /**
     * @brief Define a data da atividade.
     * @param _data Objeto DATA representando a data.
     */
    void SetData(const DATA& _data);

    /**
     * @brief Define o horário da atividade.
     * @param _horario Objeto HORARIO representando o horário.
     */
    void SetHorario(const HORARIO& _horario);

    /**
     * @brief Define a duração da atividade.
     * @param _duracao Objeto DURACAO representando a duração.
     */
    void SetDuracao(const DURACAO& _duracao);

    /**
     * @brief Define o preço da atividade.
     * @param _preco Objeto DINHEIRO representando o preço.
     */
    void SetPreco(const DINHEIRO& _preco);

    /**
     * @brief Define a avaliação da atividade.
     * @param _avaliacao Objeto AVALIACAO representando a avaliação.
     */
    void SetAvaliacao(const AVALIACAO& _avaliacao);

    /**
     * @brief Obtém o código da atividade.
     * @return Objeto CODIGO representando o código da atividade.
     */
    CODIGO GetCodigo() const;

    /**
     * @brief Obtém o nome da atividade.
     * @return Objeto NOME representando o nome da atividade.
     */
    NOME GetNome() const;

    /**
     * @brief Obtém a data da atividade.
     * @return Objeto DATA representando a data da atividade.
     */
    DATA GetData() const;

    /**
     * @brief Obtém o horário da atividade.
     * @return Objeto HORARIO representando o horário da atividade.
     */
    HORARIO GetHorario() const;

    /**
     * @brief Obtém a duração da atividade.
     * @return Objeto DURACAO representando a duração da atividade.
     */
    DURACAO GetDuracao() const;

    /**
     * @brief Obtém o preço da atividade.
     * @return Objeto DINHEIRO representando o preço da atividade.
     */
    DINHEIRO GetPreco() const;

    /**
     * @brief Obtém a avaliação da atividade.
     * @return Objeto AVALIACAO representando a avaliação da atividade.
     */
    AVALIACAO GetAvaliacao() const;
};

inline void ATIVIDADE::SetCodigo(const CODIGO &_codigo) { codigo = _codigo; }
inline void ATIVIDADE::SetNome(const NOME &_nome) { nome = _nome; }
inline void ATIVIDADE::SetData(const DATA &_data) { data = _data; }
inline void ATIVIDADE::SetHorario(const HORARIO &_horario) { horario = _horario; }
inline void ATIVIDADE::SetDuracao(const DURACAO &_duracao) { duracao = _duracao; }
inline void ATIVIDADE::SetPreco(const DINHEIRO &_preco) { preco = _preco; }
inline void ATIVIDADE::SetAvaliacao(const AVALIACAO &_avaliacao) { avaliacao = _avaliacao; }
inline CODIGO ATIVIDADE::GetCodigo() const { return codigo; }
inline NOME ATIVIDADE::GetNome() const { return nome; }
inline DATA ATIVIDADE::GetData() const { return data; }
inline HORARIO ATIVIDADE::GetHorario() const { return horario; }
inline DURACAO ATIVIDADE::GetDuracao() const { return duracao; }
inline DINHEIRO ATIVIDADE::GetPreco() const { return preco; }
inline AVALIACAO ATIVIDADE::GetAvaliacao() const { return avaliacao; }

/**
 * @brief Representa um destino de viagem.
 */
class DESTINO {
private:
    CODIGO codigo;      /**< Código do destino. */
    NOME nome;          /**< Nome do destino. */
    DATA data_fim;      /**< Data de término da viagem ao destino. */
    DATA data_inicio;   /**< Data de início da viagem ao destino. */
    AVALIACAO avaliacao; /**< Avaliação do destino. */
public:
    /**
     * @brief Define o código do destino.
     * @param _codigo Objeto CODIGO representando o código.
     */
    void SetCodigo(const CODIGO& _codigo);

    /**
     * @brief Define o nome do destino.
     * @param _nome Objeto NOME representando o nome.
     */
    void SetNome(const NOME& _nome);

    /**
     * @brief Define a data de início da viagem ao destino.
     * @param _data_inicio Objeto DATA representando a data de início.
     */
    void SetDataInicio(const DATA& _data_inicio);

    /**
     * @brief Define a data de término da viagem ao destino.
     * @param _data_fim Objeto DATA representando a data de término.
     */
    void SetDataFim(const DATA& _data_fim);

    /**
     * @brief Define a avaliação do destino.
     * @param _avaliacao Objeto AVALIACAO representando a avaliação.
     */
    void SetAvaliacao(const AVALIACAO& _avaliacao);

    /**
     * @brief Obtém o código do destino.
     * @return Objeto CODIGO representando o código do destino.
     */
    CODIGO GetCodigo() const;

    /**
     * @brief Obtém o nome do destino.
     * @return Objeto NOME representando o nome do destino.
     */
    NOME GetNome() const;

    /**
     * @brief Obtém a data de início da viagem ao destino.
     * @return Objeto DATA representando a data de início.
     */
    DATA GetDataInicio() const;

    /**
     * @brief Obtém a data de término da viagem ao destino.
     * @return Objeto DATA representando a data de término.
     */
    DATA GetDataFim() const;

    /**
     * @brief Obtém a avaliação do destino.
     * @return Objeto AVALIACAO representando a avaliação do destino.
     */
    AVALIACAO GetAvaliacao() const;
};

inline void DESTINO::SetCodigo(const CODIGO &_codigo) { codigo = _codigo; }
inline void DESTINO::SetNome(const NOME &_nome) { nome = _nome; }
inline void DESTINO::SetAvaliacao(const AVALIACAO &_avaliacao) { avaliacao = _avaliacao; }
inline void DESTINO::SetDataInicio(const DATA &_data_inicio) { data_inicio = _data_inicio; }
inline void DESTINO::SetDataFim(const DATA &_data_fim) { data_fim = _data_fim; }
inline CODIGO DESTINO::GetCodigo() const { return codigo; }
inline NOME DESTINO::GetNome() const { return nome; }
inline AVALIACAO DESTINO::GetAvaliacao() const { return avaliacao; }
inline DATA DESTINO::GetDataFim() const { return data_fim; }
inline DATA DESTINO::GetDataInicio() const { return data_inicio; }

/**
 * @brief Representa uma hospedagem.
 */
class HOSPEDAGEM {
private:
    CODIGO codigo;      /**< Código da hospedagem. */
    NOME nome;          /**< Nome da hospedagem. */
    AVALIACAO avaliacao; /**< Avaliação da hospedagem. */
    DINHEIRO diaria;    /**< Valor da diária. */
public:
    /**
     * @brief Define o código da hospedagem.
     * @param _codigo Objeto CODIGO representando o código.
     */
    void SetCodigo(const CODIGO& _codigo);

    /**
     * @brief Define o nome da hospedagem.
     * @param _nome Objeto NOME representando o nome.
     */
    void SetNome(const NOME& _nome);

    /**
     * @brief Define a avaliação da hospedagem.
     * @param _avaliacao Objeto AVALIACAO representando a avaliação.
     */
    void SetAvaliacao(const AVALIACAO& _avaliacao);

    /**
     * @brief Define o valor da diária.
     * @param _diaria Objeto DINHEIRO representando o valor da diária.
     */
    void SetDiaria(const DINHEIRO& _diaria);

    /**
     * @brief Obtém o código da hospedagem.
     * @return Objeto CODIGO representando o código da hospedagem.
     */
    CODIGO GetCodigo() const;

    /**
     * @brief Obtém o nome da hospedagem.
     * @return Objeto NOME representando o nome da hospedagem.
     */
    NOME GetNome() const;

    /**
     * @brief Obtém a avaliação da hospedagem.
     * @return Objeto AVALIACAO representando a avaliação da hospedagem.
     */
    AVALIACAO GetAvaliacao() const;

    /**
     * @brief Obtém o valor da diária.
     * @return Objeto DINHEIRO representando o valor da diária.
     */
    DINHEIRO GetDiaria() const;
};
inline void HOSPEDAGEM::SetCodigo(const CODIGO &_codigo) { codigo = _codigo; }
inline void HOSPEDAGEM::SetNome(const NOME &_nome) { nome = _nome; }
inline void HOSPEDAGEM::SetAvaliacao(const AVALIACAO &_avaliacao) { avaliacao = _avaliacao; }
inline void HOSPEDAGEM::SetDiaria(const DINHEIRO &_diaria) { diaria = _diaria; }
inline CODIGO HOSPEDAGEM::GetCodigo() const { return codigo; }
inline NOME HOSPEDAGEM::GetNome() const { return nome; }
inline AVALIACAO HOSPEDAGEM::GetAvaliacao() const { return avaliacao; }
inline DINHEIRO HOSPEDAGEM::GetDiaria() const { return diaria; }
#endif