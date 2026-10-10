// from server: 17% by colin
struct CXTPControlOleItems
{
    char pad0[0x28];
    int m_nIndex;
    char pad2[0x80 - 0x2c];
    int m_nCount;
    char pad3[0xd0 - 0x84];
    int m_nFlags;
    char pad4[0xf4 - 0xd4];
    void* m_pItems;
    char pad5[0xfc - 0xf8];
    void* m_pControl;
    void OnSelect(int);
};

extern "C" void* __stdcall GetSubMenu(void*, int);
extern "C" int __stdcall GetMenuItemCount(void*);
extern "C" void* __stdcall CreatePopupMenu();

extern "C" void __stdcall sub_631AD0();
extern "C" void __stdcall sub_63000A();
extern "C" void __stdcall sub_6301E4();
extern "C" void __stdcall sub_630202();
extern "C" void __stdcall sub_6302F8();
extern "C" void __stdcall sub_63046C();
extern "C" void __stdcall sub_630472();
extern "C" void __stdcall sub_63A700();
extern "C" void __stdcall sub_643980();
extern "C" void __stdcall sub_6439B0();
extern "C" void __stdcall sub_647070();
extern "C" void __stdcall sub_671070();
extern "C" void __stdcall sub_677390();
extern "C" void __stdcall sub_67D2A0();
extern "C" void __stdcall sub_738370();
extern "C" void __stdcall sub_738868();
extern "C" void __stdcall sub_73886E();

extern "C" void* __stdcall imp_77dcb8();
extern "C" void* __stdcall imp_77dd98();
extern "C" void* __stdcall imp_77ddac();
extern "C" void* __stdcall imp_77ddbc();
extern "C" void* __stdcall imp_77edfc();
extern "C" void* __stdcall imp_77ee04();
extern "C" void* __stdcall imp_77eeb0();

void CXTPControlOleItems::OnSelect(int)
{
    int i = m_nCount + 1;
    if (i < m_nIndex)
    {
        void* p = 0;
        if (i >= 0 && i < m_nIndex)
            p = (void*)((char*)m_pItems + i * 4);
        sub_631AD0();
        sub_63000A();
        sub_630202();
        sub_6302F8();
        sub_6301E4();
        sub_63046C();
        sub_630472();
        sub_63A700();
        sub_643980();
        sub_6439B0();
        sub_647070();
        sub_671070();
        sub_677390();
        sub_67D2A0();
        sub_738370();
        sub_738868();
        sub_73886E();
        imp_77dcb8();
        imp_77dd98();
        imp_77ddac();
        imp_77ddbc();
        imp_77edfc();
        imp_77ee04();
        imp_77eeb0();
        GetSubMenu(0, 0);
        GetMenuItemCount(0);
        CreatePopupMenu();
    }
}
