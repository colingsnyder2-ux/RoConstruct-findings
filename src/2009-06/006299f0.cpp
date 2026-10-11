// from server: 32% by atomic.potato
struct S {
    char pad[4];
    void* f(int, int, int, int, int);
};

struct T {
    void* g(int, int, int, int, int);
};

extern "C" void __cdecl G1_func_0041bfa0();

void* S::f(int a, int b, int c, int d, int e)
{
    G1_func_0041bfa0();
    return ((T*)this)->g(a, b, c, d, e);
}
