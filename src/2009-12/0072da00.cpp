// roc 2009-12 0072da00  unit: RBX::PriorityThreadPool::PriorityThreadPoolData  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0072da00
//
// 0072da00  dd8198000000         fld qword ptr [ecx + 0x98]
// 0072da06  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006acf60@ns_ROCX000045@@QAENXZ)

namespace ns_ROCX000045 {
struct S_func_006acf60 {
    char pad[152];
    double m_x;
    double f();
};
double S_func_006acf60::f()
{
    return m_x;
}
}
