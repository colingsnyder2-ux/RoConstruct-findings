// roc 2008-06 00445210  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445210
//
// 00445210  d98150010000         fld dword ptr [ecx + 0x150]
// 00445216  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00445210 {
    char pad[336];
    float m_x;
    float f();
};
float S_func_00445210::f()
{
    return m_x;
}
