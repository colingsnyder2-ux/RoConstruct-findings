// from server: 87% by atomic.potato
extern "C" int __cdecl sub_7A93C6(int);

struct TToolVerb
{
    int f();
    int pad0[3];
};

int TToolVerb::f()
{
    int a = *(int *)((char *)this + 0x0c);
    int b = *(int *)((char *)a + 0x0aa0);
    int c = *(int *)((char *)b + 0x1b4);
    if (c)
    {
        int d = sub_7A93C6(c);
        typedef int (__thiscall *Fn)(void *, int);
        return ((Fn)0x009ea8d8)((void *)0x00bb705c, d);
    }
    return 0;
}
