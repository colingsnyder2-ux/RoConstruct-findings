// from server: 94% by atomic.potato
struct TToolVerb
{
    int pad0[3];
    int value;

    int f();
};

extern "C" int __cdecl sub_006a1de2(int);
extern "C" int (__thiscall *sub_00802878)(int, int);

int TToolVerb::f()
{
    int value = *(int *)((*(int *)((char *)this + 12)) + 0x204);
    value = *(int *)(value + 0x3b0);
    if (value)
    {
        value = sub_006a1de2(value);
        sub_00802878(0x950874, value);
    }
    return 0;
}
