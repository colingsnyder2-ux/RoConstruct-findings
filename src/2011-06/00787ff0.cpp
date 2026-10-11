// from server: 97% by atomic.potato
typedef int (__cdecl *ToolFunction)(int);
typedef int (__thiscall *TypeInfoCompare)(void *, const void *);

extern "C" int __cdecl sub_0080bbc2(int);
extern "C" TypeInfoCompare g_typeInfoCompare;

struct TToolVerb
{
    int f();
    int field_0c;
};

int TToolVerb::f()
{
    int value = *(int *)((char *)*(int *)((char *)this + 0x0c) + 0xacc);
    value = *(int *)((char *)value + 0x188);
    if (value)
    {
        value = sub_0080bbc2(value);
        return g_typeInfoCompare((void *)0x00c90a2c, (const void *)value);
    }
    return 0;
}
