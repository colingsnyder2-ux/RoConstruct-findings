// roc 2009-12 007733f0  unit: CXTCaptionButtonTheme  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007733f0
//
// 007733f0  8b4134               mov eax, dword ptr [ecx + 0x34]
// 007733f3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_006a6140@ns_ROCX000031@@QAEHXZ)

namespace ns_ROCX000031 {
struct S_func_006a6140 {
    char pad0[52];
    int m_x;
    int f();
};
int S_func_006a6140::f()
{
    return m_x;
}
}
