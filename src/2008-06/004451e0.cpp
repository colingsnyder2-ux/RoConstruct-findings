// roc 2008-06 004451e0  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004451e0
//
// 004451e0  d98144010000         fld dword ptr [ecx + 0x144]
// 004451e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004451e0 {
    char pad[324];
    float m_x;
    float f();
};
float S_func_004451e0::f()
{
    return m_x;
}
