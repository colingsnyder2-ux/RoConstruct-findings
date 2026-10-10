// from server: 85% by atomic.potato
typedef int (__cdecl *CompareTypeInfo)(void *, void *);
typedef int (__thiscall *ConvertValue)(int);
typedef int (__thiscall *InvokeTypeInfo)(void *, int);

extern "C" int __cdecl sub_7A93C6(int);
extern "C" int __cdecl import_9EA8D8(void *, int);

struct TToolVerb
{
    int f();
    int pad0[3];
};

int TToolVerb::f()
{
    int a = *(int *)((char *)this + 0x0c);
    int b = *(int *)((char *)a + 0xaa0);
    int c = *(int *)((char *)b + 0x1b4);
    if (c)
    {
        int d = sub_7A93C6(c);
        return import_9EA8D8((void *)0xbb6fac, d);
    }
    return 0;
}
