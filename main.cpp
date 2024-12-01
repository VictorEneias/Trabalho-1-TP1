#include <iostream>
#include "dominio.h"
#include "entidade.h"
#include "teste.h"

using namespace std;

int main() {

    TUCODIGO testeA; /**< teste para a classe TUCODIGO */

    switch(testeA.Run()){
        case TUCODIGO::SUCESSO: cout << "SUCESSO - CODIGO" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - CODIGO".*/
            break;
        case TUCODIGO::FALHA  : cout << "FALHA  - CODIGO" << endl; /** Se o teste falhar, imprime "FALHA  - CODIGO". */
            break;
    }
    
    TUAVALIACAO testeB; /**< teste para a classe TUCOLUNA*/

    switch(testeB.Run()){
        case TUAVALIACAO::SUCESSO: cout << "SUCESSO - AVALIACAO" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - COLUNA".*/
            break;
        case TUAVALIACAO::FALHA  : cout << "FALHA  - AVALIACAO" << endl;  /**< Se o teste falhar, imprime "FALHA  - COLUNA". */
            break;
    }

    TUDATA testeC; /**< teste para a classe TUEMAIL*/

    switch(testeC.Run()){
        case TUDATA::SUCESSO: cout << "SUCESSO - DATA" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - EMAIL".*/
            break;
        case TUDATA::FALHA  : cout << "FALHA  - DATA" << endl;  /** Se o teste falhar, imprime "FALHA  - EMAIL". */
            break;
    }

    TUDINHEIRO testeD; /**< teste para a classe TULIMITE*/

    switch(testeD.Run()){
        case TUDINHEIRO::SUCESSO: cout << "SUCESSO - DINHEIRO" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - LIMITE".*/
            break;
        case TUDINHEIRO::FALHA  : cout << "FALHA  - DINHEIRO" << endl;  /** Se o teste falhar, imprime "FALHA  - LIMITE". */
            break;
    }

    TUSENHA testeE; /**< teste para a classe TUSENHA*/

    switch(testeE.Run()){
        case TUSENHA::SUCESSO: cout << "SUCESSO - SENHA" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - SENHA".*/
            break;
        case TUSENHA::FALHA  : cout << "FALHA  - SENHA" << endl;  /** Se o teste falhar, imprime "FALHA  - SENHA". */
            break;
    }

    TUDURACAO testeF;

    switch(testeF.Run()){
        case TUDURACAO::SUCESSO: cout << "SUCESSO - DURACAO" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - TEXTO".*/
            break;
        case TUDURACAO::FALHA  : cout << "FALHA  - DURACAO" << endl;  /** Se o teste falhar, imprime "FALHA  - TEXTO". */
            break;
    }

    TUCONTA testeG; /**< teste para a classe TUCONTA*/

    switch(testeG.Run()){
        case TUCONTA::SUCESSO: cout << "SUCESSO - CONTA" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - CONTA".*/
            break;
        case TUCONTA::FALHA  : cout << "FALHA - CONTA" << endl;  /** Se o teste falhar, imprime "FALHA  - CONTA". */
            break;
    }

    TUHORARIO testeH; /**< teste para a classe TUQUADRO*/

    switch(testeH.Run()){
        case TUHORARIO::SUCESSO: cout << "SUCESSO - HORARIO" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - QUADRO".*/
            break;
        case TUHORARIO::FALHA  : cout << "FALHA - HORARIO" << endl;  /** Se o teste falhar, imprime "FALHA  - QUADRO". */
            break;
    }

    TUNOME testeI;

    switch(testeI.Run()){
        case TUNOME::SUCESSO: cout << "SUCESSO - NOME" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - CARTAO".*/
            break;
        case TUNOME::FALHA  : cout << "FALHA - NOME" << endl;  /** Se o teste falhar, imprime "FALHA  - CARTAO". */
            break;
    }

    TUVIAGEM testeJ;

    switch(testeJ.Run()){
        case TUVIAGEM::SUCESSO: cout << "SUCESSO - VIAGEM" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - TEXTO".*/
            break;
        case TUVIAGEM::FALHA  : cout << "FALHA  - VIAGEM" << endl;  /** Se o teste falhar, imprime "FALHA  - TEXTO". */
            break;
    }

    TUATIVIDADE testeK;

    switch(testeK.Run()){
        case TUATIVIDADE::SUCESSO: cout << "SUCESSO - ATIVIDADE" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - TEXTO".*/
            break;
        case TUATIVIDADE::FALHA  : cout << "FALHA  - ATIVIDADE" << endl;  /** Se o teste falhar, imprime "FALHA  - TEXTO". */
            break;
    }

    TUDESTINO testeL;

    switch(testeL.Run()){
        case TUDESTINO::SUCESSO: cout << "SUCESSO - DESTINO" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - TEXTO".*/
            break;
        case TUDESTINO::FALHA  : cout << "FALHA  - DESTINO" << endl;  /** Se o teste falhar, imprime "FALHA  - TEXTO". */
            break;
    }

    TUHOSPEDAGEM testeM;

    switch(testeM.Run()){
        case TUHOSPEDAGEM::SUCESSO: cout << "SUCESSO - HOSPEDAGEM" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - TEXTO".*/
            break;
        case TUHOSPEDAGEM::FALHA  : cout << "FALHA  - HOSPEDAGEM" << endl;  /** Se o teste falhar, imprime "FALHA  - TEXTO". */
            break;
    }
    return 0;
}