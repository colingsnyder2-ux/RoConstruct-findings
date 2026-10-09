// roc 2009-12 0087ecf0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087ecf0
//
// 0087ecf0  8b81c8050000         mov eax, dword ptr [ecx + 0x5c8]
// 0087ecf6  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_007a3db0@ns_ROCX000061@@QAEHXZ)

namespace ns_ROCX000061 {
struct S_func_007a3db0 {
    char pad0[1480];
    int m_x;
    int f();
};
int S_func_007a3db0::f()
{
    return m_x;
}
}
