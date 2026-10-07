// roc 2008-06 005fd3a0  unit: RBX::LocalBackpack  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd3a0
//
// 005fd3a0  8b81c8010000         mov eax, dword ptr [ecx + 0x1c8]
// 005fd3a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005fd3a0 {
    char pad0[456];
    int m_x;
    int f();
};
int S_func_005fd3a0::f()
{
    return m_x;
}
