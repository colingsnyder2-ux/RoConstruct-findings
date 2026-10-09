// roc 2009-12 007f9660  unit: CXTPCommandBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9660
//
// 007f9660  8b8138010000         mov eax, dword ptr [ecx + 0x138]
// 007f9666  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0071b470@ns_ROCX00001f@@QAEHXZ)

namespace ns_ROCX00001f {
struct S_func_0071b470 {
    char pad0[312];
    int m_x;
    int f();
};
int S_func_0071b470::f()
{
    return m_x;
}
}
