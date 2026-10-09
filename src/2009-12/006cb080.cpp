// roc 2009-12 006cb080  unit: RBX::Profiling::Profiler  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006cb080
//
// 006cb080  8a8180010000         mov al, byte ptr [ecx + 0x180]
// 006cb086  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00636c60@ns_ROCX00008f@@QAEDXZ)

namespace ns_ROCX00008f {
struct S_func_00636c60 {
    char pad0[384];
    char m_x;
    char f();
};
char S_func_00636c60::f()
{
    return m_x;
}
}
