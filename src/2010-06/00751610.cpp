// from server: 73% by atomic.potato
struct CriticalSection {
    long data[6];
};

extern "C" void __stdcall EnterCriticalSection(CriticalSection *);
extern "C" void __stdcall LeaveCriticalSection(CriticalSection *);

struct Body {
    char pad[24];
    void *value;
    void f(void **);
};

extern Body *Body_751480(Body *);

void Body::f(void **out)
{
    Body *p = Body_751480(this);
    EnterCriticalSection((CriticalSection *)p);
    *out = p->value;
    p->value = out;
    LeaveCriticalSection((CriticalSection *)p);
}
