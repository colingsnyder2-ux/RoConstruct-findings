// roc 2009-06 006df8b0  unit: RBX::BallBallContact  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006df8b0
//
// 006df8b0  837c240400           cmp dword ptr [esp + 4], 0
// 006df8b5  750a                 jne 0x6df8c1
// 006df8b7  8b442408             mov eax, dword ptr [esp + 8]
// 006df8bb  894110               mov dword ptr [ecx + 0x10], eax
// 006df8be  c20800               ret 8
// 006df8c1  8b542408             mov edx, dword ptr [esp + 8]
// 006df8c5  895114               mov dword ptr [ecx + 0x14], edx
// 006df8c8  c20800               ret 8
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
