// from server: 96% by atomic.potato
typedef void (__cdecl *FunctionA)(int);
typedef void (__cdecl *FunctionB)(int *);

extern "C" void __cdecl CallA(int);
extern "C" void __cdecl CallB(int *);

struct S
{
    int reserved;
    int reserved2;
    int reserved3;
    int *value;

    void f();
};

void S::f()
{
    int *p = value;
    if (p)
    {
        CallA(*p);
        CallB(p);
    }
}
