// from server: 94% by atomic.potato
extern "C" int __stdcall func_007f3b0c();

struct CXTPDockingPaneWindowSelect
{
    int unused;
    int *items;
    int count;
    int *f(int index);
};

int *CXTPDockingPaneWindowSelect::f(int index)
{
    if (index < 0 || index >= count)
        return (int *)func_007f3b0c();
    return items + index * 2;
}
