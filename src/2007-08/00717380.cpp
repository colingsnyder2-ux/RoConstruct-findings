// from server: 23% by colin
struct CXTPRibbonGroup {
    void* vtable;
    char pad[0x1c];
    int f();
};

extern "C" void __fastcall sub_716f60(void*);
extern "C" void __fastcall sub_716ef0(void*);
extern "C" void __fastcall sub_63069a(void*);

int CXTPRibbonGroup::f() {
    *(void**)this = (void*)0x7df31c;
    sub_716f60(this);
    sub_716ef0((char*)this + 0x20);
    sub_63069a(this);
    return (int)this;
}
