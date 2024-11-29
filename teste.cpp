#include "teste.h"

void TUCODIGO::SetUp(){ /** Configura o ambiente de teste. */
    codigo = new CODIGO();
    estado = SUCESSO;
}

void TUCODIGO::TearDown(){ /** Limpa o ambiente de teste, excluindo a instância CODIGO. */
    delete codigo;
}

void TUCODIGO::TestarCenarioSucesso(){ /** Testa um cenário de sucesso em que o código é definido como um código válido. */
    try{
        codigo->SetCodigo(CODIGO_VALIDO);
        if (codigo->GetCodigo() != CODIGO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCODIGO::TestarCenarioFalha(){ /** Testa um cenário de falha em que o código é definido como um código inválido, */
    try{
        codigo->SetCodigo(CODIGO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->GetCodigo() == CODIGO_INVALIDO)
            estado = FALHA;
    }
}

int TUCODIGO::Run(){
    SetUp();
    TestarCenarioSucesso();
    TestarCenarioFalha();
    TearDown();
    return estado; /**< Retorna o estado final dos testes (SUCESSO ou FALHA). */
}

#include "teste.h"

void TUAVALIACAO::SetUp() {
    avaliacao = new AVALIACAO();
    estado = SUCESSO;
}

void TUAVALIACAO::TearDown() {
    delete avaliacao;
}

void TUAVALIACAO::TestarCenarioSucesso() {
    try {
        avaliacao->SetAvaliacao(AVALIACAO_VALIDA);
        if (avaliacao->GetAvaliacao() != AVALIACAO_VALIDA)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUAVALIACAO::TestarCenarioFalha() {
    try {
        avaliacao->SetAvaliacao(AVALIACAO_INVALIDA);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (avaliacao->GetAvaliacao() == AVALIACAO_INVALIDA)
            estado = FALHA;
    }
}

int TUAVALIACAO::Run() {
    SetUp();
    TestarCenarioSucesso();
    TestarCenarioFalha();
    TearDown();
    return estado;
}

void TUDATA::SetUp() {
    data = new DATA();
    estado = SUCESSO;
}

void TUDATA::TearDown() {
    delete data;
}

void TUDATA::TestarCenarioSucesso() {
    try {
        data->SetData(DATA_VALIDA);
        if (data->GetData() != DATA_VALIDA)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUDATA::TestarCenarioFalha() {
    try {
        data->SetData(DATA_INVALIDA);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (data->GetData() == DATA_INVALIDA)
            estado = FALHA;
    }
}

int TUDATA::Run() {
    SetUp();
    TestarCenarioSucesso();
    TestarCenarioFalha();
    TearDown();
    return estado;
}

void TUDINHEIRO::SetUp() {
    dinheiro = new DINHEIRO();
    estado = SUCESSO;
}

void TUDINHEIRO::TearDown() {
    delete dinheiro;
}

void TUDINHEIRO::TestarCenarioSucesso() {
    try {
        dinheiro->SetDinheiro(DINHEIRO_VALIDO);
        if (dinheiro->GetDinheiro() != DINHEIRO_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUDINHEIRO::TestarCenarioFalha() {
    try {
        dinheiro->SetDinheiro(DINHEIRO_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (dinheiro->GetDinheiro() == DINHEIRO_INVALIDO)
            estado = FALHA;
    }
}

int TUDINHEIRO::Run() {
    SetUp();
    TestarCenarioSucesso();
    TestarCenarioFalha();
    TearDown();
    return estado;
}

void TUDURACAO::SetUp() {
    duracao = new DURACAO();
    estado = SUCESSO;
}

void TUDURACAO::TearDown() {
    delete duracao;
}

void TUDURACAO::TestarCenarioSucesso() {
    try {
        duracao->SetDuracao(DURACAO_VALIDA);
        if (duracao->GetDuracao() != DURACAO_VALIDA)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUDURACAO::TestarCenarioFalha() {
    try {
        duracao->SetDuracao(DURACAO_INVALIDA);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (duracao->GetDuracao() == DURACAO_INVALIDA)
            estado = FALHA;
    }
}

int TUDURACAO::Run() {
    SetUp();
    TestarCenarioSucesso();
    TestarCenarioFalha();
    TearDown();
    return estado;
}


void TUCONTA::SetUp(){  /** Configura o ambiente de teste. */
    conta = new CONTA();
    estado = SUCESSO;
}

void TUCONTA::TearDown(){ /** Limpa o ambiente de teste, excluindo a instância CONTA. */
    delete conta;
}

void TUCONTA::TestarCenarioSucesso(){ /** Testa um cenário de sucesso em que a conta é definida como uma conta válida. */

    CODIGO codigo;
    codigo.SetCodigo(CODIGO_VALIDO);
    conta->SetCodigo(codigo);
    if(conta->GetCodigo().GetCodigo() != CODIGO_VALIDO)
        estado = FALHA;

    SENHA senha;
    senha.SetSenha(SENHA_VALIDA);
    conta->SetSenha(senha);
    if(conta->GetSenha().GetSenha() != SENHA_VALIDA)
        estado = FALHA;
}

int TUCONTA::Run(){
    SetUp();
    TestarCenarioSucesso();
    TearDown();
    return estado;
}

void TUATIVIDADE::SetUp() {
    atividade = new ATIVIDADE();
    estado = SUCESSO;
}

void TUATIVIDADE::TearDown() {
    delete atividade;
}

void TUATIVIDADE::TestarCenarioSucesso() {
    CODIGO codigo;
    codigo.SetCodigo(CODIGO_VALIDO);
    atividade->SetCodigo(codigo);
    if (atividade->GetCodigo().GetCodigo() != CODIGO_VALIDO)
        estado = FALHA;

    NOME nome;
    nome.SetNome(NOME_VALIDO);
    atividade->SetNome(nome);
    if (atividade->GetNome().GetNome() != NOME_VALIDO)
        estado = FALHA;

    DATA data;
    data.SetData(DATA_VALIDA);
    atividade->SetData(data);
    if (atividade->GetData().GetData() != DATA_VALIDA)
        estado = FALHA;

    HORARIO horario;
    horario.SetHorario(HORARIO_VALIDO);
    atividade->SetHorario(horario);
    if (atividade->GetHorario().GetHorario() != HORARIO_VALIDO)
        estado = FALHA;

    DURACAO duracao;
    duracao.SetDuracao(DURACAO_VALIDA);
    atividade->SetDuracao(duracao);
    if (atividade->GetDuracao().GetDuracao() != DURACAO_VALIDA)
        estado = FALHA;

    DINHEIRO preco;
    preco.SetDinheiro(PRECO_VALIDO);
    atividade->SetPreco(preco);
    if (atividade->GetPreco().GetDinheiro() != PRECO_VALIDO)
        estado = FALHA;

    AVALIACAO avaliacao;
    avaliacao.SetAvaliacao(AVALIACAO_VALIDA);
    atividade->SetAvaliacao(avaliacao);
    if (atividade->GetAvaliacao().GetAvaliacao() != AVALIACAO_VALIDA)
        estado = FALHA;
}

int TUATIVIDADE::Run() {
    SetUp();
    TestarCenarioSucesso();
    TearDown();
    return estado;
}

void TUDESTINO::SetUp() {
    destino = new DESTINO();
    estado = SUCESSO;
}

void TUDESTINO::TearDown() {
    delete destino;
}

void TUDESTINO::TestarCenarioSucesso() {
    CODIGO codigo;
    codigo.SetCodigo(CODIGO_VALIDO);
    destino->SetCodigo(codigo);
    if (destino->GetCodigo().GetCodigo() != CODIGO_VALIDO)
        estado = FALHA;

    NOME nome;
    nome.SetNome(NOME_VALIDO);
    destino->SetNome(nome);
    if (destino->GetNome().GetNome() != NOME_VALIDO)
        estado = FALHA;

    DATA dataInicio;
    dataInicio.SetData(DATA_INICIO_VALIDA);
    destino->SetDataInicio(dataInicio);
    if (destino->GetDataInicio().GetData() != DATA_INICIO_VALIDA)
        estado = FALHA;

    DATA dataFinal;
    dataFinal.SetData(DATA_FINAL_VALIDA);
    destino->SetDataFim(dataFinal);
    if (destino->GetDataFim().GetData() != DATA_FINAL_VALIDA)
        estado = FALHA;

    AVALIACAO avaliacao;
    avaliacao.SetAvaliacao(AVALIACAO_VALIDA);
    destino->SetAvaliacao(avaliacao);
    if (destino->GetAvaliacao().GetAvaliacao() != AVALIACAO_VALIDA)
        estado = FALHA;
}

int TUDESTINO::Run() {
    SetUp();
    TestarCenarioSucesso();
    TearDown();
    return estado;
}

void TUHOSPEDAGEM::SetUp() {
    hospedagem = new HOSPEDAGEM();
    estado = SUCESSO;
}

void TUHOSPEDAGEM::TearDown() {
    delete hospedagem;
}

void TUHOSPEDAGEM::TestarCenarioSucesso() {
    CODIGO codigo;
    codigo.SetCodigo(CODIGO_VALIDO);
    hospedagem->SetCodigo(codigo);
    if (hospedagem->GetCodigo().GetCodigo() != CODIGO_VALIDO)
        estado = FALHA;

    NOME nome;
    nome.SetNome(NOME_VALIDO);
    hospedagem->SetNome(nome);
    if (hospedagem->GetNome().GetNome() != NOME_VALIDO)
        estado = FALHA;

    DINHEIRO preco;
    preco.SetDinheiro(PRECO_VALIDO);
    hospedagem->SetDiaria(preco);
    if (hospedagem->GetDiaria().GetDinheiro() != PRECO_VALIDO)
        estado = FALHA;

    AVALIACAO avaliacao;
    avaliacao.SetAvaliacao(AVALIACAO_VALIDA);
    hospedagem->SetAvaliacao(avaliacao);
    if (hospedagem->GetAvaliacao().GetAvaliacao() != AVALIACAO_VALIDA)
        estado = FALHA;
}

int TUHOSPEDAGEM::Run() {
    SetUp();
    TestarCenarioSucesso();
    TearDown();
    return estado;
}

void TUVIAGEM::SetUp() {
    viagem = new VIAGEM();
    estado = SUCESSO;
}

void TUVIAGEM::TearDown() {
    delete viagem;
}

void TUVIAGEM::TestarCenarioSucesso() {
    CODIGO codigo;
    codigo.SetCodigo(CODIGO_VALIDO);
    viagem->SetCodigo(codigo);
    if (viagem->GetCodigo().GetCodigo() != CODIGO_VALIDO)
        estado = FALHA;

    NOME nome;
    nome.SetNome(NOME_VALIDO);
    viagem->SetNome(nome);
    if (viagem->GetNome().GetNome() != NOME_VALIDO)
        estado = FALHA;

    AVALIACAO avaliacao;
    avaliacao.SetAvaliacao(AVALIACAO_VALIDA);
    viagem->SetAvaliacao(avaliacao);
    if (viagem->GetAvaliacao().GetAvaliacao() != AVALIACAO_VALIDA)
        estado = FALHA;
}

int TUVIAGEM::Run() {
    SetUp();
    TestarCenarioSucesso();
    TearDown();
    return estado;
}

#include "teste.h"

void TUHORARIO::SetUp() {
    horario = new HORARIO();
    estado = SUCESSO;
}

void TUHORARIO::TearDown() {
    delete horario;
}

void TUHORARIO::TestarCenarioSucesso() {
    try {
        horario->SetHorario(HORARIO_VALIDO);
        if (horario->GetHorario() != HORARIO_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUHORARIO::TestarCenarioFalha() {
    try {
        horario->SetHorario(HORARIO_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (horario->GetHorario() == HORARIO_INVALIDO)
            estado = FALHA;
    }
}

int TUHORARIO::Run() {
    SetUp();
    TestarCenarioSucesso();
    TestarCenarioFalha();
    TearDown();
    return estado;
}

void TUNOME::SetUp() {
    nome = new NOME();
    estado = SUCESSO;
}

void TUNOME::TearDown() {
    delete nome;
}

void TUNOME::TestarCenarioSucesso() {
    try {
        nome->SetNome(NOME_VALIDO);
        if (nome->GetNome() != NOME_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUNOME::TestarCenarioFalha() {
    try {
        nome->SetNome(NOME_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (nome->GetNome() == NOME_INVALIDO)
            estado = FALHA;
    }
}

int TUNOME::Run() {
    SetUp();
    TestarCenarioSucesso();
    TestarCenarioFalha();
    TearDown();
    return estado;
}

void TUSENHA::SetUp() {
    senha = new SENHA();
    estado = SUCESSO;
}

void TUSENHA::TearDown() {
    delete senha;
}

void TUSENHA::TestarCenarioSucesso() {
    try {
        senha->SetSenha(SENHA_VALIDA);
        if (senha->GetSenha() != SENHA_VALIDA)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUSENHA::TestarCenarioFalha() {
    try {
        senha->SetSenha(SENHA_INVALIDA);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (senha->GetSenha() == SENHA_INVALIDA)
            estado = FALHA;
    }
}

int TUSENHA::Run() {
    SetUp();
    TestarCenarioSucesso();
    TestarCenarioFalha();
    TearDown();
    return estado;
}