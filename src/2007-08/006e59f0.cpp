// from server: 36% by colin
// roc 2007-08 006e59f0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 520 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e59f0

struct CColorSetVisualStudio2005 {
    unsigned char pad[0x1e0];
    void* f();
};

extern "C" void __stdcall sub_73833a();
extern "C" void __stdcall sub_6684a0();
extern "C" void __stdcall sub_6684c0();
extern "C" void __stdcall sub_69e7a0();
extern "C" void __stdcall sub_6ffa60();
extern "C" void __stdcall sub_6ffa80();
extern "C" void __stdcall sub_703040();
extern "C" void* __stdcall sub_62fef6(unsigned int);
extern "C" void __stdcall sub_77ddb8();
extern "C" void __stdcall sub_77ed78();

void* CColorSetVisualStudio2005::f()
{
    sub_73833a();
    *(void**)((char*)this + 0x00) = (void*)0x7da3c4;
    sub_6684a0();
    sub_6684a0();
    sub_6684c0();
    *(void**)((char*)this + 0x84) = (void*)0x794a08;
    *(void**)((char*)this + 0x88) = 0;
    *(void**)((char*)this + 0x8c) = (void*)0x794a08;
    *(void**)((char*)this + 0x90) = 0;
    *(void**)((char*)this + 0x94) = 0;
    sub_77ddb8();
    sub_69e7a0();
    sub_69e7a0();
    sub_69e7a0();
    sub_69e7a0();
    void* p = sub_62fef6(0x134);
    if (p) {
        sub_703040();
    } else {
        p = 0;
    }
    *(void**)((char*)this + 0x9c) = p;
    sub_6ffa80();
    sub_6ffa60();
    *(int*)((char*)p + 0x38) = 1;
    *(int*)((char*)p + 0x28) = 0;
    *(int*)((char*)p + 0xdc) = 1;
    void* q = sub_62fef6(0x134);
    if (q) {
        sub_703040();
    } else {
        q = 0;
    }
    *(void**)((char*)this + 0xa0) = q;
    sub_6ffa80();
    *(int*)((char*)q + 0x38) = 2;
    *(int*)((char*)q + 0x28) = 0;
    *(int*)((char*)q + 0x80) = 1;
    *(int*)((char*)q + 0x84) = 0;
    *(int*)((char*)this + 0x30) = 0;
    *(int*)((char*)this + 0x28) = 4;
    *(int*)((char*)this + 0x34) = 0;
    sub_77ed78();
    *(int*)((char*)this + 0x7c) = 5;
    *(int*)((char*)this + 0x1b8) = 5;
    *(int*)((char*)this + 0x2c) = 1;
    *(int*)((char*)this + 0x98) = 1;
    *(int*)((char*)this + 0x24) = 1;
    *(int*)((char*)this + 0x20) = 1;
    *(int*)((char*)this + 0x74) = 0;
    *(int*)((char*)this + 0x70) = 0;
    *(int*)((char*)this + 0x78) = 0;
    *(int*)((char*)this + 0x80) = 0;
    *(int*)((char*)this + 0x1dc) = 0;
    return this;
}
