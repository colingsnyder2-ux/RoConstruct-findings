// from server: 91% by atomic.potato
struct S
{
};

extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);
extern S * __cdecl G1_func_0074deb0();

void __cdecl f(void *p)
{
    S *q = G1_func_0074deb0();
    EnterCriticalSection(q);
    *(void **)((char *)p) = *(void **)((char *)q + 0x18);
    *(void **)((char *)q + 0x18) = p;
    LeaveCriticalSection(q);
}
