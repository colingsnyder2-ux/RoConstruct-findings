// from server: 38% by tester
struct CXTPPropertyGridItemColor {
    void* vtable;
    char pad[0x1c];
    void* field20;
    char pad2[0x7c];
    void* fieldA0;
    void* fieldA4;
    void* fieldA8;
    void* fieldAC;
    char pad3[0x28];
    void* fieldD8;
    void* fieldDC;
    void* fieldE0;

    CXTPPropertyGridItemColor(void* a, void* b, void* c);
};

extern "C" void __stdcall sub_73833a();
extern "C" void __stdcall sub_672220();
extern "C" void __stdcall sub_77ddac();
extern "C" void __stdcall sub_77dd6c();
extern "C" void __stdcall sub_77d434();
extern "C" void __stdcall sub_699b40();
extern "C" void __stdcall sub_6979a0(void*);
extern "C" void __stdcall sub_697cb0(void*);

CXTPPropertyGridItemColor::CXTPPropertyGridItemColor(void* a, void* b, void* c) {
    sub_73833a();
    this->field20 = 0;
    sub_672220();
    *(void**)((char*)this + 0x20) = (void*)0x7d184c;
    *(void**)this = (void*)0x7d1764;
    sub_77ddac();
    sub_77ddac();
    sub_77ddac();
    sub_77ddac();
    sub_77ddac();
    sub_77ddac();
    sub_77ddac();
    sub_699b40();
    sub_6979a0(a);
    sub_77dd6c();
    sub_77d434();
    sub_697cb0(b);
}
