
#include <iostream>
#include "Graph.h"
#include "Algorithms.h"
#include "structures.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    graph::Graph g(5);
    g.addEdge(0, 1, 10);
    g.addEdge(1, 2, 20);
    g.addEdge(0,1,10);
    g.print_graph();
    g.removeEdge(0,1);
    g.print_graph();
    g.releaseMemory();
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.