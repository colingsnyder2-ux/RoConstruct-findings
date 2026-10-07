// roc 2010-06 006d2630  unit: RBX::VSelectionBox::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d2630
//
// 006d2630  8b8188030000         mov eax, dword ptr [ecx + 0x388]
// 006d2636  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d2630 {
    char pad0[904];
    int m_x;
    int f();
};
int S_func_006d2630::f()
{
    return m_x;
}
