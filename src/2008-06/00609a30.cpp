// roc 2008-06 00609a30  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00609a30
//
// 00609a30  8b8140010000         mov eax, dword ptr [ecx + 0x140]
// 00609a36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00609a30 {
    char pad0[320];
    int m_x;
    int f();
};
int S_func_00609a30::f()
{
    return m_x;
}
