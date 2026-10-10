// from server: 64% by atomic.potato
extern "C" void __cdecl call_409ea0(void *, void *, int);

struct S
{
    void * __cdecl f(void *, void *);
};

void *S::f(void *a, void *b)
{
    void *p = a;
    call_409ea0(p, b, 0);
    return p;
}
