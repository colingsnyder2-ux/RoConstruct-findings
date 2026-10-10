// from server: 28% by colin
struct CXTPPropertyGridItems {
    char pad0[0x20];
    char field20[0x80];
    char fieldA0[4];
    char fieldA4[4];
    char fieldA8[4];
    char fieldAC[0x2C];
    char fieldD8[4];
    char fieldDC[4];
    char fieldE0[4];

    CXTPPropertyGridItems* construct(unsigned int a, unsigned int b, unsigned int c);
};

extern "C" {
    void __stdcall sub_73833a();
    void __stdcall sub_672220();
    void __stdcall sub_77ddac();
    void __stdcall sub_699b40();
    void __stdcall sub_6979a0(unsigned int);
    void __stdcall sub_77dd6c();
    void __stdcall sub_77d434();
    void __stdcall sub_697cb0(unsigned int);
}

CXTPPropertyGridItems* CXTPPropertyGridItems::construct(unsigned int a, unsigned int b, unsigned int c)
{
    sub_73833a();
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
    return this;
}
