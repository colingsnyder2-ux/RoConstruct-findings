// from server: 94% by atomic.potato
typedef struct
{
    long value;
} CriticalSection;

extern "C" void __stdcall EnterCriticalSection(CriticalSection *);
extern "C" void __stdcall LeaveCriticalSection(CriticalSection *);
extern "C" void *func_007c5570();

struct S
{
};

int __cdecl f(int *result)
{
    int *value = (int *)func_007c5570();
    EnterCriticalSection((CriticalSection *)value);
    *result = value[6];
    value[6] = (int)result;
    LeaveCriticalSection((CriticalSection *)value);
    return 0;
}
