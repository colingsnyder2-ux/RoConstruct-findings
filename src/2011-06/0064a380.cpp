// roc 2011-06 0064a380  unit: RBX::VGameSettings::?$GlobalAdvancedSettingsItem  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064a380
//
// 0064a380  8a81a1000000         mov al, byte ptr [ecx + 0xa1]
// 0064a386  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0064a380 {
    char pad0[161];
    char m_x;
    char f();
};
char S_func_0064a380::f()
{
    return m_x;
}
