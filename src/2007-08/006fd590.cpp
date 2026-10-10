// from server: 87% by colin
struct CXTPDockingPaneAutoHidePanel_CAutoHidePanelTabManager {
    void func_006fd590(int);
};

struct Inner {
    int method1(int);
    int method2(int);
};

extern void sub_006fd100(void*);

void CXTPDockingPaneAutoHidePanel_CAutoHidePanelTabManager::func_006fd590(int arg)
{
    Inner* p = (Inner*)((char*)this + 0x54);
    if (p->method1(arg))
    {
        p->method2(arg);
        sub_006fd100(this);
    }
}
