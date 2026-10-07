// roc 2008-06 00574fd0  unit: RBX::UnifiedWidget  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00574fd0
//
// 00574fd0  d98180000000         fld dword ptr [ecx + 0x80]
// 00574fd6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00574fd0 {
    char pad[128];
    float m_x;
    float f();
};
float S_func_00574fd0::f()
{
    return m_x;
}
