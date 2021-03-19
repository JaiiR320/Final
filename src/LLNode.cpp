#include "LLNode.h"

template <typename T>
int LLNode<T>::length() {
	LLNode<T>* t = this;
	int len = 0;
	while (t) {
		len++;
		t = t->next;
	}
	return len;
}

template <typename T>
void LLNode<T>::append(T d) {
	LLNode<T>* t = this;
	LLNode<T>* n = new LLNode<T>(d);
	if (t->data == 0) {
		t->data = d;
	}
	else {
		while (t) {
			if (!(t->next)) {
				t->next = n;
				break;
			}
			t = t->next;
		}
	}
}

template <typename T>
LLNode<T>* LLNode<T>::get(int i) {
	LLNode<T>* t = this;
	for (int j = 0; j < i; j++) {
		t = t->next;
	}
	return t;
}

template <typename T>
int LLNode<T>::indexOf(T d) {
	LLNode<T>* t = this;
	int count = 0;
	while (t) {
		if (t->data == d)
			return count;
		t = t->next;
		count++;
	}
	return -1;
}

template <typename T>
void LLNode<T>::print() {

}