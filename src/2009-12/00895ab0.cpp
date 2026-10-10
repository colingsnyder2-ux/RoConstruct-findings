// from server: 68% by atomic.potato
extern void G1_func_00894c70();

struct S
{
    int f(int);
    int *member;
};

int S::f(int value)
{
    int *object;
    int (**vtable)(int *, int);

    object = (int *)member;
    G1_func_00894c70();
    vtable = (int (**)(int *, int))*(int (**)(int *))object;
    return vtable[90](object, value);
}
