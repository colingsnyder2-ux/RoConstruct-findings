// from server: 79% by atomic.potato
struct S
{
    int f(int);
};

extern "C" int G1_func_004797e0(int);
extern "C" int G2_func_0076a190(S *, int *);

int S::f(int x)
{
    int *p = (int *)G1_func_004797e0(x + 4);
    int value = *p;
    return G2_func_0076a190(this, &value);
}
