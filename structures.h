//
// Created by edenh15 on 3/24/25.
//

#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>

namespace graph {

    class Queue {
    private:
        static const int MAX_SIZE = 100;
        int data[MAX_SIZE];
        int front, rear;
    public:
        Queue();
        void enqueue(int value);
        int dequeue();
        bool isEmpty();
    };

    class Stack{
      private:
        static const int MAX_SIZE = 100;
        int data[MAX_SIZE];
        int top;
        public:
          Stack();
          void push(int value);
          int pop();
          bool isEmpty();
          };

}

#endif // QUEUE_H
