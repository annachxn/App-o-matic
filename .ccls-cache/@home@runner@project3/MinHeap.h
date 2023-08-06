#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "App.h"

using namespace std;
class MinHeap{
private:
  vector<App*> heap;
public:
  MinHeap(){}

  void insertHeap(App* app){
    heap.push_back(app);
    int child = heap.size()-1;
    int parent = (child-1)/2;
    //if child is not root and the parent name should be below child name (child "a" < parent "b")
    while(child > 0 && heap[child]->name.compare(heap[parent]->name) < 0){
        swap(heap[parent], heap[child]);
        child = parent;
        parent = (child-1)/2;
    }
  }
  
  App* peek(){
    return heap[0];
  }
  
  App* extractMin(){
    App* min = heap[0];
    heap[0] = heap[heap.size()-1];
    heap.pop_back();
    heapifyDown(0);
    return min;
  }

  void heapifyDown(int index){
    int minIndex = index;
    if(2 * index + 1 < heap.size() && heap[2 * index + 1]->name.compare(heap[minIndex]->name) < 0){
        minIndex = 2 * index + 1;
    }
    if(2 * index + 2 < heap.size() && heap[2 * index + 2]->name.compare(heap[minIndex]->name) < 0){
        minIndex = 2 * index + 2;
    }
    if(minIndex != index){
        swap(heap[index], heap[minIndex]);
        heapifyDown(minIndex);
    }
  }
  
};