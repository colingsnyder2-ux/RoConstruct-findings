// from server: 85% by colin
struct CXTPToolBar {
    char pad[0xfc];
    void* field_fc;
    char pad2[0x178 - 0xfc - 4];
    int field_178;

    void CControlButtonExpand(int arg);
};

struct Inner {
    char pad[0xfc];
    int field_fc;
};

extern "C" void* __stdcall sub_63a000();

void CXTPToolBar::CControlButtonExpand(int arg)
{
    void* p = sub_63a000();
    Inner* inner = *(Inner**)((char*)this + 0xfc);
    void** vtbl = *(void***)p;
    void* fn = vtbl[0xac / 4];
    int flag = (inner->field_fc != 4) ? 1 : 0;
    flag = (flag - 1) & 3;
    int* ptr = (int*)((char*)this + 0x178);
    typedef void (__stdcall *Fn)(void*, int, int, void*, void*, int, int*);
    ((Fn)fn)(p, arg, flag, this, inner, 1, ptr);
}
