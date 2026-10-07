// roc 2011-06 00666b80  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00666b80
//
// 00666b80  8a81ee010000         mov al, byte ptr [ecx + 0x1ee]
// 00666b86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00666b80 {
    char pad0[494];
    char m_x;
    char f();
};
char S_func_00666b80::f()
{
    return m_x;
}
