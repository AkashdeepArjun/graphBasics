#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<assert.h>

#include "../headers/graph.h"



//CREATES GRAPH 

struct graph* init_graph(int vertices){

  assert(vertices>=0);
  struct graph*G = (struct graph*) malloc(sizeof(struct graph*));
    
  assert(G!=NULL);


    G->V=vertices;
    G->E=0;

  G->adjMatric=malloc(vertices* sizeof(int*));

  for(int v=0;v<vertices;v++){

    G->adjMatric[v]=calloc(vertices,sizeof(int));

    assert(G->adjMatric[v]!=NULL);
  }

  return G;

}

// struct graph_ll* init_graph(int vertices){


// assert(vertices>=0);




// }




//DISPLAYS GRAPH MATRIX

void displayGraph(struct graph*G){

  for(int u=0;u<G->V;u++){

    
      for(int v=0;v<G->V;v++){

    
        printf("%.3d",G->adjMatric[u][v]);

    }

    printf("\n");


  }


}

void insertEdge(struct graph*G ,struct edge*E,int directed){

  int from = E->source;
  int to =E->destination;
  int vertices= G->V;
  
  if(from>=vertices || to>=vertices){

  printf("%s\n","EDGE VERTICES OUT OF RANGE");
  exit(EXIT_FAILURE);
}

if(directed){
  G->adjMatric[from][to]=1;

}else{
  G->adjMatric[from][to]=1;
  G->adjMatric[to][from]=1;

}
(G->E)++;

}
//REMOVES EDGE 
void removeEdge(struct graph*G,struct edge*e,int directed){

int from=e->source;
int to=e->destination;
int vertices=G->V;

if(from>=vertices || to>=vertices){
  printf("%s\n","INVALID EDGE VERTICES ");
  exit(EXIT_FAILURE);
}

if(directed){

  G->adjMatric[from][to]=0;

}else{

  G->adjMatric[from][to]=0;
  G->adjMatric[to][from]=0;

}

(G->E)--;

}
//CREATES NEW EDGE 
struct edge* createEdge(int from,int to){

  struct edge* new_edge = (struct edge*)malloc(sizeof(struct edge));
  new_edge->source=from;
  new_edge->destination=to;
  return new_edge;
  
}


//DISPLAY EDGES
/*
 */

void showEdges(struct graph*G){

  
  int vertices=G->V;
  for(int u =0;u<vertices;u++){

      for(int v=0;v<vertices;v++){

        
      G->adjMatric[u][v]==1?printf("%d-%d\n",u,v):printf("");
        
    }


  }

}


