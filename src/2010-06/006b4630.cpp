// roc 2010-06 006b4630  unit: RBX::VObjectValue::?$EventDesc  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006b4630
//
// 006b4630  c6818001000000       mov byte ptr [ecx + 0x180], 0
// 006b4637  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006b4630 {
    char pad0[384];
    char m_x;
    void f(int a1);
};
void S_func_006b4630::f(int a1)
{
    m_x = (char)0;
}
