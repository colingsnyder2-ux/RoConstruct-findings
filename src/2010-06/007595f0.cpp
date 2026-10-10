// from server: 85% by atomic.potato
extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);

extern "C" void *__cdecl sub_759510();

struct S
{
    void *p18;
};

void * __cdecl f(void **p)
{
    S *q = (S *)sub_759510();
    EnterCriticalSection(q);
    *p = q->p18;
    q->p18 = p;
    LeaveCriticalSection(q);
    return q;
}
