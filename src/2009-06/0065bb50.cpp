// roc 2009-06 0065bb50  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065bb50
//
// 0065bb50  8a8130010000         mov al, byte ptr [ecx + 0x130]
// 0065bb56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0065bb50 {
    char pad0[304];
    char m_x;
    char f();
};
char S_func_0065bb50::f()
{
    return m_x;
}
