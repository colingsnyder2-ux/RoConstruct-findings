// from server: 97% by atomic.potato
typedef int BOOL;

struct S
{
    int f();
    int a[4];
};

extern "C" int __cdecl sub_7A93C6(int);
extern "C" int (__thiscall *g_9EA8D8)(void *, int);

int S::f()
{
    int *p = *(int **)((char *)a + 0x0c);
    int *q = *(int **)((char *)p + 0x0aa0);
    int v = *(int *)((char *)q + 0x1b4);
    if (v)
    {
        v = sub_7A93C6(v);
        return g_9EA8D8((void *)0x00bb77fc, v);
    }
    return 0;
}
