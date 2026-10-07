// roc 2011-06 0059c6b0  unit: RBX::VRunService::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059c6b0
//
// 0059c6b0  8d81dc000000         lea eax, [ecx + 0xdc]
// 0059c6b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0059c6b0 {
    char pad0[220];
    int m_x;
    int* f();
};
int* S_func_0059c6b0::f()
{
    return &m_x;
}
