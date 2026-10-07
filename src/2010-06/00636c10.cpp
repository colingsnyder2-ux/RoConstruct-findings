// roc 2010-06 00636c10  unit: RBX::Profiling::Profiler  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00636c10
//
// 00636c10  d98178010000         fld dword ptr [ecx + 0x178]
// 00636c16  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00636c10 {
    char pad[376];
    float m_x;
    float f();
};
float S_func_00636c10::f()
{
    return m_x;
}
