// from server: 80% by atomic.potato
typedef int (__cdecl *FunctionType)(int);
typedef int (__thiscall *TypeInfoEqual)(void *, const void *);

extern "C" int __cdecl sub_007f5286(int);
extern "C" TypeInfoEqual g_typeInfoEqual;

struct TToolVerb
{
    int f();
    int pad0[3];
    int field0c;
};

int TToolVerb::f()
{
    int value = *(int *)(*(int *)(field0c + 0) + 0xa90);
    value = *(int *)(value + 0x1b4);
    if (value)
    {
        value = sub_007f5286(value);
        return g_typeInfoEqual((void *)0x00b3f5c4, (const void *)value);
    }
    return 0;
}
