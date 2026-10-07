// roc 2010-06 00636ea0  unit: RBX::Profiling::Profiler  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00636ea0
//
// 00636ea0  8d8184010000         lea eax, [ecx + 0x184]
// 00636ea6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00636ea0 {
    char pad0[388];
    int m_x;
    int* f();
};
int* S_func_00636ea0::f()
{
    return &m_x;
}
