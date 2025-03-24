//
// Created by edenh15 on 3/24/25.
//
// Created by edenh15 on 3/24/25.
#include "structures.h"
#include <cstdio>
#include <iostream>
using namespace std;

namespace graph {

  void Queue::enqueue(int value) {
    if ((rear + 1) % MAX_SIZE == front) {
      cout << "Queue is full!" << endl;
    } else {
      data[rear] = value;
      rear = (rear + 1) % MAX_SIZE;
    }
  }

  int Queue::dequeue() {
    if (front == rear) {
      cout << "Queue is empty!" << endl;
      return -1; // או כל ערך שמתאים לטפל במצב שבו התור ריק
    } else {
      int val = data[front];
      front = (front + 1) % MAX_SIZE;
      return val;
    }
  }
}
