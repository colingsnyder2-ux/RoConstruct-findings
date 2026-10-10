// from server: 33% by colin
struct CXTPControlCheckBox {
    void* operator new(unsigned int size);
    CXTPControlCheckBox* ctor();
};

extern "C" void* __cdecl sub_62fef6(unsigned int size);
extern "C" CXTPControlCheckBox* __cdecl sub_67da20(CXTPControlCheckBox* p);

CXTPControlCheckBox* CXTPControlCheckBox::ctor()
{
    CXTPControlCheckBox* p = (CXTPControlCheckBox*)sub_62fef6(0x168);
    if (p != 0)
        return sub_67da20(p);
    return 0;
}
