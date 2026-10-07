// roc 2010-06 00636c20  unit: RBX::Profiling::Profiler  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00636c20
//
// 00636c20  d981bc010000         fld dword ptr [ecx + 0x1bc]
// 00636c26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00636c20 {
    char pad[444];
    float m_x;
    float f();
};
float S_func_00636c20::f()
{
    return m_x;
}
