// from server: 91% by atomic.potato
struct S
{
};

extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);
extern S *G1_func_0074df70();

void __cdecl f(int *p)
{
    S *s = G1_func_0074df70();
    EnterCriticalSection(s);
    *p = *(int *)((char *)s + 24);
    *(int *)((char *)s + 24) = (int)p;
    LeaveCriticalSection(s);
}
