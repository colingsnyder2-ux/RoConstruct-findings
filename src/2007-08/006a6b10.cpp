// from server: 29% by colin
struct CXTPMenuBarMDIMenus {
    void construct();
};

extern "C" void* __cdecl operator_new(unsigned int size);

void* CXTPMenuBarMDIMenus_alloc()
{
    CXTPMenuBarMDIMenus* p = (CXTPMenuBarMDIMenus*)operator_new(0x1c4);
    if (p == 0) {
        p->construct();
    }
    return p;
}
