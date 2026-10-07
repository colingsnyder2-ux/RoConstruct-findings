// roc 2008-06 004e5be0  unit: RBX::Block  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e5be0
//
// 004e5be0  d98164010000         fld dword ptr [ecx + 0x164]
// 004e5be6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004e5be0 {
    char pad[356];
    float m_x;
    float f();
};
float S_func_004e5be0::f()
{
    return m_x;
}
