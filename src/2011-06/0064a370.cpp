// roc 2011-06 0064a370  unit: RBX::VGameSettings::?$GlobalAdvancedSettingsItem  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064a370
//
// 0064a370  8a81a0000000         mov al, byte ptr [ecx + 0xa0]
// 0064a376  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0064a370 {
    char pad0[160];
    char m_x;
    char f();
};
char S_func_0064a370::f()
{
    return m_x;
}
