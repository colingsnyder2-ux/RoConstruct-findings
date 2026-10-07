// roc 2008-06 004451f0  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004451f0
//
// 004451f0  d98148010000         fld dword ptr [ecx + 0x148]
// 004451f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004451f0 {
    char pad[328];
    float m_x;
    float f();
};
float S_func_004451f0::f()
{
    return m_x;
}
