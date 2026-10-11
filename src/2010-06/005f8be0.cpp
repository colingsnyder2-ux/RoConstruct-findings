// from server: 58% by atomic.potato
struct S
{
    int f(int, int, int);
};

extern "C" void* __cdecl G1_func_004664d0(int);
extern "C" void G1_func_005f7480(void*, int, int, int);

int S::f(int a, int b, int c)
{
    void* p = G1_func_004664d0(0);
    G1_func_005f7480(p, c, b, a);
    return c;
}
