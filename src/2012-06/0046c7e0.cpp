// roc 2012-06 0046c7e0  unit: RBX::TeleportCallback  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046c7e0
//
// 0046c7e0  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 0046c7e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0046c7e0 {
    char pad0[148];
    int m_x;
    int f();
};
int S_func_0046c7e0::f()
{
    return m_x;
}
