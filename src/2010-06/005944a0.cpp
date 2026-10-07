// roc 2010-06 005944a0  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005944a0
//
// 005944a0  8a4176               mov al, byte ptr [ecx + 0x76]
// 005944a3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005944a0 {
    char pad0[118];
    char m_x;
    char f();
};
char S_func_005944a0::f()
{
    return m_x;
}
