// from server: 93% by colin
struct CXTPRibbonScrollableBar {
    char pad[0xfc];
    int field_fc;
    char pad2[0x168 - 0xfc - 4];
    int field_168;
    void CControlGroupsScroll(int);
};

struct Inner {
    virtual void vfunc();
};

extern "C" void* __fastcall sub_643a40(int);

void CXTPRibbonScrollableBar::CControlGroupsScroll(int arg) {
    Inner* p = (Inner*)sub_643a40(field_fc);
    void** vtbl = *(void***)p;
    typedef void (__thiscall *Fn)(Inner*, int, CXTPRibbonScrollableBar*);
    Fn fn = (Fn)vtbl[0x164 / 4];
    fn(p, field_168, this);
}
