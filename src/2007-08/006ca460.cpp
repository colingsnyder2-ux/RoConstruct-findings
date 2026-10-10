// from server: 51% by colin
struct CXTPToolBar_CControlButtonHide {
    void* construct();
};

extern "C" void __stdcall sub_63c810();
extern "C" void __stdcall sub_738334();

void* CXTPToolBar_CControlButtonHide::construct()
{
    sub_63c810();
    *(int*)((char*)this + 0x14) = 0;
    *(int*)((char*)this) = 0x7d791c;
    *(int*)((char*)this + 0x20) = 0x7d78bc;
    sub_738334();
    *(int*)((char*)this + 0xf8) = 1;
    return this;
}
