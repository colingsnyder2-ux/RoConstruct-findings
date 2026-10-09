// roc 2009-12 0077f670  unit: RBX::BallBallContact  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0077f670
//
// 0077f670  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0077f673  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_006b0db0@ns_ROCX00003c@@QAEHH@Z)

namespace ns_ROCX00003c {
struct S_func_006b0db0 {
    char pad0[52];
    int m_x;
    int f(int a1);
};
int S_func_006b0db0::f(int a1)
{
    return m_x;
}
}
