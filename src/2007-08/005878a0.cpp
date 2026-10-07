// roc 2007-08 005878a0  unit: RBX::Reflection::EnumDescriptor  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005878a0
//
// 005878a0  d98118010000         fld dword ptr [ecx + 0x118]
// 005878a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005878a0 {
    char pad[280];
    float m_x;
    float f();
};
float S_func_005878a0::f()
{
    return m_x;
}
