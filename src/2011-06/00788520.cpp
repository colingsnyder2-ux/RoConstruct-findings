// from server: 97% by atomic.potato
typedef int (__thiscall *TypeInfoCompare)(void *, void *);
typedef int (__thiscall *GlobalCall)(void *, int);

extern "C" int __cdecl sub_0080BBC2(int);
extern TypeInfoCompare g_typeInfoCompare;
extern GlobalCall g_globalCall;

struct TToolVerb
{
    int f();
    int pad0[3];
    int object;
};

int TToolVerb::f()
{
    int *value = *(int **)((char *)object + 0xACC);
    int result = value[0x188 / 4];
    if (result)
    {
        result = sub_0080BBC2(result);
        return g_globalCall((void *)0x00C90C34, result);
    }
    return 0;
}
