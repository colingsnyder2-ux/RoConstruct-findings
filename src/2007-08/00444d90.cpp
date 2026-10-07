// roc 2007-08 00444d90  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00444d90
//
// 00444d90  d981f0000000         fld dword ptr [ecx + 0xf0]
// 00444d96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00444d90 {
    char pad[240];
    float m_x;
    float f();
};
float S_func_00444d90::f()
{
    return m_x;
}
