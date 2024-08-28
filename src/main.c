
#include<stdio.h>
#include<stdlib.h>
#include "graph.h"

int main(){

struct graph*g =init_graph(5);

struct edge *e1= createEdge(0,1);

struct edge*e2 = createEdge(1,2);

struct edge *e3 = createEdge(2,3);

struct edge *e4 = createEdge(3,0);

struct edge *e5 = createEdge(2,0);


insertEdge(g,e1,1);

insertEdge(g,e2,1);

insertEdge(g,e3,1);

insertEdge(g,e4,1);

insertEdge(g,e5,1);

  showEdges(g);

  printf("\n..... REMOVING EDGE 3-0 .....\n");


  removeEdge(g,e4,1);

  showEdges(g);


return 0;
}
