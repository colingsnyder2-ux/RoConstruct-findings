// roc 2011-06 00689a00  unit: RBX::KeyframeSequence  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00689a00
//
// 00689a00  c6819000000000       mov byte ptr [ecx + 0x90], 0
// 00689a07  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00689a00 {
    char pad0[144];
    char m_x;
    void f(int a1);
};
void S_func_00689a00::f(int a1)
{
    m_x = (char)0;
}
