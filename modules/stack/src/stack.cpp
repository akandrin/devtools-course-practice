// Copyright 2023 Kandrin Alexey

#include "include/stack.h"

template<class T, class Container>
T& Stack<T, Container>::top() {
    return m_data.back();
}


template<class T, class Container>
const T& Stack<T, Container>::top() const {
    return m_data.back();
}


template<class T, class Container>
bool Stack<T, Container>::empty() const {
    return m_data.empty();
}


template<class T, class Container>
void Stack<T, Container>::push(const T& value) {
    m_data.push_back(value);
}


template<class T, class Container>
void Stack<T, Container>::pop() {
    m_data.pop_back();
}


template class Stack<int>;  // explicit template instantiation
