// from server: 60% by atomic.potato
extern "C" void __cdecl Function_004ee7d0(int, int);

struct S
{
    void __cdecl f(int, int);
};

void __cdecl S::f(int a, int b)
{
    Function_004ee7d0(a, b);
}
