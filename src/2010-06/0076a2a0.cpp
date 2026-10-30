// roc 2010-06 0076a2a0  unit: RBX::BallBallContact  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0076a2a0
//
// 0076a2a0  837c240400           cmp dword ptr [esp + 4], 0
// 0076a2a5  750a                 jne 0x76a2b1
// 0076a2a7  8b442408             mov eax, dword ptr [esp + 8]
// 0076a2ab  894110               mov dword ptr [ecx + 0x10], eax
// 0076a2ae  c20800               ret 8
// 0076a2b1  8b542408             mov edx, dword ptr [esp + 8]
// 0076a2b5  895114               mov dword ptr [ecx + 0x14], edx
// 0076a2b8  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000019@@QAEXHH@Z)

namespace ns_ROCX000019 {
// from server: 100% by atomic.potato
struct S
{
    void f(int a, int b);
    int pad[4];
    int x;
    int y;
};

void S::f(int a, int b)
{
    if (a == 0)
        x = b;
    else
        y = b;
}
}