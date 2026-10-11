// from server: 34% by atomic.potato
extern "C" void* __cdecl f004bb250(int, int, int, int);
extern "C" void __cdecl f00663340(void*, int, int, int);

struct S
{
    int f(int, int, int);
};

int S::f(int a, int b, int c)
{
    void* p = f004bb250(0, 0, 0, 0);
    f00663340(p, c, b, a);
    return a;
}
