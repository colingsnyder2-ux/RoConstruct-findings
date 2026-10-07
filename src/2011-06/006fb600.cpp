// roc 2011-06 006fb600  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fb600
//
// 006fb600  d981b0000000         fld dword ptr [ecx + 0xb0]
// 006fb606  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006fb600 {
    char pad[176];
    float m_x;
    float f();
};
float S_func_006fb600::f()
{
    return m_x;
}
