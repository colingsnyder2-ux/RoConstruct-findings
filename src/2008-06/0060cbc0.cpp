// roc 2008-06 0060cbc0  unit: RBX::BallBallContact  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060cbc0
//
// 0060cbc0  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0060cbc3  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0060cbc0 {
    char pad0[52];
    int m_x;
    int f(int a1);
};
int S_func_0060cbc0::f(int a1)
{
    return m_x;
}
