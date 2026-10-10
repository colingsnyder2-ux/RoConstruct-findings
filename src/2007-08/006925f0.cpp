// from server: 49% by colin
struct CXTPStatusBarPane;

struct CXTPStatusBarPaneVtbl
{
    void* padding[37];
    void (__stdcall *func_94)(CXTPStatusBarPane*, int, int, int, int, int);
};

struct CXTPStatusBarPane
{
    char padding[0x50];
    void* field_50;

    void method(int a, int b, int c, int d, int e);
};

struct Helper
{
    void* find(int);
};

extern Helper* g_helper;

void CXTPStatusBarPane::method(int a, int b, int c, int d, int e)
{
    void* p = ((Helper*)field_50)->find(a);
    if (p)
    {
        CXTPStatusBarPaneVtbl* vtbl = *(CXTPStatusBarPaneVtbl**)p;
        vtbl->func_94(this, a, b, c, d, e);
    }
}
