// from server: 49% by atomic.potato
extern "C" void __stdcall imported_call(void *, void *);

struct S
{
    int f(void *);
};

int S::f(void *arg)
{
    imported_call((char *)this + 0x28, 0);
    return (int)this;
}
