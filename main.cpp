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
    
    TUAVALIACAO testeB; /**< teste para a classe TUAVALIACAO*/

    switch(testeB.Run()){
        case TUAVALIACAO::SUCESSO: cout << "SUCESSO - AVALIACAO" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - AVALIACAO".*/
            break;
        case TUAVALIACAO::FALHA  : cout << "FALHA  - AVALIACAO" << endl;  /**< Se o teste falhar, imprime "FALHA  - AVALIACAO". */
            break;
    }

    TUDATA testeC; /**< teste para a classe TUDATA*/

    switch(testeC.Run()){
        case TUDATA::SUCESSO: cout << "SUCESSO - DATA" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - DATA".*/
            break;
        case TUDATA::FALHA  : cout << "FALHA  - DATA" << endl;  /** Se o teste falhar, imprime "FALHA  - DATA". */
            break;
    }

    TUDINHEIRO testeD; /**< teste para a classe TUDINHEIRO*/

    switch(testeD.Run()){
        case TUDINHEIRO::SUCESSO: cout << "SUCESSO - DINHEIRO" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - DINHEIRO".*/
            break;
        case TUDINHEIRO::FALHA  : cout << "FALHA  - DINHEIRO" << endl;  /** Se o teste falhar, imprime "FALHA  - DINHEIRO". */
            break;
    }

    TUSENHA testeE; /**< teste para a classe TUSENHA*/

    switch(testeE.Run()){
        case TUSENHA::SUCESSO: cout << "SUCESSO - SENHA" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - SENHA".*/
            break;
        case TUSENHA::FALHA  : cout << "FALHA  - SENHA" << endl;  /** Se o teste falhar, imprime "FALHA  - SENHA". */
            break;
    }

    TUDURACAO testeF; /**< teste para a classe TUDURACAO*/

    switch(testeF.Run()){
        case TUDURACAO::SUCESSO: cout << "SUCESSO - DURACAO" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - DURACAO".*/
            break;
        case TUDURACAO::FALHA  : cout << "FALHA  - DURACAO" << endl;  /** Se o teste falhar, imprime "FALHA  - DURACAO". */
            break;
    }

    TUCONTA testeG; /**< teste para a classe TUCONTA*/

    switch(testeG.Run()){
        case TUCONTA::SUCESSO: cout << "SUCESSO - CONTA" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - CONTA".*/
            break;
        case TUCONTA::FALHA  : cout << "FALHA - CONTA" << endl;  /** Se o teste falhar, imprime "FALHA  - CONTA". */
            break;
    }

    TUHORARIO testeH; /**< teste para a classe TUHORARIO*/

    switch(testeH.Run()){
        case TUHORARIO::SUCESSO: cout << "SUCESSO - HORARIO" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - HORARIO".*/
            break;
        case TUHORARIO::FALHA  : cout << "FALHA - HORARIO" << endl;  /** Se o teste falhar, imprime "FALHA  - HORARIO". */
            break;
    }

    TUNOME testeI; /**< teste para a classe TUNOME*/

    switch(testeI.Run()){
        case TUNOME::SUCESSO: cout << "SUCESSO - NOME" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - NOME".*/
            break;
        case TUNOME::FALHA  : cout << "FALHA - NOME" << endl;  /** Se o teste falhar, imprime "FALHA  - NOME". */
            break;
    }

    TUVIAGEM testeJ; /**< teste para a classe TUVIAGEM*/

    switch(testeJ.Run()){
        case TUVIAGEM::SUCESSO: cout << "SUCESSO - VIAGEM" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - VIAGEM".*/
            break;
        case TUVIAGEM::FALHA  : cout << "FALHA  - VIAGEM" << endl;  /** Se o teste falhar, imprime "FALHA  - VIAGEM". */
            break;
    }

    TUATIVIDADE testeK; /**< teste para a classe TUATIVIDADE*/

    switch(testeK.Run()){
        case TUATIVIDADE::SUCESSO: cout << "SUCESSO - ATIVIDADE" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - ATIVIDADE".*/
            break;
        case TUATIVIDADE::FALHA  : cout << "FALHA  - ATIVIDADE" << endl;  /** Se o teste falhar, imprime "FALHA  - ATIVIDADE". */
            break;
    }

    TUDESTINO testeL; /**< teste para a classe TUDESTINO*/

    switch(testeL.Run()){
        case TUDESTINO::SUCESSO: cout << "SUCESSO - DESTINO" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - DESTINO".*/
            break;
        case TUDESTINO::FALHA  : cout << "FALHA  - DESTINO" << endl;  /** Se o teste falhar, imprime "FALHA  - DESTINO". */
            break;
    }

    TUHOSPEDAGEM testeM; /**< teste para a classe TUHOSPEDAGEM*/

    switch(testeM.Run()){
        case TUHOSPEDAGEM::SUCESSO: cout << "SUCESSO - HOSPEDAGEM" << endl; /**< Se o teste for bem-sucedido, imprime "SUCESSO - HOSPEDAGEM".*/
            break;
        case TUHOSPEDAGEM::FALHA  : cout << "FALHA  - HOSPEDAGEM" << endl;  /** Se o teste falhar, imprime "FALHA  - HOSPEDAGEM". */
            break;
    }
    return 0;
}