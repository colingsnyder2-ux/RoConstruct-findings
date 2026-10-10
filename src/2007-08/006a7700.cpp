// from server: 80% by tester
struct CXTPControls
{
    int sub_0067C560(int, int);
    int sub_0067C5B0(int, int, int);
};

struct CXTPRibbonBar
{
    void sub_0063C510();
    int sub_0067C5B0(int, int, int);
    int sub_00639DB0();
    int sub_006A7700();
};

int CXTPRibbonBar::sub_006A7700()
{
    sub_0063C510();

    int v = *(int *)((char *)this + 0x16c);
    if (v == 0)
    {
        int *p = *(int **)((char *)this + 0x170);
        int (__thiscall *fn)(void *, int) = *(int (__thiscall **)(void *, int))(*(int *)p + 0x58);
        return fn(p, v);
    }

    int a = *(int *)((char *)this + 0x168);
    int *p = *(int **)((char *)this + 0x170);
    int r = ((CXTPControls *)p)->sub_0067C5B0(a, -1, 1);

    int flags = *(int *)((char *)r + 0xd0);
    int (__thiscall *fn)(void *, int) = *(int (__thiscall **)(void *, int))(*(int *)r + 0x94);
    flags &= 0xffffffef;
    fn((void *)r, flags);

    return ((CXTPRibbonBar *)r)->sub_00639DB0();
}
