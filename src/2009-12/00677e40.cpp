// roc 2009-12 00677e40  unit: RBX::GlobalSettings  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00677e40
//
// 00677e40  8b8144010000         mov eax, dword ptr [ecx + 0x144]
// 00677e46  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_005e0c30@ns_ROCX00004c@@QAEHXZ)

namespace ns_ROCX00004c {
struct S_func_005e0c30 {
    char pad0[324];
    int m_x;
    int f();
};
int S_func_005e0c30::f()
{
    return m_x;
}
}
