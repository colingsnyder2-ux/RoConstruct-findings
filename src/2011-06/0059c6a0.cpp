// roc 2011-06 0059c6a0  unit: RBX::VRunService::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059c6a0
//
// 0059c6a0  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 0059c6a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0059c6a0 {
    char pad0[188];
    int m_x;
    int f();
};
int S_func_0059c6a0::f()
{
    return m_x;
}
