// roc 2009-12 0052f670  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052f670
//
// 0052f670  8b01                 mov eax, dword ptr [ecx]
// 0052f672  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_004da260@ns_ROCX000033@@QAEHXZ)

namespace ns_ROCX000033 {
struct S_func_004da260 {
    int m_x;
    int f();
};
int S_func_004da260::f()
{
    return m_x;
}
}
