// roc 2009-06 006982a0  unit: RBX::DebrisService  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006982a0
//
// 006982a0  8b81a0000000         mov eax, dword ptr [ecx + 0xa0]
// 006982a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006982a0 {
    char pad0[160];
    int m_x;
    int f();
};
int S_func_006982a0::f()
{
    return m_x;
}
