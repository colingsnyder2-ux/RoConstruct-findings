// roc 2010-06 006d2610  unit: RBX::VSelectionBox::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d2610
//
// 006d2610  8b8170030000         mov eax, dword ptr [ecx + 0x370]
// 006d2616  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d2610 {
    char pad0[880];
    int m_x;
    int f();
};
int S_func_006d2610::f()
{
    return m_x;
}
