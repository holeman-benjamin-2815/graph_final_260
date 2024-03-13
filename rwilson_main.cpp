#include <iostream>

#include "graphNode.h"
#include "edge.h"

using std::cout;
using std::endl;

int main()
{
    GraphNode A{'A'};
    GraphNode B{'B'};
    GraphNode C{'C'};
    GraphNode D{'D'};
    GraphNode E{'E'};
    GraphNode F{'F'};

    cout << "A.name: " << A.name << endl;

    /* Be aware that an edge names its nodes source and desination,
     but that there is no exlicit directionallity*/
    Edge AB{7, &A, &B};
    Edge AC{9, &A, &C};
    Edge AF{14, &A, &F};

    Edge BC{10, &B, &C};
    Edge BD{15, &B, &D};

    Edge CD{11, &C, &D};
    Edge CF{2, &C, &F};

    Edge DE{6, &D, &E};

    Edge EF{9, &E, &F};

    cout << "AB(weight, src.name, dst->name): " << AB.weight << "," << AB.source->name << "," << AB.destination->name << ".";


    // hook up the edges into the nodes
    A.neighbors.push_back(&AB);
    B.neighbors.push_back(&AB);

    A.neighbors.push_back(&AC);    
    C.neighbors.push_back(&AC);

    A.neighbors.push_back(&AF);    
    F.neighbors.push_back(&AF);

    B.neighbors.push_back(&BC);    
    C.neighbors.push_back(&BC);

    B.neighbors.push_back(&BD);    
    D.neighbors.push_back(&BD);

    C.neighbors.push_back(&CD);    
    D.neighbors.push_back(&CD);

    C.neighbors.push_back(&CF);    
    F.neighbors.push_back(&CF);

    D.neighbors.push_back(&DE);    
    E.neighbors.push_back(&DE);

    E.neighbors.push_back(&EF);    
    F.neighbors.push_back(&EF);    

    // source, destination comlication may come up here.
    cout << "A.neighbors[0]->destination->name: " << A.neighbors[0]->destination->name  << endl;

    return 0;
}
