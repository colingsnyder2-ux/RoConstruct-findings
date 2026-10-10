// from server: 94% by atomic.potato
typedef struct _CRITICAL_SECTION
{
    unsigned char data[24];
} CRITICAL_SECTION;

extern "C" void __stdcall EnterCriticalSection(CRITICAL_SECTION *);
extern "C" void __stdcall LeaveCriticalSection(CRITICAL_SECTION *);

struct S
{
};

extern "C" S *__cdecl sub_75bb30();

int __cdecl f(int *out)
{
    S *p = sub_75bb30();
    EnterCriticalSection((CRITICAL_SECTION *)p);
    *out = *(int *)((char *)p + 0x18);
    *(int *)((char *)p + 0x18) = (int)out;
    LeaveCriticalSection((CRITICAL_SECTION *)p);
    return 0;
}
