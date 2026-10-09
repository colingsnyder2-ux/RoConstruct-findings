// roc 2009-12 008773f0  unit: CXTPControlGallery  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008773f0
//
// 008773f0  8b81f8010000         mov eax, dword ptr [ecx + 0x1f8]
// 008773f6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0079c470@ns_ROCX000055@@QAEHXZ)

namespace ns_ROCX000055 {
struct S_func_0079c470 {
    char pad0[504];
    int m_x;
    int f();
};
int S_func_0079c470::f()
{
    return m_x;
}
}
