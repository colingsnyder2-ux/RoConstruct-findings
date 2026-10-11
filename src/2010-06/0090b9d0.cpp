// from server: 60% by atomic.potato
struct S
{
    int f(int a, int b, int c);
};

extern "C" void * __cdecl G1_func_004664d0(int);
extern "C" void G1_func_0090a9c0(void *, int, int, int);

int S::f(int a, int b, int c)
{
    void *p = G1_func_004664d0(0);
    G1_func_0090a9c0(p, a, b, c);
    return a;
}
