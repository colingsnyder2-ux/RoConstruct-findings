// roc 2009-12 00452580  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00452580
//
// 00452580  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 00452586  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0044bf30@ns_ROCX0000b8@@QAEHXZ)

namespace ns_ROCX0000b8 {
struct S_func_0044bf30 {
    char pad0[384];
    int m_x;
    int f();
};
int S_func_0044bf30::f()
{
    return m_x;
}
}
