#ifndef RELASI1_H_INCLUDED
#define RELASI1_H_INCLUDED

#include "child1.h"

#include <iostream>
using namespace std;

typedef struct elm_rel1 *adr_rel1;

struct elm_rel1 {
    adr_child1 child;
    adr_rel1 next;
};

struct List_rel1 {
    adr_rel1 first;
};

void create_list_rel1(List_rel1 &L);
adr_rel1 alokasi_rel1(adr_child1 child);

void insert_last_rel1(List_rel1 &L, adr_rel1 P);

void delete_first_rel1(List_rel1 &L, adr_rel1 &P);
void delete_last_rel1(List_rel1 &L, adr_rel1 &P);
void delete_rel1(List_rel1 &L, adr_rel1 &P);

void print_list_rel1(List_rel1 L, bool all);
adr_rel1 find_element_rel1(List_rel1 L, adr_child1 child);



#endif // RELASI1_H_INCLUDED
