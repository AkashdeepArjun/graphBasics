#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

struct graph {
 
  int V;
  int E;
  int** adjMatric;
};


struct edge{

  int source;
  int destination;
};

struct ListNode{

  int vertex;

  struct ListNode*next;

};


struct graph_ll{
  
  int V;
  int E;
  struct ListNode*list[];
  

};


struct graph* init_graph(int);

struct edge* createEdge(int,int);

void showEdges(struct graph*);

void removeEdge(struct graph*,struct edge*,int);

void insertEdge(struct graph*,struct edge*,int);

void displayGraph(struct graph*);



//ADJACENCY LIST graph
//
//



struct graph_ll* init_graph_ll(int);
/**/
/*struct edge* createEdge(int,int);*/

void showEdges(struct graph_ll*,int);

void removeEdge(struct graph_li*,struct edge*,int);

void insertEdge_ll(struct graph_li*,struct edge*);

void displayGraph(struct graph_li*);

#endif
