// roc 2010-06 00514660  unit: RakPeer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00514660
//
// 00514660  8b81800b0000         mov eax, dword ptr [ecx + 0xb80]
// 00514666  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00514660 {
    char pad0[2944];
    int m_x;
    int f();
};
int S_func_00514660::f()
{
    return m_x;
}
