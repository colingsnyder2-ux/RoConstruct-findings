// from server: 52% by atomic.potato
extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);

struct S
{
    S *f();
    void *m18;
};

S *S::f()
{
    S *p = this;
    EnterCriticalSection(p);
    p->m18 = this;
    LeaveCriticalSection(p);
    return p;
}
