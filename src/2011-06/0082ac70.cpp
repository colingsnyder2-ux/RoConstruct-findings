// from server: 59% by atomic.potato
extern "C" void sub_0083ec90(void *, int, int);

struct CXTPCommandBarsContextMenus
{
    CXTPCommandBarsContextMenus *f(int);
};

CXTPCommandBarsContextMenus *CXTPCommandBarsContextMenus::f(int value)
{
    CXTPCommandBarsContextMenus *result = this;
    sub_0083ec90((char *)this + 0x24, *(int *)((char *)this + 0x2c), value);
    *(int *)((char *)result + 0x214) = 1;
    return result;
}
