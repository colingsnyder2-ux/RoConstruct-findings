// from server: 80% by king_originala
struct S;
typedef int (__thiscall *Method)(S *, int);

struct Table {
    Method unused[58];
    Method target;
};

struct S {
    Table *table;
    int f(const int *value);
};

int S::f(const int *value)
{
    return table->target(this, *value);
}
