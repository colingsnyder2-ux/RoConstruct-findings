// roc 2011-06 006fb610  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fb610
//
// 006fb610  d981b4000000         fld dword ptr [ecx + 0xb4]
// 006fb616  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006fb610 {
    char pad[180];
    float m_x;
    float f();
};
float S_func_006fb610::f()
{
    return m_x;
}
