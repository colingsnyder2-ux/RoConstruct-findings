// from server: 23% by atomic.potato
struct S_func_007f6060 {
    char pad0[212];
    int m_x;
    void f(int a1);
};

extern "C" void __stdcall func_0083aad0();

struct CXTPRibbonControlSystemButton {
    char pad0[0x20];
    int m_field20;
    void func_008f1930();
};

void CXTPRibbonControlSystemButton::func_008f1930()
{
    func_0083aad0();
    *(int*)this = 0xa0eac4;
    m_field20 = 0xa0ea64;
    ((S_func_007f6060*)((char*)this + 0x20))->f(0x18);
}
