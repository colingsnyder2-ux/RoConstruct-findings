// roc 2007-08 00444da0  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00444da0
//
// 00444da0  d981f4000000         fld dword ptr [ecx + 0xf4]
// 00444da6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00444da0 {
    char pad[244];
    float m_x;
    float f();
};
float S_func_00444da0::f()
{
    return m_x;
}
