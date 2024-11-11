#include "dominio.h"

using namespace std;

void AVALIACAO::verifica(int avaliacao){
    if(avaliacao > 6 & avaliacao < 0){}
    else{
        throw invalid_argument("Argumento invalido");
    }
}

void CODIGO::verifica(string codigo){
    if(codigo.length() < 7){}
    else{
        throw invalid_argument("Argumento invalido");
    }
    for(int i=0, i < codigo.lenght(), i++){






    }
}