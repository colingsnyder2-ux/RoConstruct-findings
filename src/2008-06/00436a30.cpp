// from server: 29% by atomic.potato
struct VCSecureHtmlView {
    void* vtable;
    char pad[0xf0];
    char field_f4;
    VCSecureHtmlView* construct();
};

extern "C" void* __stdcall sub_6a0920(int);

struct COutputView {
    char pad0[0xf8];
    void* field_f8;
    char pad1[0xc];
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    char pad2[0xf8];
    int field_118;
    int field_11c;
    COutputView* construct();
};

COutputView* COutputView::construct()
{
    VCSecureHtmlView* p = ((VCSecureHtmlView*)this)->construct();
    void* q = sub_6a0920(4);
    if (q != 0)
        *(void**)q = (char*)this + 0xf8;
    else
        q = 0;
    *(void**)((char*)this + 0xf8) = q;
    *(int*)((char*)this + 0x108) = 0;
    *(int*)((char*)this + 0x10c) = 0;
    *(int*)((char*)this + 0x110) = 0;
    *(int*)((char*)this + 0x114) = 0;
    *(int*)((char*)this + 0x118) = 0;
    *(int*)((char*)this + 0x11c) = 0;
    return this;
}
