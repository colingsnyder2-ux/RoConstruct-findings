// from server: 51% by atomic.potato
struct S
{
    int value;
    void __cdecl f(int);
};

extern "C" void __cdecl sym(int);

void S::f(int x)
{
    sym(value);
}
