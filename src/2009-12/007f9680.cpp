// roc 2009-12 007f9680  unit: CXTPPopupBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9680
//
// 007f9680  8b81d4010000         mov eax, dword ptr [ecx + 0x1d4]
// 007f9686  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0071b490@ns_ROCX000020@@QAEHXZ)

namespace ns_ROCX000020 {
struct S_func_0071b490 {
    char pad0[468];
    int m_x;
    int f();
};
int S_func_0071b490::f()
{
    return m_x;
}
}
