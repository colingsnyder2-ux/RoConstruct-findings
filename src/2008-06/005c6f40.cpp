// from server: 82% by atomic.potato
struct TToolVerb
{
    int field0;
    int field1;
    int field2;
    int field3;

    int f();
};

extern "C" int __cdecl sub_006a1de2(int);
extern "C" int __cdecl sub_00802878(int, int);

int TToolVerb::f()
{
    int a = *(int *)((char *)*(int *)((char *)this + 0xc) + 0x204);
    a = *(int *)((char *)a + 0x3b0);
    if (!a)
        return 0;
    a = sub_006a1de2(a);
    return sub_00802878(0x950388, a);
}
