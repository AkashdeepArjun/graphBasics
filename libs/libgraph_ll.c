

#include<malloc.h>

#include<assert.h>

#include "../headers/graph.h"



struct graph_ll* build_graph(int vertices){

  
  struct graph_ll*G=(struct graph_ll* )malloc(sizeof(struct graph_ll));
  
  assert(G!=NULL);

  G->V=vertices;
  G->E=0;
 
  for (int i=0; i<G->V; i++) {
  

    G->list[i]=(struct ListNode*)malloc(sizeof(struct ListNode));

    G->list[i]->vertex=i;

    G->list[i]->next=NULL;


  }

  
    return G;




}


int insertEdge_ll(struct graph_ll*G,struct edge*e){


  int max_vertex = G->V;
  int from = e->source;
  int to = e->destination;
  if(from <0 || to < 0 || from >max_vertex || to > max_vertex){

    printf(" \n INVALID VERTIX INDEX: CANNOT INSERT EDGE \n ");
    return -1;
  }

  struct ListNode*history=NULL;
  struct ListNode*gps=G->list[from];
  
  while(gps!=NULL){

    if(gps->vertex==to){
      return 0;
    }

    history=gps;
    gps=gps->next;

  

  }

  if(gps==NULL){

    struct ListNode*newNode= (struct ListNode*)malloc(sizeof(struct ListNode));

    assert(newNode!=NULL);

    newNode->vertex=to;

    newNode->next=NULL;

    if(history==NULL){

      G->list[from]=newNode;
      
    }else{

      history->next=newNode;
    }


  }


}


void displayGraph_ll(struct graph_ll*G){

int vertices=G->V;

  assert(vertices>0);


  for(int index=0;index<vertices;index++){

  
    connectedVertices(G->list[index]);


  }





}




void connectedVertices(struct ListNode*head){


struct ListNode*gps=head;

  while(gps!=NULL){

  
    if(gps->next==NULL){
      printf("\n%d",gps->vertex);
    }else {
    
      printf("\n%d => %d",gps->vertex);
    }

    gps=gps->next;
  }



}
