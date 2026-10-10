// from server: 85% by atomic.potato
typedef int (__cdecl *FunctionType)(int);
typedef int (__thiscall *MethodType)(void *, int);

extern "C" int __cdecl Function_007f5286(int);
extern "C" int __cdecl Function_0098b768(void *, int);

struct TToolVerb
{
    int pad0[3];
    void *object;
    int f();
};

int TToolVerb::f()
{
    void *a = *(void **)((char *)object + 0xa90);
    int value = *(int *)((char *)a + 0x1b4);
    if (value)
    {
        value = Function_007f5286(value);
        return Function_0098b768((void *)0xb3fcac, value);
    }
    return 0;
}
