// roc 2008-06 005a05c0  unit: RBX::Workspace  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a05c0
//
// 005a05c0  8b81fc030000         mov eax, dword ptr [ecx + 0x3fc]
// 005a05c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a05c0 {
    char pad0[1020];
    int m_x;
    int f();
};
int S_func_005a05c0::f()
{
    return m_x;
}
