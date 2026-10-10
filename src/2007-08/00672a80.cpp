// from server: 29% by colin
// roc 2007-08 00672a80  unit: CXTPControlPopupColor  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00672a80

extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __fastcall sub_672370(void*);

struct CXTPControlPopupColor
{
    void __fastcall construct();
};

void __fastcall CXTPControlPopupColor::construct()
{
    sub_672370(this);
}

void* __cdecl create_CXTPControlPopupColor()
{
    CXTPControlPopupColor* p = (CXTPControlPopupColor*)sub_62FEF6(0x16c);
    if (p == 0)
    {
        p->construct();
    }
    return p;
}
