// roc 2009-06 0065bc50  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065bc50
//
// 0065bc50  8d8134010000         lea eax, [ecx + 0x134]
// 0065bc56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0065bc50 {
    char pad0[308];
    int m_x;
    int* f();
};
int* S_func_0065bc50::f()
{
    return &m_x;
}
