// from server: 94% by atomic.potato
struct TToolVerb
{
    void f();
};

extern "C" int __cdecl sub_6a1de2(int);
extern "C" int (__thiscall *sub_802878)(int, int);

void TToolVerb::f()
{
    int a = *(int *)((char *)this + 12);
    int b = *(int *)((char *)a + 516);
    int c = *(int *)((char *)b + 944);
    if (c)
    {
        c = sub_6a1de2(c);
        sub_802878(0x94fd50, c);
    }
}
