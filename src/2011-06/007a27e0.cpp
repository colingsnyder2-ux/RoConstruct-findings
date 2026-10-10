// from server: 55% by atomic.potato
extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);

struct Body
{
    int *f();
};

int *Body::f()
{
    int *p;
    EnterCriticalSection(p = (int *)this);
    p[6] = (int)this;
    LeaveCriticalSection(p);
    return p;
}
