// from server: 64% by atomic.potato
extern "C" void __stdcall CallFunction(void *, void *, unsigned long);

struct S
{
    void *f(void *);
};

void *S::f(void *arg)
{
    void *p = (char *)this + 0x54;
    CallFunction(arg, p, 0);
    return arg;
}
