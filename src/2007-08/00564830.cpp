// from server: 82% by colin
struct CXTPDockingPaneAutoHidePanel
{
    void Method(int* p);
};

extern "C" void* __stdcall sub_587110(void* p, int a, int b);

void CXTPDockingPaneAutoHidePanel::Method(int* p)
{
    int* q;
    if (p != 0)
        q = p + 1;
    else
        q = 0;

    void* r = sub_587110((void*)0x8c149c, (int)q, 1);

    void** vtbl = *(void***)this;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vtbl[0];
    fn(this, (void*)p);
}
