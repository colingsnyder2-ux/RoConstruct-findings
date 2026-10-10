// from server: 54% by colin
struct CAutoHidePanelTabManagersArray {
    char pad[0x54];
    int field54;
    char pad2[0x50];
    int fieldA8;
    int fieldAC;
    void* fieldB0;
    void* fieldB4;
    char fieldB8[0x10];
    void* fieldC8;

    CAutoHidePanelTabManagersArray* construct(int);
};

extern "C" void __stdcall SetRectEmpty(void*);
extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl unknown_6305da();
extern "C" void __cdecl unknown_71fa90();
extern "C" void __cdecl unknown_738514();
extern "C" void __cdecl unknown_6db0e0();

CAutoHidePanelTabManagersArray* CAutoHidePanelTabManagersArray::construct(int arg) {
    unknown_6305da();
    unknown_71fa90();
    *(void**)this = (void*)0x7d91ec;
    *(void**)((char*)this + 0x54) = (void*)0x7d918c;
    fieldAC = 0;
    fieldA8 = 0;
    void* p = operator_new(0x18);
    if (p) {
        unknown_6db0e0();
        *(void**)p = (void*)0x7d9174;
    } else {
        p = 0;
    }
    fieldB0 = p;
    *(void**)((char*)p + 0x14) = this;
    void* q = operator_new(0x38);
    if (q) {
        unknown_738514();
        *(void**)q = (void*)0x7d8e1c;
    } else {
        q = 0;
    }
    fieldB4 = q;
    SetRectEmpty(fieldB8);
    return this;
}
