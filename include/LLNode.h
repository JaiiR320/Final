#pragma once

template <typename T>
class LLNode {
public:
	T data;
	LLNode<T>* next;

	LLNode<T>(T d) : data(d), next(nullptr) {} // default constructor
	int length();
	void append(T d);
	void append(LLNode<T>* node);
	LLNode<T>* get(int i);
	int indexOf(T d);
	void print();
};

