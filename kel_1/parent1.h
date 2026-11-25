#ifndef PARENT1_H_INCLUDED
#define PARENT1_H_INCLUDED

#include "../tipe_data.h"
#include "relasi1.h"

#include <iostream>
using namespace std;

typedef struct elm_parent1 *adr_parent1;

struct elm_parent1 {
    info_parent1 info;
    List_rel1 relasi;
    adr_parent1 next;
    adr_parent1 prev;
};

struct List_parent1 {
    adr_parent1 first;
    adr_parent1 last;
};

void create_list_parent1(List_parent1 &L);
adr_parent1 alokasi_parent1(info_parent1 x);

void insert_last_parent1(List_parent1 &L, adr_parent1 P);

void delete_first_parent1(List_parent1 &L, adr_parent1 &P);
void delete_last_parent1(List_parent1 &L, adr_parent1 &P);
void delete_parent1(List_parent1 &L, adr_parent1 &P);

void print_list_parent1(List_parent1 L, bool all);
adr_parent1 find_element_parent1(List_parent1 L, info_parent1 x);

void add_child1(adr_parent1 &R, adr_child1 K);
void remove_child1(adr_parent1 &R, adr_child1 &K);

#endif // PARENT1_H_INCLUDED
