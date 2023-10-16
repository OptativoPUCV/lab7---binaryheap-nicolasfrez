#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "heap.h"

typedef struct nodo{
   void* data;
   int priority;
}heapElem;

typedef struct Heap{
  heapElem* heapArray;
  int size;
  int capac;
} Heap;


void* heap_top(Heap* pq)
{
  if(pq->size==0)
    return NULL;

  return pq->heapArray->data;
}



void heap_push(Heap* pq, void* data, int priority)
{
  if(pq->size==pq->capac)
  {
    int newCap;
    pq->heapArray=realloc(pq->heapArray,sizeof(heapElem)*pq->capac);
    pq->capac=newCap;

  }
  int currentIndex = pq->size;
  pq->heapArray[currentIndex].data = data;
  pq->heapArray[currentIndex].priority = priority;
  pq->size++;

  while(currentIndex>0)
    {
      parent
    }
  

  
  
}


void heap_pop(Heap* pq){

}

Heap* createHeap()
{
  Heap* newHeap = (Heap*)malloc(sizeof(Heap));
  if(newHeap==NULL)
   return NULL;

  newHeap->size = 0;
  newHeap->capac = 3;
  newHeap->heapArray = (heapElem*)malloc(sizeof(heapElem) * newHeap->capac);
  if(newHeap->heapArray==NULL)
  {
    free(newHeap);
    return NULL;
  }
  return newHeap;
}
