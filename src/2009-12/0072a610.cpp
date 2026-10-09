// roc 2009-12 0072a610  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0072a610
//
// 0072a610  8d4140               lea eax, [ecx + 0x40]
// 0072a613  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00686f20@ns_ROCX000015@@QAEPAHXZ)

namespace ns_ROCX000015 {
struct S_func_00686f20 {
    char pad0[64];
    int m_x;
    int* f();
};
int* S_func_00686f20::f()
{
    return &m_x;
}
}
