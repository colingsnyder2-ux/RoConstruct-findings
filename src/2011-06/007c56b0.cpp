// from server: 91% by atomic.potato
struct S
{
};

extern "C" void *__cdecl func_007c5510();
extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);

void __cdecl f(void **p)
{
    void *q = func_007c5510();
    EnterCriticalSection(q);
    *p = *(void **)((char *)q + 0x18);
    *(void **)((char *)q + 0x18) = p;
    LeaveCriticalSection(q);
}
