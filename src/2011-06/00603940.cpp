// roc 2011-06 00603940  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00603940
//
// 00603940  8b813c010000         mov eax, dword ptr [ecx + 0x13c]
// 00603946  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00603940 {
    char pad0[316];
    int m_x;
    int f();
};
int S_func_00603940::f()
{
    return m_x;
}
