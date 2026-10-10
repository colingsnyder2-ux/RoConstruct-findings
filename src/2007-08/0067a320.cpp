// from server: 32% by colin
extern "C" void* __cdecl sub_0062FEF6(unsigned int size);
extern "C" void __cdecl sub_0067A190(void* p);

struct CXTPControlComboBoxPopupBar
{
    void* CreateInstance();
};

void* CXTPControlComboBoxPopupBar::CreateInstance()
{
    void* p = sub_0062FEF6(0x248);
    if (p != 0)
    {
        sub_0067A190(p);
    }
    return p;
}
