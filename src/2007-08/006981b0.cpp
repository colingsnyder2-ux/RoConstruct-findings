// from server: 89% by colin
struct CPropertyGridItemBrickColor {
    char pad0[0x20];
    int m_20;
    int m_24;
    int m_28;
    int m_2c;
    int m_30;
    CPropertyGridItemBrickColor* f();
};

extern "C" void __stdcall sub_73833a();
extern "C" void (__stdcall *g_77ddac)();

CPropertyGridItemBrickColor* CPropertyGridItemBrickColor::f()
{
    sub_73833a();
    *(int*)this = 0x7d1604;
    g_77ddac();
    m_2c = 0;
    m_24 = 0;
    m_30 = 0;
    m_28 = -1;
    return this;
}
