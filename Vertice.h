#ifndef VERTICE_H
#define VERTICE_H
#include"Aresta.h"
#include<iostream>

using namespace std;
class Vertice {
/*----------------- File: Vertice.h ---------------------+
|DESCRICAO DO ARQUIVO 								  |
| 													  |
| 													  |
| Implementado por "Gabriel Maximiniano" em 19/10/2018|
+-----------------------------------------------------+ */
    friend ostream& operator<<(ostream& saida, Vertice& v);  
    private:
        char cor;
        Aresta *inicio, *fim;
        int numeroArestas;
        int indice;
    public:
        Vertice();
        virtual ~Vertice();

        void setInicio(Aresta*);
        void setFim(Aresta*);
        void setCor(char);

        char getCor();
        Aresta* getInicio();
        Aresta* getFim();
        Vertice* inserirOrdenado(Aresta*, int);
        Vertice* inserirInicio(Aresta*);
        Aresta* getAresta(int);
        int getNumeroArestas();
        int getIndice();
         
};
#endif