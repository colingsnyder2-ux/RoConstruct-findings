// roc 2009-12 00657d30  unit: RBX::BasicPartInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00657d30
//
// 00657d30  8b8184020000         mov eax, dword ptr [ecx + 0x284]
// 00657d36  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00749640@ns_ROCX000017@@QAEHXZ)

namespace ns_ROCX000017 {
struct S_func_00749640 {
    char pad0[644];
    int m_x;
    int f();
};
int S_func_00749640::f()
{
    return m_x;
}
}
