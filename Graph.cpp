//
// Created by edenh15 on 3/23/25.
//
using namespace std;
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
            Graph(const int vertices) {
                this->numV = vertices;
                adjacencyList = new Neighbor*[vertices];
                for (int i = 0; i < vertices; i++) {
                    adjacencyList[i] = nullptr;
                }
            }

            void addEdge(int src, int dst, int weight = 1) {


            }




    }

}

