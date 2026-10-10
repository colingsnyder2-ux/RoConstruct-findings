// from server: 90% by atomic.potato
struct CXTPRibbonControlTab
{
    int Get();
};

int CXTPRibbonControlTab::Get()
{
    struct Base
    {
        int vtable;
    };

    Base *p = *(Base **)((char *)this - 0x84);
    return ((int (__thiscall *)(Base *))(*(int *)p + 0x1ac))(p);
}
