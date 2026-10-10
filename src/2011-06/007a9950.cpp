// from server: 91% by atomic.potato
struct S
{
};

extern "C" S *__cdecl sub_007a9870();
extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);

void __cdecl f(S **p)
{
    S *s = sub_007a9870();
    EnterCriticalSection(s);
    *p = *(S **)((char *)s + 24);
    *(S **)((char *)s + 24) = (S *)p;
    LeaveCriticalSection(s);
}
