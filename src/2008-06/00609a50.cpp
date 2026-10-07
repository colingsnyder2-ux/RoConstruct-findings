// roc 2008-06 00609a50  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00609a50
//
// 00609a50  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 00609a56  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00609a50 {
    char pad0[332];
    int m_x;
    int f();
};
int S_func_00609a50::f()
{
    return m_x;
}
