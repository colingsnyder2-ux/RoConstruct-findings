// from server: 70% by atomic.potato
struct S;

extern "C" void* __stdcall func_007f5f40(S*);

typedef void (__thiscall *Callback)(void*, void*, void*, int);

struct S
{
    int f(int, void*);
};

int S::f(int a, void* b)
{
    void* p = func_007f5f40(this);
    Callback c = *(Callback*)((*(unsigned long**)p) + 0x5c);
    c(p, b, (void*)this, 0);
    return (int)b;
}
