// from server: 97% by atomic.potato
typedef int (__cdecl *CompareTypeInfo)(const void *, const void *);
typedef int (__thiscall *DispatchType)(void *, int);

extern "C" int __cdecl sub_006a1de2(int);
extern "C" DispatchType g_dispatch;

struct TToolVerb
{
    int f();
    char pad_00[12];
    void *field_0c;
};

int TToolVerb::f()
{
    int *p = *(int **)((char *)field_0c + 0x204);
    int value = *(int *)((char *)p + 0x3b0);
    if (value)
    {
        value = sub_006a1de2(value);
        return g_dispatch((void *)0x9508d0, value);
    }
    return 0;
}
