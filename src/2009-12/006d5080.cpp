// from server: 97% by atomic.potato
typedef int BOOL;

extern "C" int __cdecl sub_007f5286(int);
extern "C" int (__thiscall *g_call)(void *, int);

struct TToolVerb
{
    int f();
    int pad0[3];
};

int TToolVerb::f()
{
    int a;
    int b;

    a = *(int *)((char *)this + 12);
    b = *(int *)((char *)a + 2704);
    a = *(int *)((char *)b + 436);
    if (a)
    {
        a = sub_007f5286(a);
        return g_call((void *)0x00b3f140, a);
    }
    return 0;
}
