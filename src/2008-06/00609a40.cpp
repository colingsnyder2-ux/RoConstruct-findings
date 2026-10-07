// roc 2008-06 00609a40  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00609a40
//
// 00609a40  8b8148010000         mov eax, dword ptr [ecx + 0x148]
// 00609a46  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00609a40 {
    char pad0[328];
    int m_x;
    int f();
};
int S_func_00609a40::f()
{
    return m_x;
}
