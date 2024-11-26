#ifndef TESTE_H_INCLUDED
#define TESTE_H_INCLUDED

#include "dominio.h"
#include "entidade.h"

using namespace std;

class TUAVALIACAO {
private:
    const int AVALIACAO_VALIDA   = 4; /**< Constante que representa um código válido para o teste. */
    const int AVALIACAO_INVALIDA = 7.6; /**< Constante que representa um código inválido para o teste. */
    AVALIACAO *avaliacao;
    int estado; /**< Variável que armazena o estado do teste. */
    /**
    * Métodos privados
    */
    void SetUp(); /**< Método para configurar o ambiente de teste. */
    void TearDown();  /**< Método para limpar o ambiente de teste. */
    void TestarCenarioSucesso(); /**< Método para testar o cenário de sucesso. */
    void TestarCenarioFalha(); /**< Método para testar o cenário de falha. */  

public:
    const static int SUCESSO =  0;  /**< Constante que representa o estado de sucesso do teste. */
    const static int FALHA = -1; /**< Constante que representa o estado de falha do teste. */
    /**< Metodo publico */
    int Run(); /**< Método para executar os testes de unidade. */
};

class TUCODIGO {
private:
    const string CODIGO_VALIDO   = "AbC123"; /**< Constante que representa um código válido para o teste. */
    const string CODIGO_INVALIDO = "AB-12"; /**< Constante que representa um código inválido para o teste. */
    CODIGO *codigo;
    int estado; /**< Variável que armazena o estado do teste. */
    /**
    * Métodos privados
    */
    void SetUp(); /**< Método para configurar o ambiente de teste. */
    void TearDown();  /**< Método para limpar o ambiente de teste. */
    void TestarCenarioSucesso(); /**< Método para testar o cenário de sucesso. */
    void TestarCenarioFalha(); /**< Método para testar o cenário de falha. */  

public:
    const static int SUCESSO =  0;  /**< Constante que representa o estado de sucesso do teste. */
    const static int FALHA = -1; /**< Constante que representa o estado de falha do teste. */
    /**< Metodo publico */
    int Run(); /**< Método para executar os testes de unidade. */
};

class TUDATA {
private:
    const string DATA_VALIDA   = "05-09-03"; /**< Constante que representa um código válido para o teste. */
    const string DATA_INVALIDA = "31-31-31"; /**< Constante que representa um código inválido para o teste. */
    DATA *data;
    int estado; /**< Variável que armazena o estado do teste. */
    /**
    * Métodos privados
    */
    void SetUp(); /**< Método para configurar o ambiente de teste. */
    void TearDown();  /**< Método para limpar o ambiente de teste. */
    void TestarCenarioSucesso(); /**< Método para testar o cenário de sucesso. */
    void TestarCenarioFalha(); /**< Método para testar o cenário de falha. */  

public:
    const static int SUCESSO =  0;  /**< Constante que representa o estado de sucesso do teste. */
    const static int FALHA = -1; /**< Constante que representa o estado de falha do teste. */
    /**< Metodo publico */
    int Run(); /**< Método para executar os testes de unidade. */
};

class TUDINHEIRO {
private:
    const float DINHEIRO_VALIDO   = 420.69; /**< Constante que representa um código válido para o teste. */
    const float DINHEIRO_INVALIDO = 234234234; /**< Constante que representa um código inválido para o teste. */
    DINHEIRO *dinheiro;
    int estado; /**< Variável que armazena o estado do teste. */
    /**
    * Métodos privados
    */
    void SetUp(); /**< Método para configurar o ambiente de teste. */
    void TearDown();  /**< Método para limpar o ambiente de teste. */
    void TestarCenarioSucesso(); /**< Método para testar o cenário de sucesso. */
    void TestarCenarioFalha(); /**< Método para testar o cenário de falha. */  

public:
    const static int SUCESSO =  0;  /**< Constante que representa o estado de sucesso do teste. */
    const static int FALHA = -1; /**< Constante que representa o estado de falha do teste. */
    /**< Metodo publico */
    int Run(); /**< Método para executar os testes de unidade. */
};

class TUDURACAO {
private:
    const int DURACAO_VALIDA   = 6; /**< Constante que representa um código válido para o teste. */
    const int DURACAO_INVALIDA = 361; /**< Constante que representa um código inválido para o teste. */
    DURACAO *duracao;
    int estado; /**< Variável que armazena o estado do teste. */
    /**
    * Métodos privados
    */
    void SetUp(); /**< Método para configurar o ambiente de teste. */
    void TearDown();  /**< Método para limpar o ambiente de teste. */
    void TestarCenarioSucesso(); /**< Método para testar o cenário de sucesso. */
    void TestarCenarioFalha(); /**< Método para testar o cenário de falha. */  

public:
    const static int SUCESSO =  0;  /**< Constante que representa o estado de sucesso do teste. */
    const static int FALHA = -1; /**< Constante que representa o estado de falha do teste. */
    /**< Metodo publico */
    int Run(); /**< Método para executar os testes de unidade. */
};

class TUHORARIO {
private:
    const string HORARIO_VALIDO   = "19:11"; /**< Constante que representa um código válido para o teste. */
    const string HORARIO_INVALIDO = "24:01"; /**< Constante que representa um código inválido para o teste. */
    HORARIO *horario;
    int estado; /**< Variável que armazena o estado do teste. */
    /**
    * Métodos privados
    */
    void SetUp(); /**< Método para configurar o ambiente de teste. */
    void TearDown();  /**< Método para limpar o ambiente de teste. */
    void TestarCenarioSucesso(); /**< Método para testar o cenário de sucesso. */
    void TestarCenarioFalha(); /**< Método para testar o cenário de falha. */  

public:
    const static int SUCESSO =  0;  /**< Constante que representa o estado de sucesso do teste. */
    const static int FALHA = -1; /**< Constante que representa o estado de falha do teste. */
    /**< Metodo publico */
    int Run(); /**< Método para executar os testes de unidade. */
};

class TUNOME {
private:
    const string NOME_VALIDO   = "Victor Eneias"; /**< Constante que representa um código válido para o teste. */
    const string NOME_INVALIDO = "Joao Pedro de Souza Lopes Silva"; /**< Constante que representa um código inválido para o teste. */
    NOME *nome;
    int estado; /**< Variável que armazena o estado do teste. */
    /**
    * Métodos privados
    */
    void SetUp(); /**< Método para configurar o ambiente de teste. */
    void TearDown();  /**< Método para limpar o ambiente de teste. */
    void TestarCenarioSucesso(); /**< Método para testar o cenário de sucesso. */
    void TestarCenarioFalha(); /**< Método para testar o cenário de falha. */  

public:
    const static int SUCESSO =  0;  /**< Constante que representa o estado de sucesso do teste. */
    const static int FALHA = -1; /**< Constante que representa o estado de falha do teste. */
    /**< Metodo publico */
    int Run(); /**< Método para executar os testes de unidade. */
};

class TUSENHA {
private:
    const int SENHA_VALIDA   = 12386; /**< Constante que representa um código válido para o teste. */
    const int SENHA_INVALIDA = 12344; /**< Constante que representa um código inválido para o teste. */
    SENHA *senha;
    int estado; /**< Variável que armazena o estado do teste. */
    /**
    * Métodos privados
    */
    void SetUp(); /**< Método para configurar o ambiente de teste. */
    void TearDown();  /**< Método para limpar o ambiente de teste. */
    void TestarCenarioSucesso(); /**< Método para testar o cenário de sucesso. */
    void TestarCenarioFalha(); /**< Método para testar o cenário de falha. */  

public:
    const static int SUCESSO =  0;  /**< Constante que representa o estado de sucesso do teste. */
    const static int FALHA = -1; /**< Constante que representa o estado de falha do teste. */
    /**< Metodo publico */
    int Run(); /**< Método para executar os testes de unidade. */
};

#endif