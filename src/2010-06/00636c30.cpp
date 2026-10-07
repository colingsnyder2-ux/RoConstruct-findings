// roc 2010-06 00636c30  unit: RBX::Profiling::Profiler  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00636c30
//
// 00636c30  d9817c010000         fld dword ptr [ecx + 0x17c]
// 00636c36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00636c30 {
    char pad[380];
    float m_x;
    float f();
};
float S_func_00636c30::f()
{
    return m_x;
}
