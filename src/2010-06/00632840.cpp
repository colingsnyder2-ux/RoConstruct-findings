// roc 2010-06 00632840  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00632840
//
// 00632840  8b81f4000000         mov eax, dword ptr [ecx + 0xf4]
// 00632846  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00632840 {
    char pad0[244];
    int m_x;
    int f();
};
int S_func_00632840::f()
{
    return m_x;
}
