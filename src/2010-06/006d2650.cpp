// roc 2010-06 006d2650  unit: RBX::VSelectionBox::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d2650
//
// 006d2650  8b81a4030000         mov eax, dword ptr [ecx + 0x3a4]
// 006d2656  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d2650 {
    char pad0[932];
    int m_x;
    int f();
};
int S_func_006d2650::f()
{
    return m_x;
}
