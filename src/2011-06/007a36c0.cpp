// from server: 94% by atomic.potato
struct S
{
};

extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);

extern "C" S *__cdecl sub_7a35e0();

int __cdecl f(int *p)
{
    S *s = sub_7a35e0();
    EnterCriticalSection(s);
    *p = *(int *)((char *)s + 24);
    *(int *)((char *)s + 24) = (int)p;
    LeaveCriticalSection(s);
    return 0;
}
