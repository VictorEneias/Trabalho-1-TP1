#include "teste.h"
/**
 * @file teste.cpp
 * @brief Implementação dos testes de unidade para os componentes do sistema.
 * 
 * Este arquivo contém as implementações das classes de teste para as entidades do sistema,
 * como CODIGO, AVALIACAO, DATA, DINHEIRO, DURACAO, CONTA, ATIVIDADE, DESTINO, HOSPEDAGEM,
 * VIAGEM, HORARIO, NOME e SENHA.
 */


/**
 * @brief Configura o ambiente de teste, inicializando os dados necessários.
 */
void TUCODIGO::SetUp() {
    codigo = new CODIGO(); /**< Cria uma nova instância da classe CODIGO. */
    estado = SUCESSO; /**< Inicializa o estado do teste como sucesso. */
}

/**
 * @brief Limpa o ambiente de teste, liberando os recursos utilizados.
 */
void TUCODIGO::TearDown() {
    delete codigo; /**< Libera o recurso alocado para a instância de CODIGO. */
}

/**
 * @brief Testa o cenário de sucesso para a definição e obtenção de um código válido.
 */
void TUCODIGO::TestarCenarioSucesso() { 
    try {
        codigo->SetCodigo(CODIGO_VALIDO); /**< Define um código válido. */
        if (codigo->GetCodigo() != CODIGO_VALIDO) /**< Verifica se o código atribuído é o correto. */
            estado = FALHA; /**< Marca o teste como falho caso contrário. */
    } catch (invalid_argument &excecao) {
        estado = FALHA; /**< Marca o teste como falho se uma exceção for lançada. */
    }
}

/**
 * @brief Testa o cenário de falha para a definição de um código inválido.
 */
void TUCODIGO::TestarCenarioFalha() {
    try {
        codigo->SetCodigo(CODIGO_INVALIDO); /**< Tenta definir um código inválido. */
        estado = FALHA; /**< Marca o teste como falho, já que uma exceção deveria ser lançada. */
    } catch (invalid_argument &excecao) {
        if (codigo->GetCodigo() == CODIGO_INVALIDO) /**< Verifica se o código obtido é inválido. */
            estado = FALHA; /**< Marca o teste como falho caso contrário. */
    }
}

/**
 * @brief Executa os testes de unidade para a classe CODIGO.
 * 
 * Este método chama os métodos SetUp, TestarCenarioSucesso, TestarCenarioFalha e TearDown,
 * e retorna o estado final do teste (SUCESSO ou FALHA).
 * 
 * @return O estado do teste (SUCESSO ou FALHA).
 */
int TUCODIGO::Run() {
    SetUp(); /**< Configura o ambiente de teste. */
    TestarCenarioSucesso(); /**< Executa o teste de cenário de sucesso. */
    TestarCenarioFalha(); /**< Executa o teste de cenário de falha. */
    TearDown(); /**< Limpa o ambiente de teste. */
    return estado; /**< Retorna o estado final do teste. */
}


/**
 * @brief Configura o ambiente de teste, inicializando os dados necessários.
 */
void TUAVALIACAO::SetUp() {
    avaliacao = new AVALIACAO(); /**< Cria uma nova instância da classe AVALIACAO. */
    estado = SUCESSO; /**< Inicializa o estado do teste como sucesso. */
}

/**
 * @brief Limpa o ambiente de teste, liberando os recursos utilizados.
 */
void TUAVALIACAO::TearDown() {
    delete avaliacao; /**< Libera o recurso alocado para a instância de AVALIACAO. */
}

/**
 * @brief Testa o cenário de sucesso para a definição e obtenção de uma avaliação válida.
 */
void TUAVALIACAO::TestarCenarioSucesso() {
    try {
        avaliacao->SetAvaliacao(AVALIACAO_VALIDA); /**< Define uma avaliação válida. */
        if (avaliacao->GetAvaliacao() != AVALIACAO_VALIDA) /**< Verifica se a avaliação atribuída é correta. */
            estado = FALHA; /**< Marca o teste como falho caso contrário. */
    } catch (invalid_argument &excecao) {
        estado = FALHA; /**< Marca o teste como falho se uma exceção for lançada. */
    }
}

/**
 * @brief Testa o cenário de falha para a definição de uma avaliação inválida.
 */
void TUAVALIACAO::TestarCenarioFalha() {
    try {
        avaliacao->SetAvaliacao(AVALIACAO_INVALIDA); /**< Tenta definir uma avaliação inválida. */
        estado = FALHA; /**< Marca o teste como falho, já que uma exceção deveria ser lançada. */
    } catch (invalid_argument &excecao) {
        if (avaliacao->GetAvaliacao() == AVALIACAO_INVALIDA) /**< Verifica se a avaliação obtida é inválida. */
            estado = FALHA; /**< Marca o teste como falho caso contrário. */
    }
}

/**
 * @brief Executa os testes de unidade para a classe AVALIACAO.
 * 
 * Este método chama os métodos SetUp, TestarCenarioSucesso, TestarCenarioFalha e TearDown,
 * e retorna o estado final do teste (SUCESSO ou FALHA).
 * 
 * @return O estado do teste (SUCESSO ou FALHA).
 */
int TUAVALIACAO::Run() {
    SetUp(); /**< Configura o ambiente de teste. */
    TestarCenarioSucesso(); /**< Executa o teste de cenário de sucesso. */
    TestarCenarioFalha(); /**< Executa o teste de cenário de falha. */
    TearDown(); /**< Limpa o ambiente de teste. */
    return estado; /**< Retorna o estado final do teste. */
}
/**
 * @brief Configura o ambiente de teste, inicializando os dados necessários.
 */
void TUDATA::SetUp() {
    data = new DATA(); /**< Cria uma nova instância da classe DATA. */
    estado = SUCESSO; /**< Inicializa o estado do teste como sucesso. */
}

/**
 * @brief Limpa o ambiente de teste, liberando os recursos utilizados.
 */
void TUDATA::TearDown() {
    delete data; /**< Libera o recurso alocado para a instância de DATA. */
}

/**
 * @brief Testa o cenário de sucesso para a definição e obtenção de uma data válida.
 */
void TUDATA::TestarCenarioSucesso() {
    try {
        data->SetData(DATA_VALIDA); /**< Define uma data válida. */
        if (data->GetData() != DATA_VALIDA) /**< Verifica se a data atribuída é correta. */
            estado = FALHA; /**< Marca o teste como falho caso contrário. */
    } catch (invalid_argument &excecao) {
        estado = FALHA; /**< Marca o teste como falho se uma exceção for lançada. */
    }
}

/**
 * @brief Testa o cenário de falha para a definição de uma data inválida.
 */
void TUDATA::TestarCenarioFalha() {
    try {
        data->SetData(DATA_INVALIDA); /**< Tenta definir uma data inválida. */
        estado = FALHA; /**< Marca o teste como falho, já que uma exceção deveria ser lançada. */
    } catch (invalid_argument &excecao) {
        if (data->GetData() == DATA_INVALIDA) /**< Verifica se a data obtida é inválida. */
            estado = FALHA; /**< Marca o teste como falho caso contrário. */
    }
}

/**
 * @brief Executa os testes de unidade para a classe DATA.
 * 
 * Este método chama os métodos SetUp, TestarCenarioSucesso, TestarCenarioFalha e TearDown,
 * e retorna o estado final do teste (SUCESSO ou FALHA).
 * 
 * @return O estado do teste (SUCESSO ou FALHA).
 */
int TUDATA::Run() {
    SetUp(); /**< Configura o ambiente de teste. */
    TestarCenarioSucesso(); /**< Executa o teste de cenário de sucesso. */
    TestarCenarioFalha(); /**< Executa o teste de cenário de falha. */
    TearDown(); /**< Limpa o ambiente de teste. */
    return estado; /**< Retorna o estado final do teste. */
}

/**
 * @brief Configura o ambiente de teste, inicializando os dados necessários.
 */
void TUDINHEIRO::SetUp() {
    dinheiro = new DINHEIRO(); /**< Cria uma nova instância da classe DINHEIRO. */
    estado = SUCESSO; /**< Inicializa o estado do teste como sucesso. */
}

/**
 * @brief Limpa o ambiente de teste, liberando os recursos utilizados.
 */
void TUDINHEIRO::TearDown() {
    delete dinheiro; /**< Libera o recurso alocado para a instância de DINHEIRO. */
}

/**
 * @brief Testa o cenário de sucesso para a definição e obtenção de um valor de dinheiro válido.
 */
void TUDINHEIRO::TestarCenarioSucesso() {
    try {
        dinheiro->SetDinheiro(DINHEIRO_VALIDO); /**< Define um valor de dinheiro válido. */
        if (dinheiro->GetDinheiro() != DINHEIRO_VALIDO) /**< Verifica se o valor de dinheiro atribuído é correto. */
            estado = FALHA; /**< Marca o teste como falho caso contrário. */
    } catch (invalid_argument &excecao) {
        estado = FALHA; /**< Marca o teste como falho se uma exceção for lançada. */
    }
}

/**
 * @brief Testa o cenário de falha para a definição de um valor de dinheiro inválido.
 */
void TUDINHEIRO::TestarCenarioFalha() {
    try {
        dinheiro->SetDinheiro(DINHEIRO_INVALIDO); /**< Tenta definir um valor inválido de dinheiro. */
        estado = FALHA; /**< Marca o teste como falho, já que uma exceção deveria ser lançada. */
    } catch (invalid_argument &excecao) {
        if (dinheiro->GetDinheiro() == DINHEIRO_INVALIDO) /**< Verifica se o valor obtido é inválido. */
            estado = FALHA; /**< Marca o teste como falho caso contrário. */
    }
}

/**
 * @brief Executa os testes de unidade para a classe DINHEIRO.
 * 
 * Este método chama os métodos SetUp, TestarCenarioSucesso, TestarCenarioFalha e TearDown,
 * e retorna o estado final do teste (SUCESSO ou FALHA).
 * 
 * @return O estado do teste (SUCESSO ou FALHA).
 */
int TUDINHEIRO::Run() {
    SetUp(); /**< Configura o ambiente de teste. */
    TestarCenarioSucesso(); /**< Executa o teste de cenário de sucesso. */
    TestarCenarioFalha(); /**< Executa o teste de cenário de falha. */
    TearDown(); /**< Limpa o ambiente de teste. */
    return estado; /**< Retorna o estado final do teste. */
}

/**
 * @brief Configura o ambiente de teste, inicializando os dados necessários.
 */
void TUDURACAO::SetUp() {
    duracao = new DURACAO(); /**< Cria uma nova instância da classe DURACAO. */
    estado = SUCESSO; /**< Inicializa o estado do teste como sucesso. */
}

/**
 * @brief Limpa o ambiente de teste, liberando os recursos utilizados.
 */
void TUDURACAO::TearDown() {
    delete duracao; /**< Libera o recurso alocado para a instância de DURACAO. */
}

/**
 * @brief Testa o cenário de sucesso para a definição e obtenção de uma duração válida.
 */
void TUDURACAO::TestarCenarioSucesso() {
    try {
        duracao->SetDuracao(DURACAO_VALIDA);  /**< Define uma duração válida. */
        if (duracao->GetDuracao() != DURACAO_VALIDA)  /**< Verifica se a duração atribuída é correta. */
            estado = FALHA;  /**< Marca o teste como falho caso contrário. */
    } catch (invalid_argument &excecao) {
        estado = FALHA;  /**< Marca o teste como falho se uma exceção for lançada. */
    }
}

/**
 * @brief Testa o cenário de falha para a definição de uma duração inválida.
 */
void TUDURACAO::TestarCenarioFalha() {
    try {
        duracao->SetDuracao(DURACAO_INVALIDA);  /**< Tenta definir uma duração inválida. */
        estado = FALHA;  /**< Marca o teste como falho, já que uma exceção deveria ser lançada. */
    } catch (invalid_argument &excecao) {
        if (duracao->GetDuracao() == DURACAO_INVALIDA)  /**< Verifica se a duração obtida é inválida. */
            estado = FALHA;  /**< Marca o teste como falho caso contrário. */
    }
}

/**
 * @brief Executa os testes de unidade para a classe DURACAO.
 * 
 * Este método chama os métodos SetUp, TestarCenarioSucesso, TestarCenarioFalha e TearDown,
 * e retorna o estado final do teste (SUCESSO ou FALHA).
 * 
 * @return O estado do teste (SUCESSO ou FALHA).
 */
int TUDURACAO::Run() {
    SetUp();  /**< Configura o ambiente de teste. */
    TestarCenarioSucesso();  /**< Executa o teste de cenário de sucesso. */
    TestarCenarioFalha();  /**< Executa o teste de cenário de falha. */
    TearDown();  /**< Limpa o ambiente de teste. */
    return estado;  /**< Retorna o estado final do teste. */
}
/**
 * @brief Configura o ambiente de teste, inicializando os dados necessários.
 */
void TUCONTA::SetUp() {
    conta = new CONTA(); /**< Cria uma nova instância da classe CONTA. */
    estado = SUCESSO; /**< Inicializa o estado do teste como sucesso. */
}

/**
 * @brief Limpa o ambiente de teste, liberando os recursos utilizados.
 */
void TUCONTA::TearDown() {
    delete conta; /**< Libera o recurso alocado para a instância de CONTA. */
}

/**
 * @brief Testa o cenário de sucesso para a definição e obtenção de código e senha válidos.
 */
void TUCONTA::TestarCenarioSucesso() {
    CODIGO codigo;
    codigo.SetCodigo(CODIGO_VALIDO);  /**< Define um código válido para a instância de CONTA. */
    conta->SetCodigo(codigo);  /**< Atribui o código à conta. */
    if (conta->GetCodigo().GetCodigo() != CODIGO_VALIDO)  /**< Verifica se o código atribuído é o correto. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */

    SENHA senha;
    senha.SetSenha(SENHA_VALIDA);  /**< Define uma senha válida para a instância de CONTA. */
    conta->SetSenha(senha);  /**< Atribui a senha à conta. */
    if (conta->GetSenha().GetSenha() != SENHA_VALIDA)  /**< Verifica se a senha atribuída é a correta. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */
}

/**
 * @brief Executa os testes de unidade para a classe CONTA.
 * 
 * Este método chama os métodos SetUp, TestarCenarioSucesso e TearDown,
 * e retorna o estado do teste (SUCESSO ou FALHA).
 * 
 * @return O estado do teste (SUCESSO ou FALHA).
 */
int TUCONTA::Run() {
    SetUp();  /**< Configura o ambiente de teste. */
    TestarCenarioSucesso();  /**< Executa o teste de cenário de sucesso. */
    TearDown();  /**< Limpa o ambiente de teste. */
    return estado;  /**< Retorna o estado final do teste. */
}
/**
 * @brief Configura o ambiente de teste, inicializando os dados necessários.
 */
void TUATIVIDADE::SetUp() {
    atividade = new ATIVIDADE();  /**< Cria uma nova instância da classe ATIVIDADE. */
    estado = SUCESSO; /**< Inicializa o estado do teste como sucesso. */
}

/**
 * @brief Limpa o ambiente de teste, liberando os recursos utilizados.
 */
void TUATIVIDADE::TearDown() {
    delete atividade;  /**< Libera o recurso alocado para a instância de ATIVIDADE. */
}

/**
 * @brief Testa o cenário de sucesso para a definição e obtenção do código, nome, data, horário, duração, preço e avaliação da atividade.
 */
void TUATIVIDADE::TestarCenarioSucesso() {
    CODIGO codigo; /**< Cria uma instância de CODIGO para a atividade. */
    codigo.SetCodigo(CODIGO_VALIDO);  /**< Define um código válido para a atividade. */
    atividade->SetCodigo(codigo);  /**< Atribui o código à atividade. */
    if (atividade->GetCodigo().GetCodigo() != CODIGO_VALIDO)  /**< Verifica se o código atribuído é o correto. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */

    NOME nome; /**< Cria uma instância de NOME para a atividade. */
    nome.SetNome(NOME_VALIDO);  /**< Define um nome válido para a atividade. */
    atividade->SetNome(nome);  /**< Atribui o nome à atividade. */
    if (atividade->GetNome().GetNome() != NOME_VALIDO)  /**< Verifica se o nome atribuído é o correto. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */

    DATA data; /**< Cria uma instância de DATA para a data da atividade. */
    data.SetData(DATA_VALIDA);  /**< Define uma data válida para a atividade. */
    atividade->SetData(data);  /**< Atribui a data à atividade. */
    if (atividade->GetData().GetData() != DATA_VALIDA)  /**< Verifica se a data atribuída é a correta. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */

    HORARIO horario; /**< Cria uma instância de HORARIO para a atividade. */
    horario.SetHorario(HORARIO_VALIDO);  /**< Define um horário válido para a atividade. */
    atividade->SetHorario(horario);  /**< Atribui o horário à atividade. */
    if (atividade->GetHorario().GetHorario() != HORARIO_VALIDO)  /**< Verifica se o horário atribuído é o correto. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */

    DURACAO duracao; /**< Cria uma instância de DURACAO para a atividade. */
    duracao.SetDuracao(DURACAO_VALIDA);  /**< Define uma duração válida para a atividade. */
    atividade->SetDuracao(duracao);  /**< Atribui a duração à atividade. */
    if (atividade->GetDuracao().GetDuracao() != DURACAO_VALIDA)  /**< Verifica se a duração atribuída é a correta. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */

    DINHEIRO preco; /**< Cria uma instância de DINHEIRO para o preço da atividade. */
    preco.SetDinheiro(PRECO_VALIDO);  /**< Define um preço válido para a atividade. */
    atividade->SetPreco(preco);  /**< Atribui o preço à atividade. */
    if (atividade->GetPreco().GetDinheiro() != PRECO_VALIDO)  /**< Verifica se o preço atribuído é o correto. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */

    AVALIACAO avaliacao; /**< Cria uma instância de AVALIACAO para a atividade. */
    avaliacao.SetAvaliacao(AVALIACAO_VALIDA);  /**< Define uma avaliação válida para a atividade. */
    atividade->SetAvaliacao(avaliacao);  /**< Atribui a avaliação à atividade. */
    if (atividade->GetAvaliacao().GetAvaliacao() != AVALIACAO_VALIDA)  /**< Verifica se a avaliação atribuída é a correta. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */
}

/**
 * @brief Executa os testes de unidade para a classe ATIVIDADE.
 * 
 * Este método chama os métodos SetUp, TestarCenarioSucesso e TearDown,
 * e retorna o estado do teste (SUCESSO ou FALHA).
 * 
 * @return O estado do teste (SUCESSO ou FALHA).
 */
int TUATIVIDADE::Run() {
    SetUp();  /**< Configura o ambiente de teste. */
    TestarCenarioSucesso();  /**< Executa o teste de cenário de sucesso. */
    TearDown();  /**< Limpa o ambiente de teste. */
    return estado;  /**< Retorna o estado final do teste. */
}

/**
 * @brief Configura o ambiente de teste, inicializando os dados necessários.
 */
void TUDESTINO::SetUp() {
    destino = new DESTINO();  /**< Cria uma nova instância da classe DESTINO. */
    estado = SUCESSO; /**< Inicializa o estado do teste como sucesso. */
}

/**
 * @brief Limpa o ambiente de teste, liberando os recursos utilizados.
 */
void TUDESTINO::TearDown() {
    delete destino;  /**< Libera o recurso alocado para a instância de DESTINO. */
}

/**
 * @brief Testa o cenário de sucesso para a definição e obtenção do código, nome, datas e avaliação do destino.
 */
void TUDESTINO::TestarCenarioSucesso() {
    CODIGO codigo; /**< Cria uma instância de CODIGO para o destino. */
    codigo.SetCodigo(CODIGO_VALIDO);  /**< Define um código válido para o destino. */
    destino->SetCodigo(codigo);  /**< Atribui o código ao destino. */
    if (destino->GetCodigo().GetCodigo() != CODIGO_VALIDO)  /**< Verifica se o código atribuído é o correto. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */

    NOME nome; /**< Cria uma instância de NOME para o destino. */
    nome.SetNome(NOME_VALIDO);  /**< Define um nome válido para o destino. */
    destino->SetNome(nome);  /**< Atribui o nome ao destino. */
    if (destino->GetNome().GetNome() != NOME_VALIDO)  /**< Verifica se o nome atribuído é o correto. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */

    DATA dataInicio; /**< Cria uma instância de DATA para a data de início. */
    dataInicio.SetData(DATA_INICIO_VALIDA);  /**< Define uma data de início válida para o destino. */
    destino->SetDataInicio(dataInicio);  /**< Atribui a data de início ao destino. */
    if (destino->GetDataInicio().GetData() != DATA_INICIO_VALIDA)  /**< Verifica se a data de início atribuída é a correta. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */

    DATA dataFinal; /**< Cria uma instância de DATA para a data final. */
    dataFinal.SetData(DATA_FINAL_VALIDA);  /**< Define uma data final válida para o destino. */
    destino->SetDataFim(dataFinal);  /**< Atribui a data final ao destino. */
    if (destino->GetDataFim().GetData() != DATA_FINAL_VALIDA)  /**< Verifica se a data final atribuída é a correta. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */

    AVALIACAO avaliacao; /**< Cria uma instância de AVALIACAO para o destino. */
    avaliacao.SetAvaliacao(AVALIACAO_VALIDA);  /**< Define uma avaliação válida para o destino. */
    destino->SetAvaliacao(avaliacao);  /**< Atribui a avaliação ao destino. */
    if (destino->GetAvaliacao().GetAvaliacao() != AVALIACAO_VALIDA)  /**< Verifica se a avaliação atribuída é a correta. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */
}

/**
 * @brief Executa os testes de unidade para a classe DESTINO.
 * 
 * Este método chama os métodos SetUp, TestarCenarioSucesso e TearDown,
 * e retorna o estado do teste (SUCESSO ou FALHA).
 * 
 * @return O estado do teste (SUCESSO ou FALHA).
 */
int TUDESTINO::Run() {
    SetUp();  /**< Configura o ambiente de teste. */
    TestarCenarioSucesso();  /**< Executa o teste de cenário de sucesso. */
    TearDown();  /**< Limpa o ambiente de teste. */
    return estado;  /**< Retorna o estado final do teste. */
}

/**
 * @brief Configura o ambiente de teste, inicializando os dados necessários.
 */
void TUHOSPEDAGEM::SetUp() {
    hospedagem = new HOSPEDAGEM();  /**< Cria uma nova instância da classe HOSPEDAGEM. */
    estado = SUCESSO; /**< Inicializa o estado do teste como sucesso. */
}

/**
 * @brief Limpa o ambiente de teste, liberando os recursos utilizados.
 */
void TUHOSPEDAGEM::TearDown() {
    delete hospedagem;  /**< Libera o recurso alocado para a instância de HOSPEDAGEM. */
}

/**
 * @brief Testa o cenário de sucesso para a definição e obtenção do código, nome, preço e avaliação da hospedagem.
 */
void TUHOSPEDAGEM::TestarCenarioSucesso() {
    CODIGO codigo; /**< Cria uma instância de CODIGO para a hospedagem. */
    codigo.SetCodigo(CODIGO_VALIDO);  /**< Define um código válido para a hospedagem. */
    hospedagem->SetCodigo(codigo);  /**< Atribui o código à hospedagem. */
    if (hospedagem->GetCodigo().GetCodigo() != CODIGO_VALIDO)  /**< Verifica se o código atribuído é o correto. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */

    NOME nome; /**< Cria uma instância de NOME para a hospedagem. */
    nome.SetNome(NOME_VALIDO);  /**< Define um nome válido para a hospedagem. */
    hospedagem->SetNome(nome);  /**< Atribui o nome à hospedagem. */
    if (hospedagem->GetNome().GetNome() != NOME_VALIDO)  /**< Verifica se o nome atribuído é o correto. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */

    DINHEIRO preco; /**< Cria uma instância de DINHEIRO para a diária. */
    preco.SetDinheiro(PRECO_VALIDO);  /**< Define um preço válido para a diária. */
    hospedagem->SetDiaria(preco);  /**< Atribui o preço da diária à hospedagem. */
    if (hospedagem->GetDiaria().GetDinheiro() != PRECO_VALIDO)  /**< Verifica se o preço atribuído é o correto. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */

    AVALIACAO avaliacao; /**< Cria uma instância de AVALIACAO para a hospedagem. */
    avaliacao.SetAvaliacao(AVALIACAO_VALIDA);  /**< Define uma avaliação válida para a hospedagem. */
    hospedagem->SetAvaliacao(avaliacao);  /**< Atribui a avaliação à hospedagem. */
    if (hospedagem->GetAvaliacao().GetAvaliacao() != AVALIACAO_VALIDA)  /**< Verifica se a avaliação atribuída é a correta. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */
}

/**
 * @brief Executa os testes de unidade para a classe HOSPEDAGEM.
 * 
 * Este método chama os métodos SetUp, TestarCenarioSucesso e TearDown,
 * e retorna o estado do teste (SUCESSO ou FALHA).
 * 
 * @return O estado do teste (SUCESSO ou FALHA).
 */
int TUHOSPEDAGEM::Run() {
    SetUp();  /**< Configura o ambiente de teste. */
    TestarCenarioSucesso();  /**< Executa o teste de cenário de sucesso. */
    TearDown();  /**< Limpa o ambiente de teste. */
    return estado;  /**< Retorna o estado final do teste. */
}

/**
 * @brief Configura o ambiente de teste, inicializando os dados necessários.
 */
void TUVIAGEM::SetUp() {
    viagem = new VIAGEM();  /**< Cria uma nova instância da classe VIAGEM. */
    estado = SUCESSO; /**< Inicializa o estado do teste como sucesso. */
}

/**
 * @brief Limpa o ambiente de teste, liberando os recursos utilizados.
 */
void TUVIAGEM::TearDown() {
    delete viagem;  /**< Libera o recurso alocado para a instância de VIAGEM. */
}

/**
 * @brief Testa o cenário de sucesso para a definição e obtenção do código, nome e avaliação da viagem.
 */
void TUVIAGEM::TestarCenarioSucesso() {
    CODIGO codigo; /**< Cria uma instância de CODIGO para a viagem. */
    codigo.SetCodigo(CODIGO_VALIDO);  /**< Define um código válido para a viagem. */
    viagem->SetCodigo(codigo);  /**< Atribui o código à viagem. */
    if (viagem->GetCodigo().GetCodigo() != CODIGO_VALIDO)  /**< Verifica se o código atribuído é o correto. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */

    NOME nome; /**< Cria uma instância de NOME para a viagem. */
    nome.SetNome(NOME_VALIDO);  /**< Define um nome válido para a viagem. */
    viagem->SetNome(nome);  /**< Atribui o nome à viagem. */
    if (viagem->GetNome().GetNome() != NOME_VALIDO)  /**< Verifica se o nome atribuído é o correto. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */

    AVALIACAO avaliacao; /**< Cria uma instância de AVALIACAO para a viagem. */
    avaliacao.SetAvaliacao(AVALIACAO_VALIDA);  /**< Define uma avaliação válida para a viagem. */
    viagem->SetAvaliacao(avaliacao);  /**< Atribui a avaliação à viagem. */
    if (viagem->GetAvaliacao().GetAvaliacao() != AVALIACAO_VALIDA)  /**< Verifica se a avaliação atribuída é a correta. */
        estado = FALHA;  /**< Marca o teste como falho caso contrário. */
}

/**
 * @brief Executa os testes de unidade para a classe VIAGEM.
 * 
 * Este método chama os métodos SetUp, TestarCenarioSucesso e TearDown,
 * e retorna o estado do teste (SUCESSO ou FALHA).
 * 
 * @return O estado do teste (SUCESSO ou FALHA).
 */
int TUVIAGEM::Run() {
    SetUp();  /**< Configura o ambiente de teste. */
    TestarCenarioSucesso();  /**< Executa o teste de cenário de sucesso. */
    TearDown();  /**< Limpa o ambiente de teste. */
    return estado;  /**< Retorna o estado final do teste. */
}
#include "teste.h"
/**
 * @brief Configura o ambiente de teste, inicializando os dados necessários.
 */
void TUHORARIO::SetUp() {
    horario = new HORARIO();  /**< Cria uma nova instância da classe HORARIO. */
    estado = SUCESSO; /**< Inicializa o estado do teste como sucesso. */
}

/**
 * @brief Limpa o ambiente de teste, liberando os recursos utilizados.
 */
void TUHORARIO::TearDown() {
    delete horario;  /**< Libera o recurso alocado para a instância de HORARIO. */
}

/**
 * @brief Testa o cenário de sucesso para a definição e obtenção de um horário válido.
 */
void TUHORARIO::TestarCenarioSucesso() {
    try {
        horario->SetHorario(HORARIO_VALIDO);  /**< Define um horário válido. */
        if (horario->GetHorario() != HORARIO_VALIDO)  /**< Verifica se o horário definido é o mesmo que o obtido. */
            estado = FALHA;  /**< Caso contrário, marca o teste como falho. */
    } catch (invalid_argument &excecao) {  /**< Se ocorrer uma exceção durante o processo... */
        estado = FALHA;  /**< Marca o teste como falho. */
    }
}

/**
 * @brief Testa o cenário de falha para a definição de um horário inválido.
 */
void TUHORARIO::TestarCenarioFalha() {
    try {
        horario->SetHorario(HORARIO_INVALIDO);  /**< Tenta definir um horário inválido. */
        estado = FALHA;  /**< Se não ocorrer exceção, marca o teste como falho. */
    } catch (invalid_argument &excecao) {  /**< Se ocorrer uma exceção... */
        if (horario->GetHorario() == HORARIO_INVALIDO)  /**< Verifica se o horário ainda é inválido após a falha. */
            estado = FALHA;  /**< Marca o teste como falho. */
    }
}

/**
 * @brief Executa os testes de unidade para a classe HORARIO.
 * 
 * Este método chama os métodos SetUp, TestarCenarioSucesso, TestarCenarioFalha e TearDown,
 * e retorna o estado do teste (SUCESSO ou FALHA).
 * 
 * @return O estado do teste (SUCESSO ou FALHA).
 */
int TUHORARIO::Run() {
    SetUp();  /**< Configura o ambiente de teste. */
    TestarCenarioSucesso();  /**< Executa o teste de cenário de sucesso. */
    TestarCenarioFalha();  /**< Executa o teste de cenário de falha. */
    TearDown();  /**< Limpa o ambiente de teste. */
    return estado;  /**< Retorna o estado final do teste. */
}

/**
 * @brief Configura o ambiente de teste, inicializando os dados necessários.
 */
void TUNOME::SetUp() {
    nome = new NOME();  /**< Cria uma nova instância da classe NOME. */
    estado = SUCESSO; /**< Inicializa o estado do teste como sucesso. */
}

/**
 * @brief Limpa o ambiente de teste, liberando os recursos utilizados.
 */
void TUNOME::TearDown() {
    delete nome;  /**< Libera o recurso alocado para a instância de NOME. */
}

/**
 * @brief Testa o cenário de sucesso para a definição e obtenção de um nome válido.
 */
void TUNOME::TestarCenarioSucesso() {
    try {
        nome->SetNome(NOME_VALIDO);  /**< Define um nome válido para a instância de NOME. */
        if (nome->GetNome() != NOME_VALIDO)  /**< Verifica se o nome atribuído é o correto. */
            estado = FALHA;  /**< Marca o teste como falho caso contrário. */
    } catch (invalid_argument &excecao) {
        estado = FALHA;  /**< Marca o teste como falho caso ocorra uma exceção inesperada. */
    }
}

/**
 * @brief Testa o cenário de falha ao tentar definir um nome inválido.
 */
void TUNOME::TestarCenarioFalha() {
    try {
        nome->SetNome(NOME_INVALIDO);  /**< Tenta definir um nome inválido (vazio) para a instância de NOME. */
        estado = FALHA;  /**< Marca o teste como falho caso o nome inválido seja aceito. */
    } catch (invalid_argument &excecao) {
        if (nome->GetNome() == NOME_INVALIDO)  /**< Verifica se o nome inválido foi atribuído apesar da exceção. */
            estado = FALHA;  /**< Marca o teste como falho caso contráio. */
    }
}

/**
 * @brief Executa os testes de unidade para a classe NOME.
 * 
 * Este método chama os métodos SetUp, TestarCenarioSucesso, TestarCenarioFalha e TearDown,
 * e retorna o estado do teste (SUCESSO ou FALHA).
 * 
 * @return O estado do teste (SUCESSO ou FALHA).
 */
int TUNOME::Run() {
    SetUp();  /**< Configura o ambiente de teste. */
    TestarCenarioSucesso();  /**< Executa o teste de cenário de sucesso. */
    TestarCenarioFalha();  /**< Executa o teste de cenário de falha. */
    TearDown();  /**< Limpa o ambiente de teste. */
    return estado;  /**< Retorna o estado final do teste. */
}

/**
 * @brief Configura o ambiente de teste, inicializando os dados necessários.
 */
void TUSENHA::SetUp() {
    senha = new SENHA();  /**< Cria uma nova instância da classe SENHA. */
    estado = SUCESSO; /**< Inicializa o estado do teste como sucesso. */
}

/**
 * @brief Limpa o ambiente de teste, liberando os recursos utilizados.
 */
void TUSENHA::TearDown() {
    delete senha;  /**< Libera o recurso alocado para a instância de SENHA. */
}

/**
 * @brief Testa o cenário de sucesso para a definição e obtenção de uma senha válida.
 */
void TUSENHA::TestarCenarioSucesso() {
    try {
        senha->SetSenha(SENHA_VALIDA);  /**< Define uma senha válida. */
        if (senha->GetSenha() != SENHA_VALIDA)  /**< Verifica se a senha definida é a mesma que a obtida. */
            estado = FALHA;  /**< Caso contrário, marca o teste como falho. */
    } catch (invalid_argument &excecao) {  /**< Se ocorrer uma exceção durante o processo... */
        estado = FALHA;  /**< Marca o teste como falho. */
    }
}

/**
 * @brief Testa o cenário de falha para a definição de uma senha inválida.
 */
void TUSENHA::TestarCenarioFalha() {
    try {
        senha->SetSenha(SENHA_INVALIDA);  /**< Tenta definir uma senha inválida. */
        estado = FALHA;  /**< Se não ocorrer exceção, marca o teste como falho. */
    } catch (invalid_argument &excecao) {  /**< Se ocorrer uma exceção... */
        if (senha->GetSenha() == SENHA_INVALIDA)  /**< Verifica se a senha ainda é inválida após a falha. */
            estado = FALHA;  /**< Marca o teste como falho. */
    }
}

/**
 * @brief Executa os testes de unidade para a classe SENHA.
 * 
 * Este método chama os métodos SetUp, TestarCenarioSucesso, TestarCenarioFalha e TearDown,
 * e retorna o estado do teste (SUCESSO ou FALHA).
 * 
 * @return O estado do teste (SUCESSO ou FALHA).
 */
int TUSENHA::Run() {
    SetUp();  /**< Configura o ambiente de teste. */
    TestarCenarioSucesso();  /**< Executa o teste de cenário de sucesso. */
    TestarCenarioFalha();  /**< Executa o teste de cenário de falha. */
    TearDown();  /**< Limpa o ambiente de teste. */
    return estado;  /**< Retorna o estado final do teste. */
}