// roc 2010-06 006d2620  unit: RBX::VSelectionBox::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d2620
//
// 006d2620  8b8174030000         mov eax, dword ptr [ecx + 0x374]
// 006d2626  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d2620 {
    char pad0[884];
    int m_x;
    int f();
};
int S_func_006d2620::f()
{
    return m_x;
}
