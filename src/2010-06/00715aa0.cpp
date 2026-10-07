// roc 2010-06 00715aa0  unit: RBX::BallBallContact  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00715aa0
//
// 00715aa0  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00715aa3  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00715aa0 {
    char pad0[52];
    int m_x;
    int f(int a1);
};
int S_func_00715aa0::f(int a1)
{
    return m_x;
}
