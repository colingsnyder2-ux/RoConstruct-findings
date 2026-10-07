// roc 2008-06 00445200  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445200
//
// 00445200  d9814c010000         fld dword ptr [ecx + 0x14c]
// 00445206  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00445200 {
    char pad[332];
    float m_x;
    float f();
};
float S_func_00445200::f()
{
    return m_x;
}
