// roc 2009-06 0065bb20  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065bb20
//
// 0065bb20  d98128010000         fld dword ptr [ecx + 0x128]
// 0065bb26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0065bb20 {
    char pad[296];
    float m_x;
    float f();
};
float S_func_0065bb20::f()
{
    return m_x;
}
