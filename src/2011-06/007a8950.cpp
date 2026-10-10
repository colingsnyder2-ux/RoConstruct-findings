// from server: 94% by atomic.potato
struct S
{
};

extern S *G1_func_007a8870();
extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);

S *g_00a40384;
void *g_00a40380;

int __cdecl f(int *p)
{
    S *q;
    int v;

    q = G1_func_007a8870();
    EnterCriticalSection(q);
    v = *(int *)((char *)q + 0x18);
    *p = v;
    *(int *)((char *)q + 0x18) = (int)p;
    LeaveCriticalSection(q);
    return 0;
}
