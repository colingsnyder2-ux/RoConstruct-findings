// from server: 49% by colin
// roc 2007-08 006b2b00  unit: CXTPRibbonTheme  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b2b00

extern "C" {
    int __cdecl _except_handler3(void);
}

struct CXTPRibbonTheme {
    unsigned char pad[0x64c];
    CXTPRibbonTheme();
};

struct CXTPRibbonPaintManager {
    void Init();
};

struct CXTPRibbonThemeSub {
    void Init();
};

extern "C" void __stdcall SetLayeredWindowAttributes(void*, unsigned int, unsigned char, unsigned int);

CXTPRibbonTheme::CXTPRibbonTheme()
{
    unsigned int* p;
    void* v;

    p = (unsigned int*)((char*)this + 0x638);
    *p = 0;
    *(unsigned int*)((char*)this + 0x634) = 0x7c6550;
    *(unsigned int*)((char*)this + 0x63c) = 1;
    *(unsigned int*)((char*)this + 0x62c) = 1;
    *(unsigned int*)((char*)this + 0x590) = 1;
    *(unsigned int*)((char*)this + 0x70) = 1;
    *(unsigned int*)((char*)this + 0xc4) = 0xc;
    *(unsigned int*)((char*)this + 0xc8) = 0x1a;

    v = (void*)((char*)this + 0x648);
    *(void**)v = 0;

    SetLayeredWindowAttributes((void*)((char*)this + 0x104), 0x7c66ac, 0, 0);

    *(unsigned int*)((char*)this + 0x100) = 1;
    *(unsigned int*)((char*)this + 0x8c) = 0;
    *(unsigned int*)((char*)this + 0x644) = 0;
}
