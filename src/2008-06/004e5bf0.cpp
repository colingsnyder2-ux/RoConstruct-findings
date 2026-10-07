// roc 2008-06 004e5bf0  unit: RBX::Block  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e5bf0
//
// 004e5bf0  d98168010000         fld dword ptr [ecx + 0x168]
// 004e5bf6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004e5bf0 {
    char pad[360];
    float m_x;
    float f();
};
float S_func_004e5bf0::f()
{
    return m_x;
}
