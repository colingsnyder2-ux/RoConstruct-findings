// from server: 90% by atomic.potato
struct TToolVerb
{
    int Execute();
};

typedef int (__cdecl *CompareTypeInfo)(const void *, const void *);
typedef int (__thiscall *GlobalCall)(void *, int);

extern "C" int __cdecl sub_006a1de2(int);
extern "C" CompareTypeInfo g_compare;
extern "C" void *g_object;

int TToolVerb::Execute()
{
    int *p = *(int **)((char *)this + 0x0c);
    int *q = *(int **)((char *)p + 0x204);
    int value = *(int *)((char *)q + 0x3b0);

    if (value)
    {
        value = sub_006a1de2(value);
        ((GlobalCall)g_compare)(g_object, value);
    }

    return 0;
}
