#ifndef STACK_H
#define STACK_H
#define MAX 100

class Stack{
private:
  int elements[MAX];
  int top;
public:
  Stack();
  ~Stack();

  bool isEmpty();     //check if the stack is empty
  bool isFull();      //check if the stack is full
  void push(int ele); //inserts element into stack
  int pop();          //remove the top element
  int peek();         //see the top element
};

#endif //STACK_H
