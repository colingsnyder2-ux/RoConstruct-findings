// from server: 60% by atomic.potato
struct S
{
    int f();
    int a4;
    int a8;
};

extern "C" int __stdcall G1_func_0098de80(int *);
extern "C" int __stdcall G2_func_0098de84(int *);

int S::f()
{
    int v = G1_func_0098de80(&a4);
    return G2_func_0098de84(&a8) == v;
}
