// from server: 25% by colin
// roc 2007-08 006725f0  unit: CXTPControlPopupColor  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006725f0

extern "C" void* __cdecl sub_62FEF6(unsigned int);

struct CXTPControlPopupColor {
    void* Create();
};

void* CXTPControlPopupColor::Create()
{
    void* p = sub_62FEF6(0x17c);
    if (p != 0) {
        ((void (__thiscall*)(void*))0x6722d0)(p);
    }
    return p;
}
