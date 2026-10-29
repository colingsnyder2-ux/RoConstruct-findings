// roc 2009-12 00722600  unit: UString_sink::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722600
//
// 00722600  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00722603  c1e802               shr eax, 2
// 00722606  83e001               and eax, 1
// 00722609  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00685510@ns_ROCX000010@@QAEHXZ)

namespace ns_ROCX000010 {
// from server: 100% by why2
struct S_func_00685510 {
    char pad0[0x58];
    unsigned int m_x;
    int f();
};

int S_func_00685510::f()
{
    return (m_x >> 2) & 1;
}
}
