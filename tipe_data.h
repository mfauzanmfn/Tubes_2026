#ifndef TIPE_DATA_H_INCLUDED
#define TIPE_DATA_H_INCLUDED

#include <iostream>
using namespace std;

struct info_parent1{
    string id;
    string nama_toko;
    string alamat;
};

struct info_child1{
    string id;
    string nama_produk;
    int harga;
    int stok;
};

struct info_parent2{
    string id;
};

struct info_child2{
    string id;
};

struct info_parent3{
    string id;
};

struct info_child3{
    string id;
};

void print_data(info_parent1 x, bool all);
void terima_data(info_parent1 &x, bool all);

void print_data(info_child1 x, bool all);
void terima_data(info_child1 &x, bool all);

void print_data(info_parent2 x, bool all);
void terima_data(info_parent2 &x, bool all);

void print_data(info_child2 x, bool all);
void terima_data(info_child2 &x, bool all);

void print_data(info_parent3 x, bool all);
void terima_data(info_parent3 &x, bool all);

void print_data(info_child3 x, bool all);
void terima_data(info_child3 &x, bool all);

#endif // TIPE_DATA_H_INCLUDED
