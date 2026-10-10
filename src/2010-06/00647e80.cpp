// from server: 86% by atomic.potato
struct S
{
    int f();
};

extern "C" int __cdecl sub_7A93C6(int);
extern "C" int (__stdcall *call_9EA8D8)(int, int);

int S::f()
{
    int a;
    int b;

    a = *(int *)((char *)this + 12);
    b = *(int *)((char *)a + 2720);
    a = *(int *)((char *)b + 436);
    if (!a)
        return 0;
    a = sub_7A93C6(a);
    return call_9EA8D8(0x00BB7484, a);
}
