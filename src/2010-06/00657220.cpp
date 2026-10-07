// roc 2010-06 00657220  unit: RBX::KeyframeSequence  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00657220
//
// 00657220  c6819400000000       mov byte ptr [ecx + 0x94], 0
// 00657227  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00657220 {
    char pad0[148];
    char m_x;
    void f(int a1);
};
void S_func_00657220::f(int a1)
{
    m_x = (char)0;
}
