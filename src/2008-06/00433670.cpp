// from server: 41% by atomic.potato
struct CXTTreeCtrlBase {
    char pad0[0x60];
    void* vtable60;
    char pad1[0x34];
    void* self94;
    void CXTTreeCtrlBase_ctor();
};

struct CMemberTreeView : CXTTreeCtrlBase {
    char pad2[0x40];
    void* vtable0;
    char pad3[0x44];
    char field_a8;
    int field_ac;
    void* CMemberTreeView_ctor();
};

void CXTTreeCtrlBase::CXTTreeCtrlBase_ctor()
{
    extern void sub_6dbb40();
    sub_6dbb40();
    *(void**)this = (void*)0x8559fc;
    *(void**)((char*)this + 0x60) = (void*)0x855974;
    *(void**)((char*)this + 0x94) = this;
}

void* CMemberTreeView::CMemberTreeView_ctor()
{
    extern void sub_6a0e48();
    CXTTreeCtrlBase_ctor();
    *(void**)this = (void*)0x8129b4;
    *(void**)((char*)this + 0x60) = (void*)0x81292c;
    sub_6a0e48();
    field_a8 = 1;
    field_ac = 0;

    return this;
}
