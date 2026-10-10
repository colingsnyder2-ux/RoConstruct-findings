// from server: 94% by atomic.potato
struct S
{
    int f();
};

extern "C" int __cdecl sub_006A1DE2(int);
extern "C" void (__thiscall *sub_00802878)(int, int);

int S::f()
{
    int a;
    int b;

    a = *(int *)((char *)this + 12);
    b = *(int *)((char *)a + 516);
    a = *(int *)((char *)b + 944);

    if (a)
    {
        a = sub_006A1DE2(a);
        sub_00802878(0x950510, a);
    }

    return 0;
}
