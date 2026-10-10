// from server: 64% by atomic.potato
extern "C" void __cdecl G1_func_0045f690();

extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);

struct S
{
    int __cdecl f(int *);
};

int S::f(int *value)
{
    int *object = 0;
    G1_func_0045f690();
    EnterCriticalSection(object);
    *value = object[6];
    object[6] = (int)value;
    LeaveCriticalSection(object);
    return 0;
}
