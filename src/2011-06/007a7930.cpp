// from server: 90% by atomic.potato
typedef struct _CRITICAL_SECTION CRITICAL_SECTION;

extern "C" void __stdcall EnterCriticalSection(CRITICAL_SECTION *);
extern "C" void __stdcall LeaveCriticalSection(CRITICAL_SECTION *);

struct S
{
    void __cdecl f(int *);
};

extern "C" int * __cdecl sub_7a7850();
extern "C" void __cdecl sub_a40384(int *);
extern "C" void __cdecl sub_a40380(int *);

void S::f(int *p)
{
    int *v = sub_7a7850();
    sub_a40384(v);
    *p = v[6];
    v[6] = (int)p;
    sub_a40380(v);
}
