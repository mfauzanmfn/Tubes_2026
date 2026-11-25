#ifndef CHILD1_H_INCLUDED
#define CHILD1_H_INCLUDED

#include "../tipe_data.h"

#include <iostream>
using namespace std;


typedef struct elm_child1 *adr_child1;

struct elm_child1 {
    info_child1 info;
    adr_child1 next;
};

struct List_child1 {
    adr_child1 first;
};

void create_list_child1(List_child1 &L);
adr_child1 alokasi_child1(info_child1 x);

void insert_last_child1(List_child1 &L, adr_child1 P);

void delete_first_child1(List_child1 &L, adr_child1 &P);
void delete_last_child1(List_child1 &L, adr_child1 &P);
void delete_child1(List_child1 &L, adr_child1 &P);

void print_list_child1(List_child1 L, bool all);
adr_child1 find_element_child1(List_child1 L, info_child1 x);


#endif // CHILD1_H_INCLUDED
