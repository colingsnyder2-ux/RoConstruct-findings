// roc 2011-06 00666b90  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00666b90
//
// 00666b90  8a81ef010000         mov al, byte ptr [ecx + 0x1ef]
// 00666b96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00666b90 {
    char pad0[495];
    char m_x;
    char f();
};
char S_func_00666b90::f()
{
    return m_x;
}
