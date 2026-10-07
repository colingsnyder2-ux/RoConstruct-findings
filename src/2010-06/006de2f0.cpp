// roc 2010-06 006de2f0  unit: RBX::VFrame::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006de2f0
//
// 006de2f0  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 006de2f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006de2f0 {
    char pad0[228];
    int m_x;
    int f();
};
int S_func_006de2f0::f()
{
    return m_x;
}
