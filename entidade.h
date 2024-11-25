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



#endif
