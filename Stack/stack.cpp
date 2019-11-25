#include <iostream>
#include "stack.h"

Stack :: Stack(){
  top = -1;
}

Stack :: ~Stack(){}

bool Stack :: isEmpty(){
  return top < 0 ;
}

bool Stack :: isFull(){
  return top == MAX - 1;
}

void Stack :: push (int ele){
  if(!isFull()){
    top++;
    elements[top] = ele;
  }
  else{
    std::cout << "Stack Overflow \n";
  }
}

int Stack :: pop(){
  if(!isEmpty()){
    int value  = elements[top];
    top--;
    return value;
  }
  else{
    std :: cout << "Stack Underflow \n";
    return -1;
  }
}

int Stack :: peek(){
  if(!isEmpty()){
    return elements[top];
  }
  else{
    std :: cout << "Stack Underflow \n";
    return -1;
  }
}


int main() {

  Stack S;
  std::cout << S.isEmpty() <<"\n";
  std::cout << S.isFull() << "\n";
  S.push(5);
  S.push(69);
  S.push(420);
  S.push(6969);
  std::cout << S.pop() <<"\n";
  std::cout << S.peek() <<"\n";
  std::cout << S.pop() <<"\n";
  std::cout << S.pop() <<"\n";
  std::cout << S.peek() <<"\n";
  std::cout << S.isEmpty() <<"\n";
  std::cout << S.isFull() << "\n";

  return 0;
}
