// roc 2007-08 00444d80  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00444d80
//
// 00444d80  d981ec000000         fld dword ptr [ecx + 0xec]
// 00444d86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00444d80 {
    char pad[236];
    float m_x;
    float f();
};
float S_func_00444d80::f()
{
    return m_x;
}
