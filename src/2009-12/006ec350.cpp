// roc 2009-12 006ec350  unit: RBX::Geometry  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ec350
//
// 006ec350  8d8184000000         lea eax, [ecx + 0x84]
// 006ec356  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006779a0@ns_ROCX0000f1@@QAEPAHXZ)

namespace ns_ROCX0000f1 {
struct S_func_006779a0 {
    char pad0[132];
    int m_x;
    int* f();
};
int* S_func_006779a0::f()
{
    return &m_x;
}
}
