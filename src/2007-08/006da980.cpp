// from server: 34% by colin
struct CXTPDockingPaneAutoHideWnd {
    void Construct();
};

extern "C" void __stdcall sub_6FE2E0();
extern "C" void* __stdcall sub_6FE580(int);

void CXTPDockingPaneAutoHideWnd::Construct()
{
    sub_6FE2E0();
    *(void**)this = (void*)0x7D8E94;
    void* p;
    p = sub_6FE580(0);
    *(int*)((char*)p + 8) = 0;
    p = sub_6FE580(1);
    *(int*)((char*)p + 8) = 0;
}
