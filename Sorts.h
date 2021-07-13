//
// Created by arina on 08.07.2021.
//

#ifndef SORTS_SORTS_H
#define SORTS_SORTS_H
#include <iostream>
#include "Sequence.h"
#include "random"
using namespace std;
template <class T>
void sortBubble(Sequence<T>& vec);

template <class T>
void sortInsertion(Sequence<T>& vec);

template <class T>
void sortSelection(Sequence<T>& vec);

template <class T>
void Merge(Sequence<T>& vec, int begin,int last);
template <class T>
void sortMerge(Sequence<T>&, int begin,int);


template <class T>
int partitionHaore(Sequence<T>& A, int low,int high);
template <class T>
void sortQuick(Sequence<T>&, int,int);


template <class T>
int partitionHaore(Sequence<T>& A, int low,int high);
template<class T>
void sortQuickHoare(Sequence<T>&, int,int);
template <class T>
void swap(T &a1,T &a2) {
    T temp = a1;
    a1 =a2;
    a2 = temp;
}
#endif //SORTS_SORTS_H