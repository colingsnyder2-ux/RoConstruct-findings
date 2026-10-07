// roc 2011-06 006a7aa0  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a7aa0
//
// 006a7aa0  c70100000000         mov dword ptr [ecx], 0
// 006a7aa6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a7aa0 {
    int m_x;
    void f();
};
void S_func_006a7aa0::f()
{
    m_x = (int)0;
}
