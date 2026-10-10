// from server: 97% by atomic.potato
struct S
{
    int f();
};

extern "C" int __cdecl sub_7f5286(int);
extern "C" int (__thiscall *call_98b768)(int, int);

int S::f()
{
    int a;
    int b;
    a = *(int *)((char *)this + 12);
    b = *(int *)((char *)a + 2704);
    a = *(int *)((char *)b + 436);
    if (a)
    {
        a = sub_7f5286(a);
        return call_98b768(0xB3FD08, a);
    }
    return 0;
}
