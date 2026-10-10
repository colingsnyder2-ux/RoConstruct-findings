// from server: 77% by atomic.potato
struct VArrowTool
{
    int *p;

    int f();
};

extern "C" int __cdecl sub_6a1de2(int);
extern "C" int __cdecl sub_802878(int, int);

int VArrowTool::f()
{
    int *a = p;
    int *b = (int *)a[0x204 / 4];
    int v = b[0x3b0 / 4];
    if (v)
        sub_802878(sub_6a1de2(v), 0x94bc74);
    return 0;
}
