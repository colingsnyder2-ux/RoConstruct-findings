// from server: 32% by espeon_1
extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __cdecl sub_6722D0(void*);

struct CXTPControlPopupColor {
    void* Create();
};

void* CXTPControlPopupColor::Create()
{
    void* p = sub_62FEF6(0x17c);
    if (p != 0) {
        sub_6722D0(p);
    }
    return p;
}
