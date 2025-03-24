//
// Created by edenh15 on 3/24/25.
//

#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>

namespace graph {

    struct Neighbor {
        int vertex;
        int weight;
        Neighbor* next;
    };

    class Graph {
        private:
            int numV;
            Neighbor** adjacencyList;
        public:
            Graph(int vertices);
            int getNumVertices();
            void addEdge(int src, int dst, int weight=1);
            bool edgeExists(int src, int dst);
            void removeEdge(int src, int dst);
            void removeEdgeOneWay(int src, int dst);
            void print_graph();
            void addNeighbor(int src, int dst, int weight);
            void releaseMemory();
    };

}

#endif

