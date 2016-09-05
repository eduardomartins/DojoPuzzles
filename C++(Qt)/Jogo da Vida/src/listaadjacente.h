#include "celula.h"

#include <QObject>

typedef QList<Celula> node;

class ListaAdjacente: public QList<Celula>
{
        Q_OBJECT;
public:
        ListaAdjacente(QObject * = 0);
        node lista(void);
        void setLista(const ListaAdjacente &lista);
        
private:
        node Lista;
}

