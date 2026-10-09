// roc 2009-12 006cb050  unit: RBX::Profiling::Profiler  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006cb050
//
// 006cb050  d98178010000         fld dword ptr [ecx + 0x178]
// 006cb056  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00636c10@ns_ROCX00008c@@QAEMXZ)

namespace ns_ROCX00008c {
struct S_func_00636c10 {
    char pad[376];
    float m_x;
    float f();
};
float S_func_00636c10::f()
{
    return m_x;
}
}
