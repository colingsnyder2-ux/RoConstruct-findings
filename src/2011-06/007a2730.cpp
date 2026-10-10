// from server: 51% by atomic.potato
extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);

struct S
{
    int * __cdecl f(int *);
    int *p;
};

int *S::f(int *a)
{
    int *p = (int *)0;
    EnterCriticalSection(p);
    *a = (int)p[6];
    p[6] = (int)a;
    LeaveCriticalSection(p);
    return p;
}
