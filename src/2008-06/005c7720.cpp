// from server: 86% by atomic.potato
extern "C" int __cdecl sub_006a1de2(int);
extern "C" int __cdecl sub_00802878(int, int);

struct TToolVerb
{
    int f();
    int pad0[3];
};

int TToolVerb::f()
{
    int p = *(int *)((char *)this + 12);
    int v = *(int *)((char *)p + 0x204);
    v = *(int *)((char *)v + 0x3b0);
    if (v)
    {
        int x = sub_006a1de2(v);
        sub_00802878(0x95092c, x);
    }
    return 0;
}
