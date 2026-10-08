// roc 2007-08 00444d70  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00444d70
//
// 00444d70  d981e8000000         fld dword ptr [ecx + 0xe8]
// 00444d76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00444d70 {
    char pad[232];
    float m_x;
    float f();
};
float S_func_00444d70::f()
{
    return m_x;
}
