// from server: 56% by colin
struct CXTPToolBar {
    char pad[0x84];
    int m_nCount;

    void Func(int* pArg);
};

extern "C" void __stdcall sub_66C6C0(int* p);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);
extern "C" void __stdcall sub_632910(int index);
extern "C" void __stdcall sub_66ADF0();
extern "C" void __stdcall sub_66AFB0(void* p);
extern "C" void __stdcall sub_6D2910(void* a, void* b);

void CXTPToolBar::Func(int* pArg)
{
    sub_66C6C0(pArg);
    int i = 0;
    if (m_nCount > 0)
    {
        int* p = pArg + 1;
        do
        {
            sub_632910(i);
            void* v = sub_62FEF6(0x50);
            void* obj;
            if (v == 0)
            {
                sub_66ADF0();
                obj = v;
            }
            else
            {
                obj = 0;
            }
            sub_66AFB0(obj);
            sub_6D2910(*(void**)(p + 2), obj);
            i++;
        } while (i < m_nCount);
    }
}
