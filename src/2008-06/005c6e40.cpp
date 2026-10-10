// from server: 97% by atomic.potato
extern "C" int __cdecl sub_006a1de2(int);
extern "C" int (__thiscall *sub_00802878)(int, int);

struct TToolVerb
{
    int f();
    int pad0[3];
    int value;
};

int TToolVerb::f()
{
    int a = *(int *)((char *)this + 12);
    int b = *(int *)((char *)a + 516);
    int c = *(int *)((char *)b + 944);
    if (c)
    {
        int d = sub_006a1de2(c);
        return sub_00802878(0x9502d4, d);
    }
    return 0;
}
