// roc 2008-06 00598bd0  unit: RBX::NullController  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598bd0
//
// 00598bd0  8b81e0010000         mov eax, dword ptr [ecx + 0x1e0]
// 00598bd6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00598bd0 {
    char pad0[480];
    int m_x;
    int f();
};
int S_func_00598bd0::f()
{
    return m_x;
}
