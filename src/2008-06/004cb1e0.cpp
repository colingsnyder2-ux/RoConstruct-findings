// from server: 50% by atomic.potato
extern "C" void __cdecl CallTarget(void *);

struct S
{
    int pad0[4];
    void *field14;
    void f();
};

void S::f()
{
    if (pad0[4] != 0)
        CallTarget(field14);
}
