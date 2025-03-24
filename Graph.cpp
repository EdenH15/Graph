//
// Created by edenh15 on 3/23/25.
//
using namespace std;
#include <cstdio>
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
            if (src<0 || dst<0 || src>=numV || dst>=numV) {
                printf("Error the vertex not found");
            }
            else if (edgeExists(src,dst) || edgeExists(dst,src)) {
                printf("Error the edge already exists");
            }
            else {
                addNeighbor(src,dst,weight);
                addNeighbor(dst,src,weight);
                printf("The edge added");
            }

        }
        bool edgeExists(int src, int dst) {
            Neighbor* current = adjacencyList[src];
            while (current) {
                if (current->vertex == dst) {
                    return true;
                }
                current = current->next;
            }
            return false;
        }

        void addNeighbor(int src, int dst, int weight = 1) {
            Neighbor* newNeighbor = new Neighbor;
            newNeighbor->vertex = dst;
            newNeighbor->weight = weight;
            newNeighbor->next = nullptr;
            if (adjacencyList[src]==nullptr){
                adjacencyList[src] = newNeighbor;
            }
            else {
                newNeighbor->next = adjacencyList[src];
                adjacencyList[src] = newNeighbor;
            }


        }
    };



}

